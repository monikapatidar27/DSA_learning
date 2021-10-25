#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int n,int k)
{
    int s=0,end=n;
    int mid=(s+end)/2;
    if(arr[mid]==k){
        return mid;
    }
    else if(arr[mid]>k){
        end=mid-1;
    }
    else{
        s=mid+1;
    }
    return -1;
}
int main()
{
       int n;
       cin>>n;
       int arr[n];
       for(int i=0;i<n;i++)
       cin>>arr[i];
       int k;
       cin>>k;
       cout<<binarysearch(arr,n,k);
    
    return 0;
}