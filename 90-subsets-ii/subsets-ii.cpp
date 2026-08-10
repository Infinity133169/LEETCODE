class Solution {

    void subset(int ind, vector<vector<int>>& ans,
                vector<int>& ds, vector<int>& arr) {

        // Store current subset
        ans.push_back(ds);

        for (int i = ind; i < arr.size(); i++) {

            // Skip duplicate elements at the same level
            if (i != ind && arr[i - 1] == arr[i])
                continue;

            ds.push_back(arr[i]);

            subset(i + 1, ans, ds, arr);

            ds.pop_back();
        }
    }

public:

    vector<vector<int>> subsetsWithDup(vector<int>& arr) {

        vector<vector<int>> ans;
        vector<int> ds;

        sort(arr.begin(), arr.end());

        subset(0, ans, ds, arr);

        return ans;
    }
};