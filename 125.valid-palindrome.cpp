/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 *
 * https://leetcode.com/problems/valid-palindrome/description/
 *
 * algorithms
 * Easy (30.29%)
 * Total Accepted:    325K
 * Total Submissions: 1.1M
 * Testcase Example:  '"A man, a plan, a canal: Panama"'
 *
 * Given a string, determine if it is a palindrome, considering only
 * alphanumeric characters and ignoring cases.
 * 
 * Note: For the purpose of this problem, we define empty string as valid
 * palindrome.
 * 
 * Example 1:
 * 
 * 
 * Input: "A man, a plan, a canal: Panama"
 * Output: true
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: "race a car"
 * Output: false
 * 
 * 
 */
class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size()==0||s.size()==1)
           return true;
        return isPalindrome(s,0,s.size()-1);
    }

    bool isPalindrome(string s,int left,int right)
    {
        while((s[left]==' '||!isalpha(s[left]))&&left<s.size()){
            left++;
        }
        while((s[right]==' '||!isalpha(s[right]))&&right>0){
            right--;
        }
        
        int len=s.size();
        if(left<right)
        {
            return (s[left]==s[right]||abs(s[left]-s[right])=='A'-'a')&&isPalindrome(s,left+1,right-1);
        }

        return true;
    }
};

