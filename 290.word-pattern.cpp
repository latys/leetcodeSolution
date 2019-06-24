/*
 * @lc app=leetcode id=290 lang=cpp
 *
 * [290] Word Pattern
 *
 * https://leetcode.com/problems/word-pattern/description/
 *
 * algorithms
 * Easy (34.59%)
 * Total Accepted:    132.1K
 * Total Submissions: 382K
 * Testcase Example:  '"abba"\n"dog cat cat dog"'
 *
 * Given a pattern and a string str, find if str follows the same pattern.
 * 
 * Here follow means a full match, such that there is a bijection between a
 * letter in pattern and a non-empty word in str.
 * 
 * Example 1:
 * 
 * 
 * Input: pattern = "abba", str = "dog cat cat dog"
 * Output: true
 * 
 * Example 2:
 * 
 * 
 * Input:pattern = "abba", str = "dog cat cat fish"
 * Output: false
 * 
 * Example 3:
 * 
 * 
 * Input: pattern = "aaaa", str = "dog cat cat dog"
 * Output: false
 * 
 * Example 4:
 * 
 * 
 * Input: pattern = "abba", str = "dog dog dog dog"
 * Output: false
 * 
 * Notes:
 * You may assume pattern contains only lowercase letters, and str contains
 * lowercase letters separated by a single space.
 */
class Solution {
public:
    bool wordPattern(string pattern, string str) {
        unordered_map<char,string> map;
        unordered_map<string,char> map2;
        string sp;
        istringstream s(str);
        int index=0;
        int len=pattern.size();
        while(s>>sp){
            if(index<len)
            {
                if (map.count(pattern[index])==0) {
                    /* code */
                    map[pattern[index]]=sp;
                }
                else
                {
                    if (map[pattern[index]].compare(sp)!=0) {
                        return false;
                    }
                    
                }

                  if (map2.count(sp)==0) {
                    /* code */
                    map2[sp]=pattern[index];
                }
                else
                {
                    if (map2[sp]!=(pattern[index])) {
                        return false;
                    }
                    
                }
                
                
            }
            

            index++;
        }

        if (index!=len) {
            return false;
        }
        
        return true;
        

    }
};

