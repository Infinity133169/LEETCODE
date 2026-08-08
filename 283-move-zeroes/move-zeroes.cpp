class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int n = arr.size();
        int i, j = -1;

        // Find the first zero
        for (i = 0; i < n; i++) {
            if (arr[i] == 0) {
                j = i;
                break;
            }
        }

        // If no zero exists
        if (j == -1)
            return;

        // Move non-zero elements forward
        for (i = j + 1; i < n; i++) {
            if (arr[i] != 0) {
                swap(arr[i], arr[j]);
                j++;
            }
        }
    }
};