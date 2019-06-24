/*
 * @lc app=leetcode id=19 lang=cpp
 *
 * [19] Remove Nth Node From End of List
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *dummy=new ListNode(0);
        dummy->next=head;
        int index=0;
        ListNode *pre=dummy;
        while(head!=NULL)
        {
            
            index++;
            if(index==n+1)
            {
                //pre->next=head->next;
                pre=dummy->next;
                head=head->next;
                continue;
            }
            if ((pre!=dummy)) {
                /* code */
                pre=pre->next;
            }
            
            head=head->next;
            

        }
        if(pre->next!=NULL)
        {
            pre->next=pre->next->next;
        }
        return dummy->next;
    }
};

