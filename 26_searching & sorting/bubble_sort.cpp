// In bubble sort, j iterates across the unsorted portion of the array, and this process is repeated n - 1 times so that each pass places one element in its final position.

class Solution {
public:
    vector<int> sortArray(vector<int>& arr) {
        int n = arr.size();

        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }

        return arr;
    }
};
