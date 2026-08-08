class Solution {
public:



    void findcombinationSum(int i,int sum,vector<vector<int>>&ans,vector<int>&ds,vector<int>&arr,int target,int n){

        if(i==n){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }

        if(target>=arr[i]){
            sum+=arr[i];
            ds.push_back(arr[i]);
            findcombinationSum(i,sum,ans,ds,arr,target-arr[i],n);
            ds.pop_back();
        }


        findcombinationSum(i+1,sum,ans,ds,arr,target,n);



    }






    vector<vector<int>> combinationSum(vector<int>& arr, int target) {


        vector<int>ds;
        vector<vector<int>>ans;
        int n=arr.size();
        int sum;

        findcombinationSum(0,0,ans,ds,arr,target,n);
        return ans;
        



        
    }
};