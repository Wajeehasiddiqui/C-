#include<iostream>
using namespace std;

int main()
{
   int marks ;
   cout<<"To find grade";
   cout<<"\nEnter marks:";
   cin >>marks ;
   if (marks>=90)
   {
    cout<<"Your grade is A.";
    }
    else if (marks>=80)
    {
    cout<<"Your grade is B.";
    }
    else if (marks >=60)
    {
     cout<<"Your grade is C.";
    }
    else if (marks>=30)
    {
     cout<<"Your grade is D.";
    }
    else 
    {
     cout<<"You are fail.";
    }
    return 0;
}