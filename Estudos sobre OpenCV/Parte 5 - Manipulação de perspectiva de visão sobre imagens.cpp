#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

///////////////  Warp Perspective  //////////////////////
 
void main(void) {
	float w = 250, h = 350; //TAMANHO ESCOLHIDO PRA IMAGEM RESULTANTE

	string path = "Resources/cards.jpg";
	Mat img = imread(path);
	Mat matrix, imgWarp;

	Point2f src[4] = { {529,142},   {771,190}, {405, 395}, {674, 457}}; //PONTOS DA IMAGEM ORIGINAL
	Point2f dst[4] = { {0.0f,0.0f}, {w,0.0f},  {0.0f, h},  {w, h}};     //PONTOS EQUIVALENTES NA IMAGEM RESULTANTE

	matrix = getPerspectiveTransform(src, dst); //MATRIZ DE TRANSFORMACAO LINEAR
	warpPerspective(img, imgWarp, matrix, Point(w, h)); //CRIANDO UMA IMAGEM DESTINO ULTILIZANDO A IMAGEM BASE E A MATRIZ DE TRANSFORMACAO LINEAR
	
	imshow("Image", img);
	imshow("Image Warp", imgWarp);
	waitKey(0);
}