class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int n=nums.size();
        // int element=n/2;

        // map<int ,int>mp;

        // for(int i=0;i<n;i++){
        //     mp[nums[i]]++;
        // }
          
        // for(auto x:mp){
        //     if(x.second>element){
        //         return x.first;
        //         break;
        //     }
        // } 
        // return 0; 


            int res = 0, count = 0;

        for (int num : nums) {
            if (count == 0) {
                res = num;
            }
            count += (num == res) ? 1 : -1;
        }
        return res;
    }
};