/*
 * @lc app=leetcode id=292 lang=cpp
 *
 * [292] Nim Game
 *
 * https://leetcode.com/problems/nim-game/description/
 *
 * algorithms
 * Easy (55.46%)
 * Total Accepted:    178.2K
 * Total Submissions: 321.3K
 * Testcase Example:  '4'
 *
 * You are playing the following Nim Game with your friend: There is a heap of
 * stones on the table, each time one of you take turns to remove 1 to 3
 * stones. The one who removes the last stone will be the winner. You will take
 * the first turn to remove the stones.
 * 
 * Both of you are very clever and have optimal strategies for the game. Write
 * a function to determine whether you can win the game given the number of
 * stones in the heap.
 * 
 * Example:
 * 
 * 
 * Input: 4
 * Output: false 
 * Explanation: If there are 4 stones in the heap, then you will never win the
 * game;
 * No matter 1, 2, or 3 stones you remove, the last stone will always
 * be 
 * removed by your friend.
 */
class Solution {
public:
    bool canWinNim(int n) {
       
       bool result=true;
       bool b1,b2,b3;
          if(n<4)
            return true;
            b1=true;
            b2=true;
            b3=true;
          

            // for(int i=0;i<n-3;i++)
            // {
            //     bool tmp=(!b1||!b2||!b3);
               
                
            //     b1=b2;
            //     b2=b3;
            //     b3=tmp;
            // }
            if(n%4==0)
              return false;

          return true;
        
    }

   bool canWinNim(int n,int who)
    {
        if(n<4)
        {
            if(who==1)
              return true;
            else
            {
                return false;
            }
            
        }


          return canWinNim(n-1,1-who)||canWinNim(n-2,1-who)||canWinNim(n-3,1-who);
    }
};
