/*
 * @lc app=leetcode id=21 lang=cpp
 *
 * [21] Merge Two Sorted Lists
 *
 * https://leetcode.com/problems/merge-two-sorted-lists/description/
 *
 * algorithms
 * Easy (45.62%)
 * Total Accepted:    503.7K
 * Total Submissions: 1.1M
 * Testcase Example:  '[1,2,4]\n[1,3,4]'
 *
 * Merge two sorted linked lists and return it as a new list. The new list
 * should be made by splicing together the nodes of the first two lists.
 * 
 * Example:
 * 
 * Input: 1->2->4, 1->3->4
 * Output: 1->1->2->3->4->4
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {

        ListNode *p1=l1;
        ListNode *p2=l2;
        ListNode *head=NULL;
        ListNode *tail=NULL;
        int cur_list_ptr=0;
        if (l1==NULL) {
            /* code */
            return l2;
        }
        if(l2==NULL)
        {
            return l1;
        }
        
        while(p1!=NULL&&p2!=NULL)
        {
            if (p1->val<p2->val) {
                if (cur_list_ptr==0) {
                    /* code */
                    
                    cur_list_ptr=1;
                    head=p1;
                    tail=p1;
                    p1=p1->next;
                    
                   
                }
                else if(cur_list_ptr==2)
                {
                    
                    tail->next=p1;
                    tail=p1;
                    p1=p1->next;
                    cur_list_ptr=1;
                    
                }else if(cur_list_ptr==1)
                {
                    tail=p1;
                    p1=p1->next;
                    
                    
                }
 
            }
            else
            {
                 if (cur_list_ptr==0) {
                /* code */
                  ListNode *tmp=p2->next;
                    cur_list_ptr=2;
                    head=p2;
                    tail=p2;
                    p2=p2->next;
                      
                    
                 }
                     else if(cur_list_ptr==2)
                {
                    tail=p2;
                    p2=p2->next;
                    
                    
                }else if(cur_list_ptr==1)
                {
                    
                    tail->next=p2;
                    tail=p2;
                    p2=p2->next;
                    cur_list_ptr=2;
                    
                }
            }
            
            
        }

        if(p1!=NULL)
        {
            tail->next=p1;
        }
        if(p2!=NULL)
        {
            tail->next=p2;
        }

        return head;
    }
};
