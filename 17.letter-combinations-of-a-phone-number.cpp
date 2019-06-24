/*
 * @lc app=leetcode id=17 lang=cpp
 *
 * [17] Letter Combinations of a Phone Number
 *
 * https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/
 *
 * algorithms
 * Medium (40.32%)
 * Total Accepted:    346.1K
 * Total Submissions: 858.3K
 * Testcase Example:  '"23"'
 *
 * Given a string containing digits from 2-9 inclusive, return all possible
 * letter combinations that the number could represent.
 * 
 * A mapping of digit to letters (just like on the telephone buttons) is given
 * below. Note that 1 does not map to any letters.
 * 
 * 
 * 
 * Example:
 * 
 * 
 * Input: "23"
 * Output: ["ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"].
 * 
 * 
 * Note:
 * 
 * Although the above answer is in lexicographical order, your answer could be
 * in any order you want.
 * 
 */
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        unordered_map<char,string> m={{2,"abc"},{3,"def"},{4,"ghi"},{5,"jkl"},{6,"mno"},{7,"pqrs"},{8,"tuv"},{9,"wxyz"}};
        vector<string> res;
        if (digits.size()==0)
        {
            return res;
        }
        
        res=letterCombinations(digits,0);
        return res;
        
    }

     vector<string> letterCombinations(string digits,int start)
     {
        unordered_map<char,string> m={{'2',"abc"},{'3',"def"},{'4',"ghi"},{'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}};
        vector<string> res;
        if(start>=digits.size()-1)
        {
            for (char s:m[digits[start]])
            {
                res.push_back(string(1,s));
            }
           return res; 
        }
        else
        {
            vector<string> tmp=letterCombinations(digits,start+1);
             for (char s:m[digits[start]])
            {
                for(string r:tmp)
                {
                   res.push_back(string(1,s)+r);
                }
                
            }
        }

        return res;

     }
};

