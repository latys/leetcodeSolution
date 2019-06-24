/*
 * @lc app=leetcode id=6 lang=cpp
 *
 * [6] ZigZag Conversion
 *
 * https://leetcode.com/problems/zigzag-conversion/description/
 *
 * algorithms
 * Medium (30.56%)
 * Total Accepted:    284.9K
 * Total Submissions: 932.4K
 * Testcase Example:  '"PAYPALISHIRING"\n3'
 *
 * The string "PAYPALISHIRING" is written in a zigzag pattern on a given number
 * of rows like this: (you may want to display this pattern in a fixed font for
 * better legibility)
 * 
 * 
 * P   A   H   N
 * A P L S I I G
 * Y   I   R
 * 
 * 
 * And then read line by line: "PAHNAPLSIIGYIR"
 * 
 * Write the code that will take a string and make this conversion given a
 * number of rows:
 * 
 * 
 * string convert(string s, int numRows);
 * 
 * Example 1:
 * 
 * 
 * Input: s = "PAYPALISHIRING", numRows = 3
 * Output: "PAHNAPLSIIGYIR"
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: s = "PAYPALISHIRING", numRows = 4
 * Output: "PINALSIGYAHRPI"
 * Explanation:
 * 
 * P     I    N
 * A   L S  I G
 * Y A   H R
 * P     I
 * 
 */
class Solution {
public:
    string convert(string s, int numRows) {

        int tap=2*(numRows-1);
        if(tap<=0)
          return s;
        string res="";
        for(int i=0;i<numRows;i++)
        {
            int col=0;
            for(int j=i;j<s.size();)
            {
                res=res+s[j];
                if(i==0||i==numRows-1)
                {
                    j=j+tap;
                    continue;
                }
                if(col%2==0)
                {
                    j=j+tap-2*i;
                }
                else
                {
                    j=j+2*i;
                }
                col++;
                
                
            }
        }

        return res;
        
    }
};
