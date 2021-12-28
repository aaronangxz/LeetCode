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
    ListNode* middleNode(ListNode* head) {
        ListNode* curr = head;
        
        int nodes = 1;
        while(curr->next != NULL){
            curr = curr->next;
            nodes++;
        }
        
        int middle = nodes/2;
        
        ListNode* mid = head;
        while(middle > 0){
            mid = mid->next;
            middle --;
        }
        return mid;
    }
};