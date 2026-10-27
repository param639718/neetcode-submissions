class Solution {
public:
    bool isAnagram(string s, string t) {
          sort(s.begin(),s.end());
          sort(t.begin(),t.end());

          int n=s.size();
          int m=t.size();

          if(n<m || m>n){
            return false;
          }
          else{
            for(int i=0;i<n;i++){
                if(s[i]!=t[i]){
                     return false;
                }
            }
            return true;
          }
    }
};
