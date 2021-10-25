#include <iostream>
using namespace std;

int main() 
{
    long long t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2==0)
            cout<<(n-1)*(n-1)<<endl;
        else
            cout<<(n-1)*(n-2)<<endl;
    }
}
