/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 #include <bits/stdc++.h>
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* temp=head;
        
        unordered_map<ListNode*, int>niraj;
        while(temp!=nullptr){
           if( niraj.find(temp)!=niraj.end()){
               return true;
               
           }
           niraj[temp]=1;
           temp=temp->next;
        }
        return false;


        
    }
};



// another method or optimal solution using slow and fast pointer
ListNode* slow=head;
ListNode* fast=head;
while(fast!=nullptr || fast->next!=nullptr){
slow=slow->next;
fast=fast->next->next;

if (slow==fast){
return true;
}
}
return false;
}
