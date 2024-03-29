/*
 * @lc app=leetcode id=12 lang=cpp
 *
 * [12] Integer to Roman
 *
 * https://leetcode.com/problems/integer-to-roman/description/
 *
 * algorithms
 * Medium (49.70%)
 * Total Accepted:    202.9K
 * Total Submissions: 408.3K
 * Testcase Example:  '3'
 *
 * Roman numerals are represented by seven different symbols: I, V, X, L, C, D
 * and M.
 * 
 * 
 * Symbol       Value
 * I             1
 * V             5
 * X             10
 * L             50
 * C             100
 * D             500
 * M             1000
 * 
 * For example, two is written as II in Roman numeral, just two one's added
 * together. Twelve is written as, XII, which is simply X + II. The number
 * twenty seven is written as XXVII, which is XX + V + II.
 * 
 * Roman numerals are usually written largest to smallest from left to right.
 * However, the numeral for four is not IIII. Instead, the number four is
 * written as IV. Because the one is before the five we subtract it making
 * four. The same principle applies to the number nine, which is written as IX.
 * There are six instances where subtraction is used:
 * 
 * 
 * I can be placed before V (5) and X (10) to make 4 and 9. 
 * X can be placed before L (50) and C (100) to make 40 and 90. 
 * C can be placed before D (500) and M (1000) to make 400 and 900.
 * 
 * 
 * Given an integer, convert it to a roman numeral. Input is guaranteed to be
 * within the range from 1 to 3999.
 * 
 * Example 1:
 * 
 * 
 * Input: 3
 * Output: "III"
 * 
 * Example 2:
 * 
 * 
 * Input: 4
 * Output: "IV"
 * 
 * Example 3:
 * 
 * 
 * Input: 9
 * Output: "IX"
 * 
 * Example 4:
 * 
 * 
 * Input: 58
 * Output: "LVIII"
 * Explanation: L = 50, V = 5, III = 3.
 * 
 * 
 * Example 5:
 * 
 * 
 * Input: 1994
 * Output: "MCMXCIV"
 * Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
 * 
 */
class Solution {
public:
    string intToRoman(int num) {

        unordered_map<int,char> m={{1,'I'},{5,'V'},{10,'X'},{50,'L'},{100,'C'},{500,'D'},{1000,'M'}};
        int tmp=1;
        int first=1;
        int i=1;
        int mid=5;
        string res="";
        while(num){
            if(!first)
            {
               
               i=i*10;
               mid=mid*10;
            }
             first=0;
            
            tmp=num%10*i;
            if(tmp/i==5)
            {
                res=res+m[tmp];
            }
            else if(tmp/i==9)
            {
                res=res+m[i*10]+m[i];
            }
            else if(tmp/i==4)
            {
                res=res+m[i*5]+m[i];
            }
            else if(tmp/i<4)
            {
                for(int j=0;j<tmp/i;j++)
                {
                    res=res+m[i];
                }
            }
            else if(tmp/i>5)
            {
                for(int j=5;j<tmp/i;j++)
                {
                    res=res+m[i];
                }
                res=res+m[i*5];
            }

            num=num/10;
            /* code */
        }

        reverse(res.begin(),res.end());
        return res;
        
        
    }
};

