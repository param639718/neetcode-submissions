class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();

        vector<int>prefix(n);

        prefix[0]=nums[0];

        for(int i=1;i<n;i++){
              prefix[i]=prefix[i-1]+nums[i];
        }

        long long ans=0;

        map<int,int>mp;
        mp[0]++;

        for(int r=0;r<n;r++){
            ans+=mp[prefix[r]-k];
            mp[prefix[r]]++;
        }

        return ans;
    }
};