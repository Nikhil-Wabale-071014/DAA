/*Implement a problem of maximize Profit by trading 
stocks based on given rate per day.
CO2
 Sanjivani College of Engineering, Kopargaon Page 39 of 100
Statement: Given an array arr[] of N positive integers 
which denotes the cost of selling and buying a stock on 
each of the N days. The task is to find the maximum 
profit that can be earned by buying a stock on or selling 
all previously bought stocks on a particular day.
Input: arr[] = {2, 3, 5} Output: 5
Input: arr[] = {8, 5, 1} Output: 0*/
#include<iostream>
using namespace std;
int main() {
    int n,arr[n];
    cout<<"Enter number of days: ";
    cin>>n;
    cout<<"Enter stock prices: ";
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int max_profit=0;
    int min_price=arr[0]; 
    for(int i=1;i<n;i++) 
    {
        if(arr[i]< min_price) 
        {
            min_price=arr[i];
        }
        int profit=arr[i] - min_price;
        if(profit>max_profit) 
        {
            max_profit=profit;
        }
    }
    cout<<"Maximum profit: "<< max_profit<<endl;
    return 0;
}
