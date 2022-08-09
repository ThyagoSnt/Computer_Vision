#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

///////////////  Color Detection  //////////////////////

void main(void) {
    string path = "Resources/lambo.png";
    Mat img = imread(path);

    Mat imgHSV, mask;
    int hmin = 0, smin = 110, vmin = 153;
    int hmax = 19, smax = 240, vmax = 255;

    cvtColor(img, imgHSV, COLOR_BGR2HSV); //CONVERTENDO A COR DA IMAGEM PARA O TIPO HSV E FACILITAR A CAPTURA DE INTERVALOS DE CORES

    namedWindow("Trackbars", (640, 200)); //CRIANDO UMA NOVA JANELA COM TABELAS PARA CONSEGUIR OS VALORES DESEJADOS SOBRE AS CORES
    createTrackbar("Hue min", "Trackbars", &hmin, 255); //CRIANDO UMA BARRA INTERNA QUE ALTERA O VALOR DA VARIAVEL ATÉ O MÁXIMO DEFINIDO
    createTrackbar("Sat min", "Trackbars", &smin, 255);
    createTrackbar("Val min", "Trackbars", &vmin, 255);
    createTrackbar("Hue max", "Trackbars", &hmax, 255);
    createTrackbar("Sat max", "Trackbars", &smax, 255);
    createTrackbar("Val max", "Trackbars", &vmax, 255);

    while(true){
        Scalar lower(hmin, smin, vmin); //DEFININDO UM INTERVALO DE CORES MINIMO E MÁXIMO
        Scalar upper(hmax, smax, vmax);
        inRange(imgHSV, lower, upper, mask); //GERANDO UMA "MASCARA" QUE CAPTURA A IMAGEM NO INTERVALO

        imshow("Image", img);
        imshow("Image HSV", imgHSV);
        imshow("Image Mask", mask);
        waitKey(1); //DIFERENTE DE 0 QUANDO A IMAGEM SE ALTERA NO LOOP
    }
}