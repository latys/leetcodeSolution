/*
 * @lc app=leetcode id=83 lang=cpp
 *
 * [83] Remove Duplicates from Sorted List
 *
 * https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/
 *
 * algorithms
 * Easy (41.82%)
 * Total Accepted:    299.4K
 * Total Submissions: 716K
 * Testcase Example:  '[1,1,2]'
 *
 * Given a sorted linked list, delete all duplicates such that each element
 * appear only once.
 * 
 * Example 1:
 * 
 * 
 * Input: 1->1->2
 * Output: 1->2
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: 1->1->2->3->3
 * Output: 1->2->3
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
    ListNode* deleteDuplicates(ListNode* head) {
             if(head==NULL)
                return NULL;
            ListNode *p1=head;
            ListNode *p2=head->next;
            while(p2!=NULL)
            {
                if(p2->val!=p1->val)
                {
                    if(p2!=p1->next)
                    {
                        p1->next=p2;
                    }
                    p1=p1->next;
                    p2=p2->next;
                }
                else
                {
                    p2=p2->next;
                }
                
            }
            p1->next=p2;

            return head;

        
    }
};
