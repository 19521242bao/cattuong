
#include "TuGiac.h"
using namespace std;
void TuGiac::Xuat()
{
	for (int i = 0; i <= 3; i++)
	{
		cout << "toa do diem " << i << " la: " << a[i].getHD() << ": " << a[i].getTD()<<endl;
	}
}
void TuGiac::Nhap()
{
	DaGiac::setN(n);
	DaGiac::Nhap();
}