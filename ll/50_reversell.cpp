// 206. Reverse Linked List
// Easy
// Given the head of a singly linked list, reverse the list, and return the reversed list'


                                         // ans-----ans-----ans----.

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
        ListNode* reverseList(ListNode* head) {
            ListNode* prev=NULL;
            ListNode* curr=head;
            while(curr!=NULL){
                ListNode* Nnode=curr->next;
                curr->next=prev;
                prev=curr;
                curr=Nnode;
            }
            return prev;
    
            
        }
    };