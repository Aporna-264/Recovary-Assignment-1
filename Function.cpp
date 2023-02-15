#include<iostream>
using namespace std;

float p(float a, int b)
{
	float p;
	p=a*b;
	return p;
}

int main()
{
   float n1;
   int n2;
	 cout<<"Enter The Decimal number: ";
	 cin>>n1;

	 cout<<"\nEnter The Integer number: ";
	 cin>>n2;

     cout<<"\nProduct between Two Numbers is: "<<p(n1,n2);
}
