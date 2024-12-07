#ifndef DYNARR2_H_INCLUDED
#define DYNARR2_H_INCLUDED
class dynArr2
{
private:
	int** data2;
	int row,col;
public:
	dynArr2();
	dynArr2(int, int);
	~dynArr2();
	void setValue2(int, int, int);
	int getValue2(int, int);
};
#endif // DYNARR_H_INCLUDED