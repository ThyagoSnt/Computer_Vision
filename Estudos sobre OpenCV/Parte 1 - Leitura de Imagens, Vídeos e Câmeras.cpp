//#include <opencv2/imgcodecs.hpp>
//#include <opencv2/highgui.hpp>
//#include <opencv2/imgproc.hpp>
//#include <iostream>
//
//using namespace cv;
//using namespace std;


/////////////////  Images  //////////////////////

//void main(void) {
//
//    string path = "Resources/test.jpeg"; //DIRETORIO COM O RESOURCE
//    Mat img = imread(path); //MATRIZ QUE RECEBE A IMAGEM
//    imshow("Image", img); //EXIBIR A JANELA COM A IMAGEM
//    waitKey(0); //NAO FECHAR A IMAGEM AUTOMATICAMENTE
//
//}

/////////////////  Video  //////////////////////

//void main(void) {
//
//    string path = "Resources/test_video.mp4";
//    VideoCapture cap(path);
//    Mat img;
//
//    while (true) {
//
//        cap.read(img);
//        imshow("Image", img); //EXIBIR O FRAME ATUAL
//        waitKey(1); //TEMPO DE ESPERA EM MS PRA O PROX FRAME
//        
//    }
//
//}

/////////////////  Webcam  //////////////////////

//void main(void) {
//
//    VideoCapture cap(0); //ENCAMINHANDO PARA A WEBCAM DE INDEX 0 (PADRAO SE NN TIVER MAIS CAMERAS)
//    Mat img;
//
//    while (true) {
//
//        cap.read(img);
//        imshow("Image", img); //EXIBIR O FRAME ATUAL
//        waitKey(1); //TEMPO DE ESPERA EM MS
//
//    }
//
//}