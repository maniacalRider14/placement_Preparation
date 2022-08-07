//26. Remove Duplicates from Sorted Array
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int left = 0;
        for(int right =1; right< nums.size(); right++){
           if(nums[left] != nums[right])
               left++;
               nums[left] = nums[right];
           }
    return left+1;
    }
};

//2nd approach
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {        
	int numOfDuplicates = 0;

	for(int i = 1; i < nums.size(); ++i)
	{
		if(nums[i] == nums[i - 1])
			++numOfDuplicates;
		else
			nums[i - numOfDuplicates] = nums[i];
	}
	return nums.size() - numOfDuplicates;
}
};