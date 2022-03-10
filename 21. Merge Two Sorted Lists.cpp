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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //new output list
        ListNode* out = new ListNode();
        
        //copy pointer of first node for return
        ListNode* head = out;
        
        //case when there are empty input
        if(list1 == NULL && list2 == NULL) return NULL;
        else if(list1 == NULL) return list2;
        else if(list2 == NULL) return list1;
        
        //traverse both LL until shorter one is empty
        while(list1 && list2){
            //if first val is < second var
            if(list1->val < list2->val){
                //insert smaller node
                out->next = list1;
                //check next node
                list1 = list1->next;
            }else{
                //insert larger node
                out->next = list2;
                //check next node
                list2 = list2->next;
            }
            //move to next node of output LL
            out = out->next;
        }
        
        //connect the longer list's remaining nodes behind
        if(list1){
            out->next = list1;
        }else{
            out -> next = list2;
        }
        
        //first node is empty, return second onwards
        return head -> next;
    }
};