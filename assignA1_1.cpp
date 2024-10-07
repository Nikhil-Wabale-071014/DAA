/*Implement a problem of number of zeroes.
Statement: Given an array of 1s and 0s which has all 
1s first followed by all 0s? Find the number of 0s. 
Count the number of zeroes in the given array.*/
#include<iostream>
using namespace std;
int main(){
    int arr[20],i,n;
    cout<<"Enter the number of elements you want in array: ";
    cin>>n;
    cout<<"Enter the elements in array: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
          
    }
    
    for (i=0;i<n;i++) 
    {
      if (arr[i] == 0)
       {
         // index of the first zero
         cout<<n-i;
         break;

       }
    }
    return 0;
   
}
