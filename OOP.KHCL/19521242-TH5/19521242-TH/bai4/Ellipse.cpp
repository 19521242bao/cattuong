#include<iostream>
#include"Ellipse.h"
using namespace std;

// Ellipse definition
 //constructor and destructor
Ellipse::Ellipse() {
	SetCoorX(0);
	SetCoorY(0);
	SetLongAxis(0);
	SetShortAxis(0);
}
Ellipse::Ellipse(double x, double y, double lAxis, double sAxis) {
	SetCoorX(x);
	SetCoorY(y);
	SetLongAxis(lAxis);
	SetShortAxis(sAxis);
}
Ellipse::~Ellipse() {
}
//Setter
void Ellipse::SetCoorX(double x) {
	CoorX = x;
}
void Ellipse::SetCoorY(double y) {
	CoorY = y;
}
void Ellipse::SetLongAxis(double lAxis) {
	LongAxis = lAxis;
}
void Ellipse::SetShortAxis(double sAxis) {
	ShortAxis = sAxis;
}
void Ellipse::Set() {
	cout << "Input Ellipse:\n";

	cout << "Coordinate x:";
	double x;
	cin >> x;
	cout << x << endl;
	SetCoorX(x);

	cout << "Coordinate y:";
	double y;
	cin >> y;
	SetCoorY(y);

	cout << "Long Axis: ";
	double lAxis;
	cin >> lAxis;
	SetLongAxis(lAxis);

	cout << "Short Axis: ";
	double sAxis;
	cin >> sAxis;
	SetShortAxis(sAxis);
}
void Ellipse::Print() {
	cout << "Ellipse ( " << GetCoorX() << " , " << GetCoorY() << " ) with long axis is " << GetLongAxis() << " and short axis is " << GetShortAxis() << endl;
}
//Circle Definition
Circle::Circle() {
	SetRadius(0);
}
Circle::Circle(double x, double y, double r) :Ellipse(x, y, r, r) {
	SetRadius(r);
}
//Setter
void Circle::Set() {
	cout << "Input Circle:\n";

	cout << "Coordinate x:";
	int x;
	cin >> x;
	SetCoorX(x);
	cout << "Coordinate y:";
	int y;
	cin >> y;
	SetCoorY(y);
	cout << "Radius: ";
	double r;
	cin >> r;
	SetRadius(r);
}
void Circle::SetRadius(double r) {
	SetLongAxis(r);
	SetShortAxis(r);
	Radius = r;
}
//Getter
double Circle::GetRadius() {
	return Radius;
}
void Circle::Print() {
	cout << "Circle ( " << GetCoorX() << " , " << GetCoorY() << " ) with radius is " << GetRadius() << endl;
}
Circle::~Circle() {
}