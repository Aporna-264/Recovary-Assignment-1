#include<iostream>
using namespace std;

int main()
{
    int r;
     cout<<"Enter the number:";
     cin>>r;

      if ( 0<=r && r<40)
       cout<<"Grade F \n";

      else if ( 40<=r && r<=45)
       cout<<"\nGrade D \n";

      else if ( 45<=r && r<=50)
       cout<<"\nGrade C \n";

      else if ( 50<=r && r<=55)
       cout<<"\nGrade C+ \n";

      else if ( 55<=r && r<=60)
       cout<<"\nGrade B- \n";

      else if ( 60<=r && r<=65)
       cout<<"\nGrade B \n";

      else if ( 65<=r && r<=70)
       cout<<"\nGrade B+ \n";

      else if ( 70<=r && r<=75)
       cout<<"\nGrade A- \n";

      else if ( 75<=r && r<=80)
       cout<<"\nGrade A \n";

      else if ( 80<=r && r<=100)
       cout<<"\nGrade A+ \n";

     else
       cout<<"\nError\n";

return 0;
}
