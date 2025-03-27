// 234. Palindrome Linked List
// Given the head of a singly linked list, return true if it is a palindrome or false otherwise.
// Example 1:
// Input: head = [1,2,2,1]
// Output: true

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
            while(fast->next!=NULL){
                fast=fast->next;
                if(fast->next!=NULL){
                    fast=fast->next;
                    slow=slow->next;
                }
            }
            return slow;
            
        }
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
        bool comparelist(ListNode*head,ListNode * head2){
            while(head!=NULL && head2!=NULL){
                if(head->val!=head2->val) return false;
                else{
                    head=head->next;
                    head2=head2->next;
                }
            }
            return true;
        }
        bool isPalindrome(ListNode* head) {
            //break in 2halves
            ListNode* middle=middleNode(head);
            ListNode* head2=middle->next;
            middle->next=NULL;
    
    
            //reverse 2nd list
            head2=reverseList(head2);
    
    
            //compare 2 LL
            bool ans=comparelist(head,head2);
            return ans;
        }
    };