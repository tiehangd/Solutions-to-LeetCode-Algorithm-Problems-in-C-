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
    ListNode* swapPairs(ListNode* head) {
        int sign_even=true;
        if(head==NULL){return NULL;}
        if(head->next==NULL){return head;}
        ListNode *new_head=head->next;
        ListNode *temp=new_head->next;
        new_head->next=head;
        head->next=temp;
        ListNode *cur_node=head;
        while(cur_node->next!=NULL && cur_node->next->next!=NULL){
            if(sign_even==false){cur_node=cur_node->next;sign_even=true;}
            else{
                ListNode *temp=cur_node->next;
                ListNode *temp2=temp->next;
                cur_node->next=temp2;
                temp->next=temp2->next;
                temp2->next=temp;
                cur_node=cur_node->next;
                sign_even=false;
            }
            
            
            
        }
        return new_head;
        
    }
};
