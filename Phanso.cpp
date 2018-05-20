#include<iostream>

using namespace std;

class PhanSo 
{
private:
        int tuso;
        int mauso;
public:
        PhanSo()
        {
                tuso  =0;
                mauso =1;
        }
        
        PhanSo(int a, int b)
        {
                tuso = a;
                mauso =b;
        }
        
        void settuso(int a)
        {
                tuso =a;
        }
        
        int gettuso()
        {
                return  tuso;
        }
        
        void setmauso(int b)
        {
                mauso =b;
        }
        
        int getmauso()
        {
                return mauso;
        }

        PhanSo operator+(PhanSo a)
        {
                float kqtuso, kqmauso;
                kqtuso = tuso * a.mauso + a.tuso * mauso;
                kqmauso = mauso * a.mauso;
                
                
                int m=kqtuso;
                int n=kqmauso;
                while (m!=n)
                {
                        if (m>n)
                        m = m - n;
                        else 
                        n= n-m;              
                }
                 kqtuso=kqtuso/m;
                 kqmauso=kqmauso/m;
                 
                return PhanSo (kqtuso, kqmauso);
        }
        
     
        
        friend ostream& operator <<(ostream& os, PhanSo a)
        {
        	os<<a.tuso<<"/"<<a.mauso;
        }
operator int()
{
	return this->tuso/this->mauso;
}
operator float()
{
	return this->tuso/(float)this->mauso;
}


friend PhanSo operator + (int a, PhanSo b)
{
	return PhanSo(a*b.mauso + b.tuso,b.mauso);
}
        
};


int main()
{
		int x,y,z,t;
		cout<<"Nhap:    "<<endl;
		cin>>x;
		cin>>y;
		cin>>z;
		cin>>t;
        PhanSo a(x,y);
        PhanSo b(z,t);
        cout<<a+b<<endl;
 		a = 10 + a;
 		cout<<a<<endl;      
        return 0;
        
}
