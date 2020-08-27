class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        for(auto i=0; i<nums.size(); i++){
                int diff = target - nums[i];
                  auto index = find(nums.cbegin()+i+1, nums.cend(), diff);
                    if(index != nums.cend()){
                   v.push_back(i);
                    v.push_back(index-nums.cbegin());
                    break;
                }    
            }
         return v;
        }
       
};