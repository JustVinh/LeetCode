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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* first_p = head;
        ListNode* sec_p= head;
        for(int i =0; i<=n; i++){
            if(sec_p == NULL) return head->next;
            sec_p = sec_p->next;
        }
        
        //cung giu khoang cach, keep distance = n
        while(sec_p != NULL){
            first_p = first_p -> next;
            sec_p = sec_p->next;
        }
        
        ListNode* deleteNode = first_p->next;
        first_p->next = deleteNode->next;
        
        return head;
    }
};