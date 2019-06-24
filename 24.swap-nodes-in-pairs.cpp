/*
 * @lc app=leetcode id=24 lang=cpp
 *
 * [24] Swap Nodes in Pairs
 *
 * https://leetcode.com/problems/swap-nodes-in-pairs/description/
 *
 * algorithms
 * Medium (43.24%)
 * Total Accepted:    283.5K
 * Total Submissions: 655.7K
 * Testcase Example:  '[1,2,3,4]'
 *
 * Given a linked list, swap every two adjacent nodes and return its head.
 * 
 * You may not modify the values in the list's nodes, only nodes itself may be
 * changed.
 * 
 * 
 * 
 * Example:
 * 
 * 
 * Given 1->2->3->4, you should return the list as 2->1->4->3.
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
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy=new ListNode(-1);
        if(head==NULL)
           return NULL;
        ListNode* p1=head;
        ListNode* p2=head->next;
        ListNode* last=dummy;
        dummy->next=head;
        while(p1!=NULL)
        {
            p2=p1->next;
            if(p2!=NULL)
            {
                last->next=p2;
                        p1->next=p2->next;
                        p2->next=p1;
                        last=p1;
                        p1=p1->next;
            }
            else
            {
                break;
            }
            
        
            
        }

        return dummy->next;
        
    }
};

