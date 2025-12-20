class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> ex;
        if(nums.empty())
            return 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                ex.push_back(nums[i]);
            }
        }
        int k=ex.size();
        for(int i=0;i<ex.size();i++){
            nums[i]=ex[i];
        }
        return k;
    }
};