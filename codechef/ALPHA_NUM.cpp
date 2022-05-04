#include <bits/stdc++.h>
using namespace std;
#define loop(i, l, n) for (int i = 0; i < n; i++)
#define loop1(i, l, n) for (int i = 1; i <= n; i++)
#define endl "\n"
typedef long long int ll;
#define sp " "

int sum_digit(int n)
{
    int sum = 0, m;
    while (n > 0)
    {
        m = n % 10;
        sum = sum + m;
        n = n / 10;
    }
    return sum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int testcase = 1;
    cin >> testcase;
    while (testcase--)
    {
        string str;
        cin >> str;
        int indx = 0, res = 0, sum = 0;
        for (int i = 0; i < str.length() ; i++)
        {
            indx = str[i] - 'A' + 1;

            while (indx > 9)
            {
                indx = sum_digit(indx);
            }
            sum += indx;
        }
        cout << sum << endl;
    }
    return 0;
}