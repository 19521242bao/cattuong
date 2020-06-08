#pragma once
struct Point {
	double x, y;
};

class TuGiac
{
private:
	Point po[4];
public:
	TuGiac();
	TuGiac(Point* poi);
	~TuGiac();
	//Setter
	void SetPo(Point coor[4]);
	 void Set();
	//Getter
	Point* GetCoor() { return po; }
	//other methods
	 void Print();
};

