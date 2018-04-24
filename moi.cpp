#include <iostream>
using namespace std;

class Hinhchunhat
{
	private:
		float chieudai;
		float chieurong;
	public:
		float Hinhchunhat(int a,int b)
        {
                chieudai = a;
                chieurong = b;
        }
        
        float getChieudai()
        {
                return  this->chieudai;
     	}
        float getChieurong()
        {
                return this->chieurong;
        }
        float tinhchuvi()
        {
        	float kq = (this->chieudai + this->chieurong )*2;
        	return kq;
        }

};


int main()
{
float chieudai;
float chieurong;
Hinhchunhat a;
cin>>chieudai;
cin>>chieurong;
a.set
float chuvi;
chuvi = tinhchuvi();
cout<<chuvi<<endl;

}
