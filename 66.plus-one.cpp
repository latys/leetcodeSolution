/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 *
 * https://leetcode.com/problems/plus-one/description/
 *
 * algorithms
 * Easy (40.61%)
 * Total Accepted:    349.7K
 * Total Submissions: 861.2K
 * Testcase Example:  '[1,2,3]'
 *
 * Given a non-empty array of digits representing a non-negative integer, plus
 * one to the integer.
 * 
 * The digits are stored such that the most significant digit is at the head of
 * the list, and each element in the array contain a single digit.
 * 
 * You may assume the integer does not contain any leading zero, except the
 * number 0 itself.
 * 
 * Example 1:
 * 
 * 
 * Input: [1,2,3]
 * Output: [1,2,4]
 * Explanation: The array represents the integer 123.
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: [4,3,2,1]
 * Output: [4,3,2,2]
 * Explanation: The array represents the integer 4321.
 * 
 * 
 */
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> res;
        int jinwei=0;
        for(int i=digits.size()-1;i>=0;i--)
        {
             int tmp=digits.at(i);
             if(i==digits.size()-1)
             {
                digits.at(i)=(tmp+1+jinwei)%10;
                jinwei=(tmp+jinwei+1)/10;
             }
             else
             {
                 digits.at(i)=(tmp+jinwei)%10;
                 jinwei=(tmp+jinwei)/10;
             }
             
             
             
        }

        if(jinwei>0)
        {
            res.push_back(jinwei);
  
        }
        for(int d:digits)
            {
                /* code */
                res.push_back(d);
            }

        return res;
        
    }
};
