class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(head==NULL)return head;
        
        ListNode* node=head;
        while(node && node->next){
            
            if(node->next->val==node->val){
                node->next = node->next->next;
            }
            else{
                node=node->next;
            }
        }
        
        return head;
    }
};