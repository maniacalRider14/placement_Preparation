//283. Move Zeroes
void moveZeroes(vector<int>& nums)
{
	for(int i=0,next=0;i<nums.size();++i)
		if(nums[i])
			swap(nums[i],nums[next++]);
}

// 2nd
void moveZeroes(vector<int>& nums)
{
    stable_partition(begin(nums),end(nums),[](int i){return i;});
}

//3rd
void moveZeroes(vector<int>& nums)
{
    stable_partition(rbegin(nums),rend(nums),logical_not<int>());
}