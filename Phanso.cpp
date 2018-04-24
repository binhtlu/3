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
        
     
        
        friend ostream& operator <<(ostream& os, PhanSo a);
        
};

ostream& operator<<(ostream& os, PhanSo a)
{
        os<< a.tuso <<"/ "<<a.mauso<<endl;
}

int main()
{
        PhanSo a(1,4);
        PhanSo b(1,6);
        cout<<a+b<<endl;
        return 0;
        
}
