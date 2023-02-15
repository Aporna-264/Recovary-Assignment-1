#include <iostream>
#include <cmath>
using namespace std;

int main() {

  int n1,n2,i,n,d,sum,count;

  cout << "Enter the first number: ";
  cin >> n1;
  cout << "\nEnter the second number: ";
  cin >> n2;

  if (n1 > n2) {
    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;
  }
  cout<<"\nThe Armstrong numbers between " << n1 <<" and "<<n2<<" are: "<<endl;
  for(i=n1;i<=n2;i++){
    count=0;
    n=i;
    while(n>0) {
      ++count;
      n/=10;
    }
    sum=0;
    n=i;
    while(n>0){
      d=n%10;
      sum=sum+pow(d,count);
      n/=10;
    }
    if(sum==i){
      cout<<i<<", ";
    }
  }
  return 0;
}
