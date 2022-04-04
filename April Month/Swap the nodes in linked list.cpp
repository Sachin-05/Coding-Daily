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
    ListNode* swapNodes(ListNode* head, int k) {
        // single traversal 
        
        ListNode *ptr1 =head, *ptr2 = head, *kth=NULL;
        while(--k){
            ptr1= ptr1->next;
        }
        kth = ptr1;
        ptr1 = ptr1->next;
        
        while(ptr1!=NULL){
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        swap(ptr2->val, kth->val);
        return head;
    }
};


// double traversal in the linked list

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
    
    int getcount(ListNode* head){
        // base case
        
        if(head==NULL)
            return 0;
        else
            return 1 + getcount(head->next);
    }
    
    ListNode* swapNodes(ListNode* head, int k) {
        // double traversal brute approach  
        
        ListNode *ptr1 =head, *ptr2 = head;
        int len = getcount(head);
        
        while(--k){
            ptr1= ptr1->next;
        }
        
        int test = len-k; // 5-2+1 == 4
        while(test--){
            ptr2 = ptr2->next;
        }
        
        swap(ptr2->val, ptr1->val);
        return head;
    }
};
