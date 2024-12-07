#include "dynarr2.h"
#include <iostream>
using namespace std;
dynArr2::dynArr2()
{
	row = 1;
	col = 1;
	data2 = new int* [row];
	
	for (int i = 0; i < row; i++) {
		data2[i] = new int [col];
	}
}
dynArr2::dynArr2(int r,int c)
{
	row = r;
	col = c;
	data2 = new int* [row];
	
	for (int i = 0; i < row; i++) {
		data2[i] = new int [col];
	}
}
dynArr2:: ~dynArr2()
{
	for (int i = 0; i < row; i++) {
		delete[] data2[i];
	}
	delete[] data2;
}
int dynArr2::getValue2(int i, int j)
{
	return data2[i][j];
}
void dynArr2::setValue2(int i, int j, int value)
{
	data2[i][j] = value;
}
