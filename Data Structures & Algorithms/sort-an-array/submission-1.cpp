class Solution {
public:
    
    int n;
    vector<int> arr;

    void merge(int low,int mid,int high){
        int i=low;
        int j=mid+1;
        vector<int> temp;

        while(i<=mid && j<=high){
            if(arr[i]<=arr[j]){
                temp.push_back(arr[i]);
                i++;
            }
            else{
               temp.push_back(arr[j]);
                j++; 
            }   
        }


         while(i<=mid){
               temp.push_back(arr[i]);
                i++; 
            }

         while(j<=high){
               temp.push_back(arr[j]);
                j++; 
            }

       for(int k=0;k<temp.size();k++){
                arr[low+k]=temp[k];
            }
    }

    void mergesort(int low,int high){

        if(low>=high){
            return;
        }

        int mid=low+(high-low)/2;

        mergesort(low,mid);
        mergesort(mid+1,high);

        merge(low,mid,high);
    }

    vector<int> sortArray(vector<int>& nums) {
           n=nums.size();
           arr=nums;
           int low=0;
           int high=n-1;
        
           arr.resize(n);
 
           mergesort(low,high);

           return arr;  
            
    }
};