#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    //Function to find the minimum indexed character.
    int minIndexChar(string str, string patt)
    {
        int n =str.size();
        int m=patt.size();
        set<char>s;
        for(int i=0;i<m;i++){
            s.insert(patt[i]);
        }
        int c=-1;
        for(int i=0;i<n;i++){
            if(s.find(str[i])!=s.end()){
                c=i;
                break;
            }
        }
        return c;
    }
};


int main()
{
	int t;
    cin>>t;
    while(t--)
    {
        string str;
        string patt;
        cin>>str;
        cin>>patt;
        Solution obj;
        cout<<obj.minIndexChar(str, patt)<<endl;
    }
	return 0;
}
