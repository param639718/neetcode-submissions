class Solution {
public:
    string mergeAlternately(string word1, string word2) {
              int n=word1.size();
              int m=word2.size();

              string s="";

              int mini=min(n,m);

              for(int i=0;i<mini;i++){
                s+=word1[i];
                s+=word2[i];
              }

              if(m>n){
                for(int i=n;i<m;i++){
                      s+=word2[i];
                }
              }
              else{
                 for(int i=m;i<n;i++){
                      s+=word1[i];
                }
              }
              return s;
    }
};