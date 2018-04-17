#include <iostream>
using namespace std;


class Phanso
{
    private: // thuoc tinh
        int tuso;
        int mauso;
    public:// thao tac cac phuong thuc
    void setTuso(int gg) // 
    {
        this->tuso = gg; // this la tai day ( tai a huac b )
    }
    void setMauso(int gg)
    {
        this->mauso = gg;
    }
    int getTuso()
    {
        return this->tuso;
    }
    int getMauso() // get lay thong tin mang ra lam viec
    {
        return this->mauso;
    }
    Phanso Cong(Phanso b)
    {
        Phanso kq;
        kq.tuso = this->tuso*b.getMauso() + this->mauso*b.getTuso();
        kq.mauso = this->mauso*b.getMauso();
        return kq;
    }
};


int main()
{
   Phanso a; // day la 1 kieu du lieu
   a.setTuso(5);
   a.setMauso(6);
   
   Phanso b;
   b.setTuso(8);
   b.setMauso(7);
   
   Phanso c = a.Cong(b); // phuong thuc cong goi boi a truyen b vao vaf nguoc lai
   
   cout<<a.getTuso()<<"/"<<a.getMauso()<<endl;
   
 cout<<c.getTuso()<<"/"<<c.getMauso();
 return 0;
}
