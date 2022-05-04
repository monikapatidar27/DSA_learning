#include <bits/stdc++.h>
using namespace std;
#define loop(i, l, n) for (int i = 0; i < n; i++)
#define loop1(i, l, n) for (int i = 1; i <= n; i++)
#define endl "\n"
typedef long long int ll;
#define sp " "

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int testcase = 1;
    cin >> testcase;
    while (testcase--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == 'M' || str[i] == 'm')
            {
                c++;
            }
        }
        if (c != 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}