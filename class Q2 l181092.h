#include<iostream>
using namespace std;

class area
{
private:
	int length;
		int width;
public:
	int getWidthofRectangle();//This will take width of rectangle
	int getlengthofRectangle();//This will take length of rectangle
	int getareaofRectangle();//This will calculate the area
	void setlenghtofRectangle(int l);//This will set the length of rectangle to the user input
	void setwidthofRectangle(int w);//This will set the width of rectangle to the user input
	void rotaterectangle();//THis will swap length with width and vice versa
	void drawRectangle();//This will draw patteren of * rectangle
};

