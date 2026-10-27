class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int element=n/2;

        map<int ,int>mp;

        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
          
        for(auto x:mp){
            if(x.second>element){
                return x.first;
                break;
            }
        } 
        return 0; 
    }
};