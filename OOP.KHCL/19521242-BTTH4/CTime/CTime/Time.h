#include "CTimeSpan.h"



class Time {

private:

	int hr, min, sec;

public:

	Time();

	friend istream& operator >>(istream&, Time&);

	friend ostream& operator <<(ostream&, const Time&);

	Time operator+(const Time&);

	CTimeSpan operator-(const Time&);

	Time operator++();

	Time operator--();

};