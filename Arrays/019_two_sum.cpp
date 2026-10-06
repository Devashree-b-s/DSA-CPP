#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> freq;

        for(int i = 0; i < nums.size(); i++)
        {
            int needed = target - nums[i];

            if(freq.find(needed) != freq.end())
            {
                return {freq[needed], i};
            }

            freq[nums[i]] = i;
        }

        return {};
    }
};
