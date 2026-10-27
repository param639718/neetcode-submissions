class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1;
        int n=nums.size();

        for(int i=0;i<n-1;i++){
                if(nums[i]==nums[i+1]){
                    continue;
                }
                else{
                    nums[k]=nums[i+1];
                    k++;
                }
        }
        return k;
    }
};