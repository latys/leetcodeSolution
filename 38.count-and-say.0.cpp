/*
 * @lc app=leetcode id=38 lang=cpp
 *
 * [38] Count and Say
 *
 * https://leetcode.com/problems/count-and-say/description/
 *
 * algorithms
 * Easy (39.40%)
 * Total Accepted:    256.6K
 * Total Submissions: 651.3K
 * Testcase Example:  '1'
 *
 * The count-and-say sequence is the sequence of integers with the first five
 * terms as following:
 * 
 * 
 * 1.     1
 * 2.     11
 * 3.     21
 * 4.     1211
 * 5.     111221
 * 
 * 
 * 1 is read off as "one 1" or 11.
 * 11 is read off as "two 1s" or 21.
 * 21 is read off as "one 2, then one 1" or 1211.
 * 
 * Given an integer n where 1 ≤ n ≤ 30, generate the nth term of the
 * count-and-say sequence.
 * 
 * Note: Each term of the sequence of integers will be represented as a
 * string.
 * 
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: 1
 * Output: "1"
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: 4
 * Output: "1211"
 * 
 */
class Solution {
public:
    string countAndSay(int n) {

         string a="1";
        for(int i=0;i<n;i++)
        {
            
            if(i>0)
            {
              a= count(a);
            }
            
        }
        return a;
        
    }

    string count(string s)
    {
        string res="";
        int start=0;
        int i=1;
        for(i=1;i<s.size();i++)
        {
            if(s[i]!=s[start])
            {
                int count=i-start;
                res+=res+to_string(count)+s[start];
                start=i;
                i++;
            }
            else 
            {
                i++;
            }
        }
        int count=i-start;
                res=res+to_string(count)+s[start];
                start=i;
                i++;

                return res;
    }
};
