//#include <opencv2/imgcodecs.hpp>
//#include <opencv2/highgui.hpp>
//#include <opencv2/imgproc.hpp>
//#include <iostream>
//
//using namespace cv;
//using namespace std;
//
///////////////////  Basic Functions  //////////////////////
//
//void getContours(Mat img) {
//
//}
//
//void main(void){
//
//    string path = "Resources/shapes.png";
//    Mat img = imread(path);
//    Mat imgGray, imgBlur, imgCanny, imgDil;
//
//    // PRE-PROCESSAMENTO DE IMAGENS
//    cvtColor(img, imgGray, COLOR_BGR2GRAY); //PARA AGRUPAR TODAS AS CORES NUMA ESCALA DE 8 BITS DE CINZA
//    GaussianBlur(imgGray, imgBlur, Size(5,5),3,0);
//    Canny(imgBlur, imgCanny, 10, 30);
//
//    Mat kernel = getStructuringElement(MORPH_RECT, Size(3, 3));
//    dilate(imgCanny, imgDil, kernel); //QUANDO SE TRATA DE PRE-PROCESSAMENTO ADILATACAO SERVE PARA DETECTAR MELHOR AS LINHAS
//
//    getContours(imgDil);
//
//
//    imshow("Image", img);
//    imshow("Image Canny", imgCanny);
//    imshow("Image Gray", imgGray);
//    imshow("Image Blur", imgBlur);
//    imshow("Image Dilated", imgDil);
//
//    waitKey(0);
//
//}