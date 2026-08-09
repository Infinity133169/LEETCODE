class Solution {
public:

    void findCombination(int ind,vector<int>&arr,int target,int n,vector<int>&ds,vector<vector<int>>&ans){

        ////////base case

        int i;

        if(target==0){
            ans.push_back(ds);
            return;
        
        }

        for(i=ind;i<n;i++){
            if(arr[i]>target) break;
            if(i>ind && arr[i]==arr[i-1]) continue;
            ds.push_back(arr[i]);
            findCombination(i+1,arr,target-arr[i],n,ds,ans);
            ds.pop_back();
        }

    }




    vector<vector<int> > combinationSum2(vector<int>& arr, int target) {
        //your code goes here
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        vector<int> ds;
        int n=arr.size();
        findCombination(0,arr,target,n,ds,ans);
        return ans;
    }
};