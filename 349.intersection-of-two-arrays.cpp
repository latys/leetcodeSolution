/*
 * @lc app=leetcode id=349 lang=cpp
 *
 * [349] Intersection of Two Arrays
 *
 * https://leetcode.com/problems/intersection-of-two-arrays/description/
 *
 * algorithms
 * Easy (53.46%)
 * Total Accepted:    203.9K
 * Total Submissions: 381.4K
 * Testcase Example:  '[1,2,2,1]\n[2,2]'
 *
 * Given two arrays, write a function to compute their intersection.
 * 
 * Example 1:
 * 
 * 
 * Input: nums1 = [1,2,2,1], nums2 = [2,2]
 * Output: [2]
 * 
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
 * Output: [9,4]
 * 
 * 
 * Note:
 * 
 * 
 * Each element in the result must be unique.
 * The result can be in any order.
 * 
 * 
 * 
 * 
 */
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> map1;
        unordered_map<int,int> map2;
        vector<int> ret;
        for(int i:nums1)
        {
            if(map1.count(i)>0)
               map1[i]++;
            else
            map1[i]=1;
        }
          for(int i:nums2)
        {
            if(map2.count(i)>0)
               map2[i]++;
            else
            map2[i]=1;
        }
        
        	unordered_map<int,int>::iterator it = map1.begin();
	    while(it != map1.end()) {
            if(map2.count(it->first)>0)
            {
                ret.push_back(it->first);
            }
		
		it++;
	   }

       return ret;

    }
};

