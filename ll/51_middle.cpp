// 876. Middle of the Linked List

// Easy

// Given the head of a singly linked list, return the middle node of the linked list.

// If there are two middle nodes, return the second middle node.


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
        ListNode* middleNode(ListNode* head) {
            ListNode* fast=head;
            ListNode* slow=head;
            while(fast!=NULL){
                fast=fast->next;
                if(fast!=NULL){
                    fast=fast->next;
                    slow=slow->next;
                }
            }
            return slow;
            
        }
    };