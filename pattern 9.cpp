//write a code to print star pyramid pattern,input given by user:
#include<iostream>
using namespace std;
int main()
{
 int i,j,ptr;
 cout<<"enter ptr number";
 cin>>ptr;
 for(i=1;i<=ptr;i++)
 {
     for(j=1;j<=i;j++)
     {
         cout<<"*";
     }
     cout<<"\n";
 }
}