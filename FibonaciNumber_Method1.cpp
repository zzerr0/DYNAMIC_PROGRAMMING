#include<iostream>
using namespace std;

int main()
{
 
 int f=0, s=1;
 int next=0;
 cout<<"\n Enter the total number of numbers in series"
     <<endl;
     int n;
     cin>>n;
 for(int i=0;i<n;i++)
 {
   next=f+s;
   f=s;
   s=next;
 }
 cout<<next<<endl;
 
 return 0;
}
