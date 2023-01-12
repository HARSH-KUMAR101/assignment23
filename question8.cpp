//Write a C++ program to swap values of two int variables without using third variable
#include<iostream>
using namespace std;
int main()
{ int x=10,y=20;
    cout<<"enter value of x :";
    cin>>x;
    cout<<"enter value of y :";
    cin>>y;
    x=x+y;
    y=x-y;
    x=x-y;
     cout<<"value of x and y is "<<x<<" and "<<y;
  return 0;
}
