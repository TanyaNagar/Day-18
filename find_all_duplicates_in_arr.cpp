//Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears once or twice, return an array of all the integers that appears twice.
//You must write an algorithm that runs in O(n) time and uses only constant extra space.
//e.g Input: nums = [4,3,2,7,8,2,3,1]
//Output: [2,3]


class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> result;
        //array- 1 to n but indexing 0 to n-1
        for(int n : nums){
            n = abs(n);  //abs--absolute
            if(nums[n-1] > 0) nums[n-1] *= -1;
            else result.push_back(n);
        }
        return result;
    }
};