#include <stdio.h>
#include <iostream>
#include "Matrix.h"

Matrix::Matrix(int w, int h){
	width = w;
	heigth = h;
	int **wektory = new int *[w];
	for (int i = 0; i < w; ++i)
   		wektory[i] = new int [h];
}

Matrix::~Matrix(){

}
