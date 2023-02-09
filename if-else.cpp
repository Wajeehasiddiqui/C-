#include<iostream>
using namespace std;

int main()
{
    int time=20;
    if(time<18)
    {
    cout<<"Good Morning";
    }
     else if (time>18) 
    {
    cout<<"Good Noon " ;
    }
    else if (time=18)
    {
    cout<<"Good Evening";
    }
    else 
    {
    cout<<"Good Night ";
    }
    return 0;
}