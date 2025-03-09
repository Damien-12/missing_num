class Solution {
public:
    int missingNumber(vector<int>& nums)
	{
        sort(nums.begin(), nums.end());
        int i = 0;

        for (int num : nums)
		{
            if (num != i) return i;
            i++;
        }

        return i;
    }
};
