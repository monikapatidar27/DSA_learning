#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        int i=n-1;
        while(i>=0 and digits[i]==9){
            digits[i]=0;
            i--;
        }
        if(i==-1){
            digits.insert(digits.begin(),1);
        } else {
            digits[i]++;
        }
        return digits;
    }

int main()
{
    vector <int> digits={1,2,3};
   
    cout << plusOne(digits) << '\n';
}