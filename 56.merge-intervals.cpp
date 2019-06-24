/*
 * @lc app=leetcode id=56 lang=cpp
 *
 * [56] Merge Intervals
 *
 * https://leetcode.com/problems/merge-intervals/description/
 *
 * algorithms
 * Medium (34.72%)
 * Total Accepted:    303.1K
 * Total Submissions: 873K
 * Testcase Example:  '[[1,3],[2,6],[8,10],[15,18]]'
 *
 * Given a collection of intervals, merge all overlapping intervals.
 * 
 * Example 1:
 * 
 * 
 * Input: [[1,3],[2,6],[8,10],[15,18]]
 * Output: [[1,6],[8,10],[15,18]]
 * Explanation: Since intervals [1,3] and [2,6] overlaps, merge them into
 * [1,6].
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: [[1,4],[4,5]]
 * Output: [[1,5]]
 * Explanation: Intervals [1,4] and [4,5] are considered overlapping.
 * 
 */
/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:
    vector<Interval> merge(vector<Interval>& intervals) {
        vector<Interval> res;
        sort(intervals.begin(),intervals.end(),[](Interval &a,Interval &b){return  a.start<b.start;});
        if(intervals.size()<=0)
           return res;
        Interval start=intervals.at(0);
        int i=0;
        int maxend=0;
        while(i<intervals.size()-1)
        {
            if(maxend==0)
            {
                maxend=intervals.at(i).end;
            }
           if(maxend<intervals.at(i+1).start)
           {
               Interval tmp=intervals.at(i);
               tmp.start=start.start;
               if(maxend!=0)
               {
                    tmp.end=maxend;
               }
               
               res.push_back(tmp);
               start=intervals.at(i+1);
               maxend=0;
           }
           else
           {
               /* code */
               maxend=max(maxend,intervals.at(i+1).end);
           }
           i++;
           
        }
          Interval tmp=intervals.at(i);
             if(maxend!=0)
               {
                    tmp.end=maxend;
               }
               tmp.start=start.start;
               res.push_back(tmp);
    
     return res;

        
    }
};
