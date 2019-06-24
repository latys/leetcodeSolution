/*
 * @lc app=leetcode id=415 lang=cpp
 *
 * [415] Add Strings
 *
 * https://leetcode.com/problems/add-strings/description/
 *
 * algorithms
 * Easy (43.38%)
 * Total Accepted:    89.6K
 * Total Submissions: 206.5K
 * Testcase Example:  '"0"\n"0"'
 *
 * Given two non-negative integers num1 and num2 represented as string, return
 * the sum of num1 and num2.
 * 
 * Note:
 * 
 * The length of both num1 and num2 is < 5100.
 * Both num1 and num2 contains only digits 0-9.
 * Both num1 and num2 does not contain any leading zero.
 * You must not use any built-in BigInteger library or convert the inputs to
 * integer directly.
 * 
 * 
 */
class Solution {
public:
    string addStrings(string num1, string num2) {
        int len1=num1.size();
        int len2=num2.size();
        int carry=0;
        string ret("");
        int min_len=min(len1,len2);
        int max_len=max(len1,len2);
        int i=0;
        for( i=0;i<min_len;i++)
        {
           char sum=num1[len1-i-1]+num2[len2-i-1]+carry-'0';
           if(sum>'9')
           {
               sum=sum-'9'-1;
               carry=1;
           }
           else
           {
               carry=0;
           }
          ret=ret+sum;
        }

        if(min_len!=max_len)
        {
            for( i=min_len;i<max_len;i++)
            {
                char sum='0';
                  if(len1==max_len)
                  {
                      sum=num1[len1-i-1]+carry;
                  }
                  else
                  {
                      sum=num2[len2-i-1]+carry;
                  }
                  
                  
                    if(sum>'9')
                    {
                        sum=sum-'9'-1;
                        carry=1;
                    }
                    else
                    {
                        carry=0;
                    }
                    ret=ret+sum;
            }
        }

        if(carry>0)
           ret.append("1");

        reverse(ret.begin(),ret.end());
        return ret;
    }
};

