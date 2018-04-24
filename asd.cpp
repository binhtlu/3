#include <iostream>
using namespace std;

class Phanso
{
	private:
		int tuso;
		int mauso;
	public:
		Phanso()
		{
			this->tuso = 0;
			this->mauso = 1;
		}
		//Phanso(int a)
		//{
			//this->tuso = a;
			//this->mauso = 1;
		//}
		Phanso(int a,int b)
		{
			this->tuso = a;
			this->mauso = b;
		}
		void setTuso(int a)
		{
			this->tuso = a;
		}
		int getTuso()
		{
			return tuso;
		}
		void setMauso(int b)
		{
			this->mauso = b;
		}
		int getMauso()
		{
			return mauso;
		}
		Phanso  operator + (Phanso b)
		{
			Phanso kq;
			kq.tuso = this->tuso*b.mauso + this->mauso*b.tuso;
			kq.mauso = this->mauso*b.mauso;
			return kq;
		}
		void  operator += (Phanso b)
		{
			Phanso kq;
			this->tuso = this->tuso*b.mauso + this->mauso*b.tuso;
			this->mauso = this->mauso*b.mauso;
		}
		
};


int main()
{
	Phanso a(7,5);
	Phanso b(8,6);

	//Phanso c = a + b;
	
	a+=b;

cout<<a.getTuso()<<"/"<<a.getMauso()<<endl;
////cout<<c.getTuso()<<"/"<<c.getMauso()<<endl;	
	return 0;

}
