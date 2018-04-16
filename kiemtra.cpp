#include <iostream>
#include <math.h>
#include <string>
using namespace std;

struct SinhVien
{
		
	string msv;
	double DTK;
	double DQT;
	double DTH;
	double DLT;
	string xl;
	
};
void nhap(SinhVien mang[],int &n);
void xuat(SinhVien mang[],int n);
int main()
{
	SinhVien mang[100];
	int n;
	nhap(mang[],n);
	xuat(mang[],n);
}
void nhap(SinhVien mang[],int &n)
{
cout<<"nhap so phan tu: ";
cin>>n;
	for ( int i = 0;i < n;i++)
	{
		cout<<"nhap thong tin sinh vien thu: "<<i+1;
		cout<<"nhap msv: ";
		cin>>mang[i].msv;
		
		cout<<"nhap diem qua trinh: ";
		cin>>mang[i].DQT;
		
		cout<<"nhap diem ly thuyet: ";
		cin>>mang[i].DLT;
		
		cout<<"nhap diem thi: ";
		cin>>mang[i].DTH;
		
		mang[i].DTK = mang[i].msv*0.3+0.7*(mang[i].DTH+mang[i].DLT)/2
	}
}
void xuat(SinhVien mang[],int n)
{
	cout<<"MSV\t DTK\t";
	for (int i = 0;i < n;i++)
	{
		cout<<mang[i].msv"\t";
		cout<<mang[i].DTK"\t";
		//cout<<string xl;
	}
}


