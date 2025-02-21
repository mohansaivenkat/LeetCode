/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        stack<int> st;
        int count = 0;
        while(fast!=NULL &&fast->next!=NULL){
            st.push(slow->val);
            fast=fast->next->next;
            slow=slow->next;  
        }
        if(fast!=NULL){
            slow=slow->next;
        }
        while(slow!=NULL){
            if(slow->val==st.top()){
                st.pop();
            }
            else{
                return false;
            }

            slow=slow->next;
        }

        return true;
    }
};