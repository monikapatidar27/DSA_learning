#include <bits/stdc++.h>
using namespace std;
class MinStack {
public:
        stack<int> data;
        stack<int> min; 
    MinStack() {
           
    }
    
    void push(int val) {
         if (min.empty()) {
            data.push(val);
            min.push(val);
        }
        else {
            data.push(val);
            if (val <= min.top())
                min.push(val);
        }
        
    }
    
    void pop() {
         if (!min.empty()) {
            if (data.top() == min.top())
                min.pop();
            data.pop();
        }
        
    }
    
    int top() {
        return data.top();
    }
    
    int getMin() {
        return min.top();
    }
};
int main(){
    
    stack<int>st;
    return 0;
}