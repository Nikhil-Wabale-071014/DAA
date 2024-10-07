/*Implement a problem of smallest number with at 
least n trailing zeroes in factorial.
Statement: Given a number n. The task is to find the 
smallest number whose factorial contains at least n 
trailing zeroes.*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,a,count,fact,total,i;
    cout<<"Enter the number of trailing zeroes you want in factorial : ";
    cin>>n;
    
    for (i=0;i<100;i++)
    {
      total=floor(i/5)+floor(i/25)+floor(i/125);
      if(total==n)
      {
        count=i;
        break;
      }
    }
    cout<<count;
}
    
