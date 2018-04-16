#include <iostream>
#include <math.h>
//#include <string>
using namespace std;

struct phanso
{
	double tuso;
	double mauso;
	
};
double tong(phanso a,phanso b);

int main()
{
	double tong2;
	phanso a;
	phanso b;
	cout<<"nhap tu so a: ";
	cin>>a.tuso;
	cout<<"nhap mau so a: ";
	cin>>a.mauso;
	cout<<"nhap tu so b: ";
	cin>>b.tuso;
	cout<<"nhap mauso b: ";
	cin>>b.mauso;
	tong2 = tong(a,b);
	cout<<tong2<<endl;
}
double tong(phanso a,phanso b)
{
double tong;
		tong = (a.tuso*b.mauso+b.tuso*a.mauso)/a.mauso*b.mauso;
		return tong;
}
