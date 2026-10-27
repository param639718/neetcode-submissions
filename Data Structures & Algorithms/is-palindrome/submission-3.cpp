class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        int left=0;
        int right=n-1;

        if(n==0){
            return true;
        }

        while(left<right){
                while(!isalnum(s[left])){
                    left++;
                }
                while(!isalnum(s[right])){
                    right--;
                }
                if((left<n || right>0) && tolower(s[left])!=tolower(s[right])){
                    return false;
                }
                left++;
                right--;
        }
        return true;
        
    }
};
