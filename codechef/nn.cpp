#include<iostream>

using namespace std;



int main()
{
     int n;
    cin>>n;
    int a=0,b=n;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=n+1;j++)
        {
            if(j== 1 ||j== n+1 ||(j== a+2||j== b)&& i<(n/2))
            cout<<"M";
            else
            cout<<" ";
        }
        cout<<endl;
        a++;
        b--;
    }
    return 0;
}