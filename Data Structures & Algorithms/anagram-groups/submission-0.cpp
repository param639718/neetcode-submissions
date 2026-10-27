class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      int n=strs.size();
      map<string,vector<string>>mp;

      for(auto s:strs){
        string sorteds=s;
        sort(sorteds.begin(),sorteds.end());

        mp[sorteds].push_back(s);
      }

      vector<vector<string>> ans;

      for(auto pair:mp){
        ans.push_back(pair.second);
      }
      return ans;

        
    }
};
