/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:

    int len(ListNode *head){
        int count=0;
        while(head!=NULL){
            count++;
            head=head->next;
        }
        return count;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int n1 = len(headA);
        int n2 = len(headB);
        if(n1>n2){
            int d=n1-n2;
            while(d>0){
                headA=headA->next;
                d--;
            }
        }
        else if(n2>n1){
            int d=n2-n1;
            while(d>0){
                headB=headB->next;
                d--;
            }
        }

        while(headA!=headB){
            headA=headA->next;
            headB=headB->next;
        }
        return headA;
    }
};