#include<iostream>
using namespace std;
class AB
{
	public:
	inline long power(int x,int y)
	{
		long i, res=1;
		for(i=1;i<=y;i++)
		res=res*x;
		return res;
	}
};
int main()
{
AB ob;
int base,exponent;
cout<<"ENTER BASE VALUE :";
cin>>base;
cout<<"ENTER EXPONENTIAL VALUE :";
cin>>exponent;
cout<<"RESULT IS : "<<ob.power(base,exponent);
}


