#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define tle ios_base::sync_with_stdio(false); cin.tie(NULL);
#define sp " "
void solve(); 
int main() 
{ 
    
   
     int t; 
   
    cin >> t; 
     
    
    while (t--) { 
        solve(); 
        cout << "\n"; 
    } 
   
    
    return 0; 
} 
void solve() 
{ 
    int n; 
     cin >> n; 
 int arr[n]; 
 for (int i = 0; i < n; i++) { 
  cin >> arr[i]; 
 } 
 int o = 0, e = 0; 
 for (int i = 0; i < n; i++) { 
  if (arr[i] % 2 == 0) { 
   e++; 
  } else { 
   o++; 
  } 
 } 
 if (e == 0 and o > 0) { 
  cout << -1 << endl; 
  return; 
 } 
 if (o == 0 and e > 0) { 
  cout << -1 << endl; 
  return; 
 } 
 if (o > 0 and e > 0) { 
  for (int i = 0; i < n; i++) { 
   if (arr[i] % 2 != 0) { 
    cout << arr[i] << " "; 
   } 
  } 
  for (int i = 0; i < n; i++) { 
   if (arr[i] % 2 == 0) { 
    cout << arr[i] << " "; 
   } 
  } 
 } 
} 
 

