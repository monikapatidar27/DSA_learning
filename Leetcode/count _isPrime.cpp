#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// int countPrimes(int n) {
//        int counter;
//         for(int i=1;i<n;i++)
//             if(isPrime(i))
//                 counter++;
//         return counter;
//     }

// bool isPrime(int num)
// {
//     if(num<=1){
//         return false;
//     }
//     for(int i=2;i*i<=num;i++){
//         if(num%2==0)
//         return false;
//     }
//     return true;
    
// }
// int countPrimes(int n) {
//         int count=0;
//         for (int i=2;i<n; i++) 
//        {
//         bool prime=true;
//         for (int j=2; j*j<=i; j++)
//         {
//             if (i % j == 0) 
//             {
//                 prime=false;
//                 break;    
//             }
//         }   
//         if(prime) 
//         count++;
//     } 
    
//        return count;
//     }
 int countPrimes(int n) {
        if(n<2)return 0;
        vector<bool> ans(n,true);
        for(int i=2;i*i<n;i++){
            if(ans[i]==true){
                for(int j=i*i;j<n;j+=i){
                    ans[j]=false;
                }
            }
        }
        int count=0;
        for(int i=2;i<n;i++){
            if(ans[i]==true)count++;
        }
        return count;
    }
int main()
{
    int nums;
    cin>>nums;
    cout << countPrimes(nums ) << '\n';
}