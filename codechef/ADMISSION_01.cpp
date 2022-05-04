#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define sp " " 


void reverseStr(string& str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // int testcase=1;
    // cin>>testcase;
    // while(testcase--)
    // {
        
    // }
    string str="Ind0REinsT'ituTE~~oF@@SCien(E@nDTECHnol0gY";
    reverseStr(str);
    cout << str;
    return 0;
}