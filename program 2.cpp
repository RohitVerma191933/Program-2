#include<iostream>
using namespace std;
class xyz
{
	public:
	inline long power(int b,int p)
	{
		long i, res=1;
		for(i=1;i<=p;i++)
		res=res*b;
		return res;
	}
};
int main()
{
xyz ob;
int base,exponent;
cout<<"ENTER BASE VALUE :";
cin>>base;
cout<<"ENTER EXPONENTIAL VALUE :";
cin>>exponent;
cout<<"RESULT IS : "<<ob.power(base,exponent);
}


