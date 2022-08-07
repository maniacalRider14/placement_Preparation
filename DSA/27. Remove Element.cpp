//27. Remove Element
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
            nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
        return nums.size();
    }
};

//2nd
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size(),s=0;
        while(s<n){
            if(nums[s]==val){
                nums[s]=nums[n-1];
                n--;
            }else
                ++s;
        }
        return n;
    }
};