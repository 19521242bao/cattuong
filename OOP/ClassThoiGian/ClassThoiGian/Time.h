#pragma once
class Time {
public:
	~Time();
	void Nhap();
	void Display();
	int  getHr();
	int  getMin();
	int  getSec();
	void  setTime(int x, int y, int z);
	int SoSanh(const Time&);
	void TangTime(const Time&);
	void GiamTime(const Time&);
private:
	int hr;
	int min;
	int sec;
};

