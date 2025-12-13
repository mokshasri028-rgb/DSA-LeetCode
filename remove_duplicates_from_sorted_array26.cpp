#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> exn;
        if(nums.empty())
            return 0;
        exn.push_back(nums[0]);
        int i=1,k=0,j=0;
        while(i<nums.size()){
            if(exn[j]!=nums[i]){
                j=j+1;
                exn.push_back(nums[i]);
                i=i+1;
            }
            else
                i=i+1;
        }
        k=exn.size();
        for(int i=0;i<k;i++){
            nums[i]=exn[i];
        }
        return k;
    }
};