#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define tle ios_base::sync_with_stdio(false); cin.tie(NULL);
#define sp " "
int main(){
    int k;
    string s;
    cin >> k >> s;

    int count[26] = {0};
    for (int i = 0; i < s.length(); ++i)
    {
        count[s[i]-'a'] += 1;
    }

    string s1;
    int c = 0;
    for (; c < 26; ++c)
    {
        if (count[c] % k != 0)
        {
            break;
        }
        else
        {
            s1.append(count[c] / k, 'a' + c);
        }
    }
    if (c == 26)
    {
        while (k--)
        {
            cout << s1;
        }
        cout << endl;
    }
    else
    {
        cout << -1 << endl;
    }

  
    
    return 0;
}