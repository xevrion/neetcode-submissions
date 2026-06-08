class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> wiwi;
        for(int i =0; i<nums.size(); i++){
            wiwi.insert(nums[i]);
        }

        if(nums.size() == wiwi.size()) return false; else return true;
    }
};