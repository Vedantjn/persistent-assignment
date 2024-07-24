class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int i=m-1 , j=n-1 ;
        while(i>=0 && j>=0 ){
            if(nums1[i]>=nums2[j]){
                nums1[i+j+1]=nums1[i] ;
                i-- ;
            }
            else{
                nums1[i+j+1]=nums2[j];
                j-- ;
            }
        }
        while(j>=0){
                    nums1[j]=nums2[j];
                    j-- ;
        }      
    }
};

// class Solution {
// public:
//     ListNode* partition(ListNode* head, int x) {
//         if(!head || !head->next)
//             return head;

//         ListNode* greater = new ListNode(-1);
//         ListNode* smaller = new ListNode(-1);

//         ListNode* dumg = greater;
//         ListNode* dums = smaller;
        
//         while(head){
//             if(head->val >= x){
//                 dumg->next = head;
//                 dumg = head;
//             }
//             else{
//                 dums->next = head;
//                 dums = head;
//             }

//             head = head->next;
//         }
//         dumg->next = NULL;
//         dums->next = greater->next;
        
//         return smaller->next;
//     }
// };