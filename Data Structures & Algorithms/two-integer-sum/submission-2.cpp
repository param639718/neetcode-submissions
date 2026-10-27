class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;

        vector<int> ans;

        // while(low<high){
        //     if(nums[low]+nums[high]==target){
        //            ans.push_back(low);
        //            ans.push_back(high);
        //            break;
        //     }
        //     else if(nums[low]+nums[high]<abs(target)){
        //         low++;
        //     }
        //     else{
        //         high--;
        //     }
        // }

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                   break;
                }
            }
        }
        return ans;
    }
};
