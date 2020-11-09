#include "Class_Hierarchy.h"


double square::area()
{
	return pow(length, 2);
}

double square::perimeter()
{
	return length * 4;
}

void square::draw()
{
	cout << "Square" << endl;
}





double rectangle::area()
{
	return length * width;
}

double rectangle::perimeter()
{
	return (length + width) * 2;
}

void rectangle::draw()
{
	cout << "Rectangle" << endl;
}





double rhombus::area()
{
	return length * height;
}

double rhombus::perimeter()
{
	return length * 4;
}

void rhombus::draw()
{
	cout << "Rhombus" << endl;
}





double trapezoid::area()
{
	return (smaller_base + greater_base) * base_height;
}

double trapezoid::perimeter()
{
	return smaller_base + greater_base + first_side + secong_side;
}

void trapezoid::draw()
{
	cout << "Trapezoid" << endl;
}





double circle::area()
{
	return 3, 14 * pow(radius, 2);
}

double circle::perimeter()
{
	return 2 * 3, 14 * radius;
}

void circle::draw()
{
	cout << "Circle" << endl;
}





double ellipse::area()
{
	return 3, 14 * semi_major_axis * semi_minor_axis;
}

double ellipse::perimeter()
{
	return 4 * ((3,14 * semi_major_axis * semi_minor_axis + (semi_major_axis - semi_minor_axis)) / (semi_major_axis + semi_minor_axis));
}

void ellipse::draw()
{
	cout << "Ellipse" << endl;
}





double tringle::area()
{
	return base * base_height;
}

double tringle::perimeter()
{
	return base + first_side + secong_side;
}

void tringle::draw()
{
	cout << "Triangle" << endl;
}





double quadrangle::area()
{
	return 0,5 * first_diagonal * second_diagonal * sin(angle_between_diagonals);
}

double quadrangle::perimeter()
{
	return first_side + second_side + third_side + fourth_side;
}

void quadrangle::draw()
{
	cout << "Quadrangle" << endl;
}





double parallelogram::area()
{
	return first_side * height_drawn_to_the_first_side;
}

double parallelogram::perimeter()
{
	return 2 * (first_side + second_side);
}

void parallelogram::draw()
{
	cout << "Parallelogram" << endl;
}