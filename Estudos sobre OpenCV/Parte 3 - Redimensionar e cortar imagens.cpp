#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;


///////////////  Recize and Crop  //////////////////////

void main(void) {

    string path = "Resources/test.png";
    Mat img = imread(path);
    Mat imgResized, imgCrop; // DECLARANDO UMA IMAGEM AJUSTADA

    resize(img, imgResized, Size(640, 480)); //DEFININDO UM NOVO TAMANHO A IMAGEM

    Rect roi(100, 100, 300, 250); //DEFININDO A AREA DE CORTE DA IMAGEM
    imgCrop = img(roi);


    imshow("Image", img);
    imshow("Image Resized", imgResized);
    imshow("Image Croppped", imgCrop);

    waitKey(0);

}