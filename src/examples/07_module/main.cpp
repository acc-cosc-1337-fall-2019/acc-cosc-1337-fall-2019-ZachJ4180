//main
#include<iostream>
#include<memory>
#include<vector>
#include "shape.h"
#include "line.h"
#include "circle.h"

int main() 
{
	//Shape s_abtract; can't create instance; pure virtual
	//function makes it an abstract class

	Shape* line = new Line();	//creates dynamic memory (heap)

	line->draw();	//executes the line classes draw() function

	delete line;


	std::vector<Shape*> shapes{new Line(), new Circle()};	//vector of Shape pointers
	

	for (auto& shape : shapes) 
	{
		shape->draw();
	}

	std::cout << "\n";
	
	for (auto* shape : shapes)
	{
		shape->draw();
	}

	std::cout << "\n";


	
	std::unique_ptr<Shape> l = std::make_unique<Line>();	//Shape instance using Smart Pointer
	
	l->draw();


	//vector of Shape instances using Smart Pointers
	std::vector <std::unique_ptr < Shape >> shaps;

	shaps.push_back(std::make_unique< Line >());

	shaps.push_back(std::make_unique< Circle >());


	for (auto & shape : shaps)
	{
		shape->draw();
	}


	std::unique_ptr <Shape> line2 = std::make_unique <Line>();

	line2->draw();


	std::vector <std::unique_ptr <Shape>> shapes2;

	shapes2.push_back(std::make_unique<Line>());

	shapes2.push_back(std::make_unique<Circle>());


	for (auto & shape : shapes2)
	{
		shape->draw();
	}


	return 0;
}