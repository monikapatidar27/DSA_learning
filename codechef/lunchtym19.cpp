#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define sp " " 



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int testcase=1;
    cin>>testcase;
    while(testcase--)
    {
        int x,y;
        cin>>x>>y;
        int c=0,c1=0;
        if(x >=1 && x<=10){
            c=1;
        }
         if(x >=11 && x<=20){
            c=2;
        }
         if(x >=21 && x<=30){
            c=3;
        }
         if(x >=31 && x<=40){
            c=4;
        }
         if(x >=41 && x<=50){
            c=5;
        }
         if(x >=51 && x<=60){
            c=6;
        }
         if(x >=61 && x<=70){
            c=7;
        }
         if(x >=71 && x<=80){
            c=8;
        }
         if(x >=81 && x<=90){
            c=9;
        }
         if(x >=91 && x<=100){
            c=10;
        }if(y>=1 && y<=10){
            c1=1;
        }
         if(y >=11 && y<=20){
            c1=2;
        }
         if(y >=21 && y<=30){
            c1=3;
        }
         if(y >=31 && y<=40){
            c1=4;
        }
         if(y >=41 && y<=50){
            c1=5;
        }
         if(y >=51 && y<=60){
            c1=6;
        }
         if(y >=61 && y<=70){
            c1=7;
        }
         if(y >=71 && y<=80){
            c1=8;
        }
         if(y >=81 && y<=90){
            c1=9;
        }
         if(y>=91 && y<=100){
            c1=10;
        }
        cout<<abs(c-c1)<<endl;
    }
    return 0;
}