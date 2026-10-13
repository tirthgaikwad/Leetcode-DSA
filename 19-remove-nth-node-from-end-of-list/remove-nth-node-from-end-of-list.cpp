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
        int cnt = 0;
        ListNode* curr  = head;
        while(curr != NULL){
            cnt++;
            curr = curr -> next;
        }
        if(n > cnt){
            return head;
        }
        if(cnt - n == 0){
            ListNode* temp = head;
            head = head -> next;
            delete temp;
            return head;
        }
       curr = head;
        for(int i = 1 ; i< cnt - n; i++){
           
        curr = curr->next;       
        }
         ListNode* temp = curr->next;
        curr->next = temp->next;
        delete temp;
         return head;
    }
};