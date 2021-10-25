#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

/*Function to sort students with respect to their marks
* v : vector input with student name and their marks
* N : size of vector
* Your need to implement comparator to sort on the basis of marks.
*/
bool myCmp(pair<string, int> p1, pair<string, int> p2)
{
    if(p1.second > p2.second)
    {
        return 1;
    }
    else if(p1.second == p2.second)
    {
        if(p1.first < p2.first)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    
    return 0;
}
vector<pair<string, int>> sortMarks(vector<pair<string, int>> v, int N){
    
    sort(v.begin(), v.end(), myCmp);
    
    return v;
    //Complete the code and return the sorted vector
}

// { Driver Code Starts.

// Driver code
int main() {
	
	int testcase;
	cin >> testcase;
	
	while(testcase--){
	    int N;
	    cin >> N;
	    
	    // Declaring vector
	    vector<pair<string, int>> v;
	    
	    // Taking input to vector
	    for(int i = 0;i<N;i++){
	        string s;
	        cin >> s;
	        int k;
	        cin >> k;
	        v.push_back(make_pair(s, k));
	    }
	    
	    // Calling function
	    v = sortMarks(v, N);
	    
	    // Printing student name with their marks
	    for(auto it = v.begin(); it!=v.end();it++){
	        cout << it->first << " " << it->second << endl;
	    }
	    
	}
	
	return 0;
}  // } Driver Code Ends