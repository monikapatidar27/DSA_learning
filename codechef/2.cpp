#include <iostream>
//#include<iomanip>
#include<bits/stdc++.h>
using namespace std;

int main() 
{
   int x;
   float y;
   cin>>x>>y;
   if(x%5==0 && (x+0.50)<=y){
	   cout<<fixed<<setprecision(2)<<y-(x+0.50);
   }
   else{
	   cout<<fixed<<setprecision(2)<<y<<endl;
   }

	return 0;
}
/*
Input:
30 120.00

Output:
89.50

Input:
42 120.00

Output:
120.00 */