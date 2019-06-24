/*
 * @lc app=leetcode id=203 lang=cpp
 *
 * [203] Remove Linked List Elements
 *
 * https://leetcode.com/problems/remove-linked-list-elements/description/
 *
 * algorithms
 * Easy (35.32%)
 * Total Accepted:    208.9K
 * Total Submissions: 591.4K
 * Testcase Example:  '[1,2,6,3,4,5,6]\n6'
 *
 * Remove all elements from a linked list of integers that have value val.
 * 
 * Example:
 * 
 * 
 * Input:  1->2->6->3->4->5->6, val = 6
 * Output: 1->2->3->4->5
 * 
 * 
 */
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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy=new ListNode(-1);
        ListNode* last=dummy;
        while(head!=NULL){
            if(head->val!=val)
            {
                if(dummy->next==NULL)
                {
                    dummy->next=head;
                    last=dummy->next;
                }
                else
                {
                    last->next=head;
                    last=head;
                }
                
            }
            else
            {
                last->next=NULL;
            }
            
          
            /* code */
            
            head=head->next;
        }
        return dummy->next;
        
    }
};

