//974. Subarray Sums Divisible by K
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size(),ans=0;
        int sum=0;
        vector<int> pf(k);
        pf[sum]++;
        for(int i=0;i<n;i++){
            sum=(sum+nums[i])%k;
            if(sum<0)sum+=k;
            ans+=pf[sum];
            pf[sum]++;
        }
        
        return ans;
    }
};