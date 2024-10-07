/*Implement a problem of move all zeroes to end of 
array.
Statement: Given an array of random numbers, Push all the zero’s 
of a given array to the end of the array. For example, if the given 
arrays is {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0}, it should be changed to {1, 9, 
8, 4, 2, 7, 6, 0, 0, 0, 0}. The order of all other elements should be 
same.*/
#include<iostream>
using namespace std;
int main(){
    int a[10],size,b;
    cout<<"Enter the no of element :\n";
    cin>>size;
    cout<<"Enter the Element :\n";
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    for(int i=0;i<size;i++){
        if(a[i]==0){
            b=i;
            for(int j=b;j<size;j++){
                a[j]=a[j+1];
            }
            a[size-1]=0;
        }
    }
     for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
