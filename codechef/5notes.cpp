#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int no=0;
        if(n>=100){
           no=no+(n/100);
           n=n-((n/100)*100);
        }
        if(n>=50){
           no=no+(n/50);
           n=n-((n/50)*50);
        }
        if(n>=10){
           no=no+(n/10);
           n=n-((n/10)*10);
        }
        if(n>=5){
           no=no+(n/5);
           n=n-((n/5)*5);
        }
        if(n>=2){
           no=no+(n/2);
           n=n-((n/2)*2);
        }
        if(n>=1){
           no=no+(n/1);
           n=n-((n/1)*1);
        }
        cout<<no<<endl;
    }

	return 0;
}
/*Input
3 
1200
500
242

Output
12
5
7
*/