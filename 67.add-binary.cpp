/*
 * @lc app=leetcode id=67 lang=cpp
 *
 * [67] Add Binary
 *
 * https://leetcode.com/problems/add-binary/description/
 *
 * algorithms
 * Easy (37.80%)
 * Total Accepted:    273.6K
 * Total Submissions: 723.7K
 * Testcase Example:  '"11"\n"1"'
 *
 * Given two binary strings, return their sum (also a binary string).
 * 
 * The input strings are both non-empty and contains only characters 1 or 0.
 * 
 * Example 1:
 * 
 * 
 * Input: a = "11", b = "1"
 * Output: "100"
 * 
 * Example 2:
 * 
 * 
 * Input: a = "1010", b = "1011"
 * Output: "10101"
 * 
 */
class Solution {
public:
    string addBinary(string a, string b) {

        string res;
        int i=a.size()-1;
        int j=b.size()-1;
        int jinwei=0;
        while(i>=0&&j>=0)
        {
               int tmp=(a[i]+b[j]+jinwei-'0'-'0');
                res=res+to_string(tmp%2);
                jinwei=tmp/2;
            // if(a[i]!=b[j])
            // {
            //     if(!jinwei)
            //     {
            //         res=res+"1";
            //     }
            //     else
            //     {
            //         res=res+"0";
            //         jinwei=1;
            //     }
                
               
            // }
            // else
            // {
            //     if (jinwei) {
            //         res=res+"1";
            //         if (a[i]=='0') {
            //            jinwei=0;
            //         }
                    
                    
            //     }
            //     else
            //     {
            //          res=res+"0";
            //           if(a[i]=='1')
            //               jinwei=1;
                    
            //     }
   
           // }
            
            i--;
            j--;
        }

        while(i>=0)
        {
            int tmp=(a[i]+jinwei-'0');
            res=res+to_string(tmp%2);
            jinwei=tmp/2;
            i--;
            
        }

        while(j>=0)
        {
                int tmp=(b[j]+jinwei-'0');
            res=res+to_string(tmp%2);
            jinwei=tmp/2;
            j--;
        }
        if(jinwei)
        {
            res=res+'1';
        }

        reverse(res.begin(),res.end());

     return   res;
        
    }
};
