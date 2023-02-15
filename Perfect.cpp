#include <iostream>
using namespace std;

int main()
{
    int number,i=1,sum=0;
    cout << "Enter a number: ";
    cin >> number;
       while(i<number){
       if(number%i==0)
       sum=sum+i;
       i++;
}

if(sum==number)
    cout << number << " is a perfect number\n";
else
    cout << number<< " is not a perfect number\n";

return 0;
}
