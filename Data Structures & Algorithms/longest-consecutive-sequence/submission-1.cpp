class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //  if(nums.size()==0){
        //     return 0;
        //   }
        //   if(nums.size()==1){
        //     return 1;
        //   }
        //    sort(nums.begin(),nums.end());

        //   int cnt=1;

        //   int n=nums.size();
        //   int maxi=1;

        //   for(int i=0;i<n-1;i++){
        //     if(nums[i+1]==nums[i]){
        //         continue;
        //     }
        //     if(nums[i+1]-nums[i]==1){
        //         cnt++;
        //     }
        //     else{
        //         cnt=1;
        //     }
        //     maxi=max(maxi,cnt);
            
        //   }
        //   return maxi ;
// this is TC is nlog n

      unordered_set<int> st(nums.begin(), nums.end());

        int longest = 0;

        for (int num : st) {

            // Start counting only from the beginning
            // of a consecutive sequence
            if (st.find(num - 1) == st.end()) {

                int curr = num;
                int cnt = 1;

                while (st.find(curr + 1) != st.end()) {
                    curr++;
                    cnt++;
                }

                longest = max(longest, cnt);
            }
        }

        return longest;



    }
};
