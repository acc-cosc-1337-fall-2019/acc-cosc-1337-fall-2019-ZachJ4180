//Write include statement

#include "rectangle.h"
#include <vector>

using std::cout;
using std::cin;

/*
Write the class function code for the Rectangle class with one constructor that accepts two int parameters (width, height),
has one public function area that returns the area of the rectangle, and one private function calculate_area
that calculates area of the rectangle.  The class has 3 int private variables area, width, and height.
*/

Rectangle::Rectangle(int w, int h)						//?????
{
	int width = w;

	int height = h;
}

int area()																	//yes
{
	return width * height;
}

void acc::Rectangle::calculate_area()
{
	rectangles.push_back(acc::Rectangle(4, 6));			//?????
}

int acc::Rectangle::get_area() const										//yes
{
	return area;
}

std::ostream & acc::operator << (std::ostream & out, const Rectangle & r)	//yes
{
	out << "Area: " << r.area << "\n";
}