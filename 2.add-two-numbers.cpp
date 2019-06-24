/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
 *
 * https://leetcode.com/problems/add-two-numbers/description/
 *
 * algorithms
 * Medium (30.49%)
 * Total Accepted:    755.7K
 * Total Submissions: 2.5M
 * Testcase Example:  '[2,4,3]\n[5,6,4]'
 *
 * You are given two non-empty linked lists representing two non-negative
 * integers. The digits are stored in reverse order and each of their nodes
 * contain a single digit. Add the two numbers and return it as a linked list.
 * 
 * You may assume the two numbers do not contain any leading zero, except the
 * number 0 itself.
 * 
 * Example:
 * 
 * 
 * Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
 * Output: 7 -> 0 -> 8
 * Explanation: 342 + 465 = 807.
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int list1=0;
        int list2=0;
        int jinwei=0;
        ListNode *cur=NULL;
        ListNode *head=NULL;
        ListNode *last=NULL;
        while(l1!=NULL&&l2!=NULL)
        {
            int sum=(l1->val+l2->val+jinwei);
            jinwei=sum/10;
            cur=new ListNode(sum%10);
            
            if (last!=NULL) {
            /* code */
            last->next=cur;
            }
            else
            {
                head=cur;
            }
            last=cur;
            l1=l1->next;
            l2=l2->next;
        }
        while(l2!=NULL)
        {
            int sum=(l2->val+jinwei);
            jinwei=sum/10;
            cur=new ListNode(sum%10);
            
            if (last!=NULL) {
            /* code */
             last->next=cur;
            }
            else
            {
                head=cur;
            }
            last=cur;
            l2=l2->next;
        }
           while(l1!=NULL)
        {
               int sum=(l1->val+jinwei);
            jinwei=sum/10;
            cur=new ListNode(sum%10);
            
            if (last!=NULL) {
            /* code */
             last->next=cur;
            }
            else
            {
                head=cur;
            }
            last=cur;
            l1=l1->next;
        }
        if (jinwei>0) {
            /* code */
            cur=new ListNode(jinwei);
            last->next=cur;
        }
        
        
        
        return head;
    }
};
