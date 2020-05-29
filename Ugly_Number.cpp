/*
Ugly numbers are numbers whose only prime factors are
 2, 3 or 5. The sequence 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15, 
 … shows the first 11 ugly numbers. By convention,
  1 is included
*/

#include<iostream>
//#include<algorithm>
using namespace std;

/*int min(int a, int b, int c)
{
  if(a>b && a>c)
  return a;
  
  if(b>a && b>c)
  return b;
  
  if(c>a && c>b)
  return c;
}
*/

int main()
{

 cout<<"\n how many ugly numbers do you want "<<endl;
 int n;
 cin>>n;
 //declaring an array for storing ugly numbers
 int ugly[n];
 //since 1 is exception , we assign 1st element of
 //ugly array =1 
 ugly[0]=1;
 
 /*
 
 because every number can only be divided by 2, 3, 5,
  one way to look at the sequence is to split the 
  sequence to three groups as below:
     (1) 1×2, 2×2, 3×2, 4×2, 5×2, …
     (2) 1×3, 2×3, 3×3, 4×3, 5×3, …
     (3) 1×5, 2×5, 3×5, 4×5, 5×5, …
 
 */ 
   //initializing the indexes to point at ugly array
   int i2, i3, i5;
   i2=i3=i5=0;
    
   int nmo2=2;
   int nmo3=3;
   int nmo5=5;
   int nxt_uglyno = 1;
   
 //using loop to fill all ugly numbers
 for(int i=1;i<n;i++)
   {
     //min() is inbuilt function which takes twoparameters
     //and returns smallest of them
     
     nxt_uglyno=min(nmo2, min(nmo3, nmo5));
     ugly[i]=nxt_uglyno;
     
     if(nxt_uglyno==nmo2)
     {
       i2=i2+1;
       nmo2=ugly[i2]*2;
     }
     
     if(nxt_uglyno==nmo3)
     {
       i3=i3+1;
       nmo3=ugly[i3]*3;
     }
     
     
     if(nxt_uglyno==nmo5)
     {
       i5=i5+1;
       nmo5=ugly[i5]*5;
     }
   }
  
   
   for(int i=0;i<n;i++)
   {
     cout<<ugly[i]<<endl;
   }
  
 
return 0;
}
