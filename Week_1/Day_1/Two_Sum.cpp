class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int>m;

        for(int i=0 ; i<n ; i++)
        {
            int req = target-nums[i];
            auto it = m.find(req);

            if(it != m.end())
            return {i,it->second};

            m.insert(make_pair(nums[i],i));
        }

        return {};
    }
};
