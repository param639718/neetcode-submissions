class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        int m=strs[0].size();

        for(int i=0;i<m;i++){
            for(auto s:strs){
                if(i==s.size() || s[i]!=strs[0][i]){
                    return s.substr(0,i);
                }
            }
        }
        return strs[0];
    }
};