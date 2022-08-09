#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/objdetect.hpp>
#include <iostream>

using namespace cv;
using namespace std;

/////////////  Face Detection  //////////////////////

void main(void){

    VideoCapture cap(0);
    Mat img;

    CascadeClassifier faceCascade;
    faceCascade.load("Resources/haarcascade_frontalface_default.xml"); //CARREGANDO UM MODELO TREINADO PARA DETECTAR ROSTOS
    vector<Rect> faces; //DECLARAMOS UMA ARRAY PARA ARMAZENAR ROSTOS

    while(cap.read(img)){

        flip(img, img, 1); //INVERTENDO A IMAGEM
        faceCascade.detectMultiScale(img, faces, 1.1, 4); //DETECTANDO O NUMERO DE ROSTOS NA IMAGEM

        for(int i = 0; i < faces.size(); i++) { //DESENHANDO UM RETANGULO E "FACE" PARA CADA FACE ENCONTRADA
            rectangle(img, faces[i].tl(), faces[i].br(), Scalar(255, 255, 255), 3);
            putText(img, "Face", faces[i].br(), FONT_HERSHEY_DUPLEX, 1.35, Scalar(0, 0, 255), 2);
        }

        imshow("Image", img); //EXIBIR O FRAME ATUAL
        waitKey(1);
    }
}