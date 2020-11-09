#pragma once
#include <iostream>

using namespace std;

class flat_geometric_shape
{
public:
	virtual double area() = 0;

	virtual double perimeter() = 0;

	virtual void draw() = 0;
};

class polygon : public flat_geometric_shape
{

};

class ellipse : public flat_geometric_shape
{
private:
	double area() override;

	double perimeter() override;

	void draw() override;

	double semi_minor_axis;

	double semi_major_axis;
};

class tringle : public polygon
{
private:
	double area() override;

	double perimeter() override;

	void draw() override;

	double base;

	double base_height;

	double first_side;

	double secong_side;
};

class quadrangle : public polygon
{
private:
	double area() override;

	double perimeter() override;

	void draw() override;

	double first_side;

	double second_side;

	double third_side;

	double fourth_side;

	double first_diagonal;

	double second_diagonal;

	double angle_between_diagonals;
};

class circle : public ellipse
{
private:
	double area() override;

	double perimeter() override;

	void draw() override;

	double radius;
};

class trapezoid : public quadrangle
{
private:
	double area() override;

	double perimeter() override;

	void draw() override;

	double smaller_base;

	double greater_base;

	double base_height;

	double first_side;

	double secong_side;
};

class parallelogram : public quadrangle
{
private:
	double area() override;

	double perimeter() override;

	void draw() override;

	double first_side;

	double second_side;

	double height_drawn_to_the_first_side;
};

class rectangle : public parallelogram
{
private:
	double area() override;

	double perimeter() override;

	void draw() override;

	double length;

	double width;
};

class rhombus : public parallelogram
{
private:
	double area() override;

	double perimeter() override;

	void draw() override;

	double length;

	double height;
};

class square : public rectangle
{
private:
	double area() override;

	double perimeter() override;

	void draw() override;

	double length;
};