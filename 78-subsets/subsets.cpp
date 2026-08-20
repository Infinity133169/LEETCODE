class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>arr;
        for(int i=0;i<pow(2,n);i++){

            vector<int>ls;

            for(int j=0;j<32;j++){
                if(i & (1<<j)){
                    ls.push_back(nums[j]);
                }
            }
            arr.push_back(ls);

        }
        return arr;
    }
};