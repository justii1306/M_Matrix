#include <stdio.h>
#include <iostream>

class Matrix{
private:
	double ** matrix;
	int width, heigth;
public:
	Matrix(int, int);
	~Matrix();
}
