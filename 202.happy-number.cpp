/*
 * @lc app=leetcode id=202 lang=cpp
 *
 * [202] Happy Number
 *
 * https://leetcode.com/problems/happy-number/description/
 *
 * algorithms
 * Easy (44.36%)
 * Total Accepted:    215.6K
 * Total Submissions: 486K
 * Testcase Example:  '19'
 *
 * Write an algorithm to determine if a number is "happy".
 * 
 * A happy number is a number defined by the following process: Starting with
 * any positive integer, replace the number by the sum of the squares of its
 * digits, and repeat the process until the number equals 1 (where it will
 * stay), or it loops endlessly in a cycle which does not include 1. Those
 * numbers for which this process ends in 1 are happy numbers.
 * 
 * Example: 
 * 
 * 
 * Input: 19
 * Output: true
 * Explanation: 
 * 1^2 + 9^2 = 82
 * 8^2 + 2^2 = 68
 * 6^2 + 8^2 = 100
 * 1^2 + 0^2 + 0^2 = 1
 * 
 */
class Solution {
public:
    bool isHappy(int n) {
        int p=get(n);
        while(p!=1&&p!=4)
        {
            p=get(p);
        }

        return p==1;
    }

    int get(int n)
    {
        int p=0;
        while(n)
        {
            p+=(n%10)*(n%10);
            n=n/10;
        }

        return p;
    }
};

