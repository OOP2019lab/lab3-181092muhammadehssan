#include<iostream>
#include"class.h"

void area::drawRectangle()
{
	for (int i = 0;i < length;i++)
	{
		for (int j = 0;j < width;j++)
		{
			cout << "*";

		}
		cout << endl;
	}
}
void area::rotaterectangle()
{
	int temp;
	temp = length;
	length = width;
	width = temp;

}

int area::getWidthofRectangle()
{
	return width;

}
void area::setlenghtofRectangle(int l)
{
	length = l;
	
}
void area::setwidthofRectangle(int w)
{
	width = w;
}
int area::getareaofRectangle()
{
	int area;
	area = length*width;
	return area;
}
int area ::getlengthofRectangle()
{
	return length;
}
