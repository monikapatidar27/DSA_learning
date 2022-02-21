#include<bits/stdc++.h>
using namespace std;

 // Definition for singly-linked list.
 struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *ptr=head;
        while(ptr!=NULL && ptr->next!=NULL ){
            if(ptr->val == ptr->next->val){
                ListNode *temp=ptr->next;
                ptr->next=ptr->next->next;
                delete(temp);
            }
            else
                ptr=ptr->next;
        }
        return head;
    }
};
int main(){
   
    return 0;
}