class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        int x=n*(n+1)/2;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        int res=x-sum;
        return res;
    }
};