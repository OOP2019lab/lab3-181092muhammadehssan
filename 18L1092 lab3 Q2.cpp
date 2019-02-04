#include<iostream>
#include"class.h"
using namespace std;
int main()
{
	area triangle1;
	int lengthofRectangle;
	int widthofRectangle;
	cout << "Enter the length : ";
	cin >> lengthofRectangle;//inputing length and width of rectangle
	cout << "enter the width : ";
	cin >> widthofRectangle;
	//Function calls
	triangle1.setlenghtofRectangle(lengthofRectangle);
	triangle1.setwidthofRectangle(widthofRectangle);
	triangle1.getlengthofRectangle();
	triangle1.getWidthofRectangle();
	triangle1.getareaofRectangle();
	triangle1.rotaterectangle();
	triangle1.drawRectangle();
}