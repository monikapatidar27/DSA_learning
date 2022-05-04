#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define sp " " 

// int find_min_max(int arr[],int low,int high,int &min,int &max){
//     if(low==high){
//         max=arr[low];
//         min=arr[high];
//         return 0;
//     }
//     if(high-low ==1){
//         if(arr[low]<arr[high]){
//             if(min>arr[low]){
//                 min=arr[low];
//             }
//             if(max<arr[high]){
//                 max=arr[high];
//             }
//         }
//         else{
//             if(min>arr[high]){
//                 min=arr[high];
//             }
//             if(max<arr[low]){
//                 max=arr[low];
//             }
//         }
        
//     }
//     else{
//         int mid=(low+high)/2;
//         find_min_max(arr,low,mid,min,max);
//         find_min_max(arr,mid,high,min,max);
//     }
//     return 0;
// }

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int testcase=1;
    cin>>testcase;
    while(testcase--)
    {
        int n;
        cin>>n;
        int arr[n];
        loop(i,l,n){
            cin>>arr[i];
        }
        // int min=arr[0];
        // int max=arr[0];
        int c=1;
        sort(arr,arr+n);
        int min=arr[0];
        int max=arr[n-1];
        for(int i=1;i<n;i++){
            if(arr[0]==arr[i]){
                c++;
            }
        }
       // find_min_max(arr,0,n-1,min,max);
        cout<<(max-min)*c<<endl;
    }
    
    return 0;
}
