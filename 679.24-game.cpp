/*
 * @lc app=leetcode id=679 lang=cpp
 *
 * [679] 24 Game
 */
class Solution {
public:
    bool judgePoint24(vector<int>& nums) {
        bool ret=false;
        
        vector<double> dnums;
        for(int num:nums)
        {
            dnums.push_back(num);
        }
        return judgePoint24(dnums);
        

    }

     bool judgePoint24(vector<double>& nums)
     {
        bool ret=false;
        int len=nums.size();
        //std::cout<<"len:"<<len<<std::endl;
        if (len==1)
        {
            return (abs(nums[0]-24)<=0.0001);
        }
        
        for (int i = 0; i < len-1; i++)
        {
            for (int j = i+1; j < len; j++)
            {
                
                double var2=nums[j];
                double var1=nums[i];
               
                nums.erase(nums.begin()+j);
                 nums.erase(nums.begin()+i);

                double plus=var1+var2;
                nums.push_back(plus);
                ret=ret||judgePoint24(nums);
                nums.erase(nums.begin()+nums.size()-1);


                double minus=var1-var2;
                nums.push_back(minus);
                ret=ret||judgePoint24(nums);
                nums.erase(nums.begin()+nums.size()-1);

                minus=var2-var1;
                nums.push_back(minus);
                ret=ret||judgePoint24(nums);
                nums.erase(nums.begin()+nums.size()-1);

                double mul=var1*var2;
                nums.push_back(mul);
                ret=ret||judgePoint24(nums);
                nums.erase(nums.begin()+nums.size()-1);


                double divi=var1/var2;
                nums.push_back(divi);
                ret=ret||judgePoint24(nums);
                nums.erase(nums.begin()+nums.size()-1);

                divi=var2/var1;
                nums.push_back(divi);
                ret=ret||judgePoint24(nums);
                nums.erase(nums.begin()+nums.size()-1);


                nums.insert(nums.begin()+i,var1);
                nums.insert(nums.begin()+j,var2);

            }
            
        }
        return ret;
     }

};

