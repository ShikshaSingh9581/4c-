//write a program to print a  number series separeted by space , number given by user using loop
#include<iostream>
using namespace std;
int main()
{
  int i ,number;
  cout<<"enter a number which you want to print";
  cin>>number;
  for(i=0;i<=number;i++)
  {
      cout<<i<<" ";
  }
}