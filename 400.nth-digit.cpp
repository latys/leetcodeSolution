/*
 * @lc app=leetcode id=400 lang=cpp
 *
 * [400] Nth Digit
 *
 * https://leetcode.com/problems/nth-digit/description/
 *
 * algorithms
 * Easy (30.16%)
 * Total Accepted:    45.4K
 * Total Submissions: 150.5K
 * Testcase Example:  '3'
 *
 * Find the n^th digit of the infinite integer sequence 1, 2, 3, 4, 5, 6, 7, 8,
 * 9, 10, 11, ... 
 * 
 * Note:
 * n is positive and will fit within the range of a 32-bit signed integer (n <
 * 2^31).
 * 
 * 
 * Example 1:
 * 
 * Input:
 * 3
 * 
 * Output:
 * 3
 * 
 * 
 * 
 * Example 2:
 * 
 * Input:
 * 11
 * 
 * Output:
 * 0
 * 
 * Explanation:
 * The 11th digit of the sequence 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, ... is a
 * 0, which is part of the number 10.
 * 
 * 
 */
class Solution {
public:
    int findNthDigit(int n) {
        int len=0;
        while(n)
        {
            len++;
            n=n/10;
        }

        int min=0;
        int wei=0;
        for (size_t i = 0; i < len; i++)
        {
           wei++;
           min+=(i+1)*9*pow(10,i);
           if (min>n)
           {
               min=min-(i+1)*9*pow(10,i);
               break;
           }
  
        }
        int tmp=pow(10,wei-1);
     
       int a=tmp+(n-min)/wei;
       int b=(n-min)%wei;
     
       


      
       
       

       
    }
};

