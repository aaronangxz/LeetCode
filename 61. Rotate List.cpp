
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
    ListNode* rotateRight(ListNode* head, int k) {
        int len = 1;
        ListNode* curr = head;
        ListNode* temp = head;

        if(head == NULL) return head;
        
        //find len of list
        while(curr->next != NULL){
            len++;
            curr= curr->next;
        }
                
        //modulo to prevent uneccesary rotation
        k = k % len;
        
        //rotate k times
        while(k--){
            //make circular LL
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = head;
            
            //last node as new head
            head = temp;
            curr = temp;
            
            //move to node before last node
            while(temp->next != head){
                temp= temp->next;
            }
            
            //make tail empty
            temp->next = NULL;
            
            temp = curr;
        }
        return head;
    }
};