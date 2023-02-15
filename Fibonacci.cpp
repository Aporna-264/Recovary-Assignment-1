#include <iostream>
using namespace std;
int main()
 {
int  i=3,number;
int aporna1  = 0, aporna2 = 1;

int aporna3 = aporna1 + aporna2;

cout << "Enter the number of terms: ";
cin >> number;
cout << "enter fibonacci series: ";

cout<< aporna1 << "," << aporna2 << ",";
while (i <= number){
    cout << aporna3<< ",";
   aporna1 = aporna2;
    aporna2 = aporna3;
    aporna3 = aporna1 + aporna2;
    i++;}


  return 0;
}

