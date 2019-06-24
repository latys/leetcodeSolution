/*
 * @lc app=leetcode id=409 lang=cpp
 *
 * [409] Longest Palindrome
 *
 * https://leetcode.com/problems/longest-palindrome/description/
 *
 * algorithms
 * Easy (47.73%)
 * Total Accepted:    92.6K
 * Total Submissions: 193.9K
 * Testcase Example:  '"abccccdd"'
 *
 * Given a string which consists of lowercase or uppercase letters, find the
 * length of the longest palindromes that can be built with those letters.
 * 
 * This is case sensitive, for example "Aa" is not considered a palindrome
 * here.
 * 
 * Note:
 * Assume the length of given string will not exceed 1,010.
 * 
 * 
 * Example: 
 * 
 * Input:
 * "abccccdd"
 * 
 * Output:
 * 7
 * 
 * Explanation:
 * One longest palindrome that can be built is "dccaccd", whose length is 7.
 * 
 * 
 */
class Solution {
public:
    int longestPalindrome(string s) {
        int len=s.size();
        unordered_map<char,int> map;
        for(char c:s)
        {
            if(map.count(c)==0)
              map[c]=1;
            else
            {
                 map[c]++;
            }
            
        }
        int count=0;
        unordered_map<char,int>::iterator it;
        it = map.begin();
        while(it != map.end())
        {
            if(it->second%2!=0)
              count++;
            
            it++;
        }
      
        if(count==0)
        return len;
        else
        {
            return len-count+1; 
        }
        

    }
};

