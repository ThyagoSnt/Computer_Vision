#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

/////////////////  Basic Functions  //////////////////////

void main(void){

    string path = "Resources/test.jpeg";
    Mat img = imread(path);
    Mat imgGray, imgBlur, imgCanny, imgDil, imgErode, imgFlip; //CRIANDO IMAGENS AUXILIARES

    cvtColor(img, imgGray, COLOR_BGR2GRAY);//A SEGUNDA IMAGEM RECEBE A PRIMEIRA COMO BASE, E COVERTEMOS A COR PARA CINZA
    GaussianBlur(imgGray, imgBlur, Size(5,5),3,0); //IMAGEM COM O EFEITO BLUR APLICADO
    Canny(imgBlur, imgCanny, 10, 30); //IMAGEM COM EFEITO DE BORDAS

    Mat kernel = getStructuringElement(MORPH_RECT, Size(3, 3));
    dilate(imgCanny, imgDil, kernel); //DILATANDO A IMAGEM COM EFEITO CANNY
    erode(imgDil, imgErode, kernel); //APLICANDO EFEITO DE "CORROSAO" NA IMAGEM
 
	  flip(img, imgFlip, 1); // INVERTENDO A IMAGEM (1=X)(0=Y)(-1 = X & Y)

    imshow("Image", img);
    imshow("Image Canny", imgCanny);
    imshow("Image Gray", imgGray);
    imshow("Image Blur", imgBlur);
    imshow("Image Dilated", imgDil);
    imshow("Image Erode", imgErode);
	  imshow("Image Flip", imgFlip);

    waitKey(0);

}