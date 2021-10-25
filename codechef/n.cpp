#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    int f1=0,f2=0;
	    for (int i = 0; i < n; i++) {
	        if(s[i] == 'I'){
	            f1++;
	            break;
	        }
	        else if(s[i] == 'Y'){
	            f2++;
	            break;
	        }
	        
	    }
	     if(f1>0){
	         cout << "INDIAN" << endl;
	     }
	     else if(f2>0){
	         cout << "NOT INDIAN" << endl;
	     }
	     else{
	         cout << "NOT SURE" << endl;
	     }
	    
	}
	return 0;
}
