// ### Linear Search (brief theory)

// **Linear search** is the simplest searching technique.
// You check each element one by one from the beginning until the target is found or the list ends.

// ### How it works

// 1. Start from index `0`
// 2. Compare current element with the target
// 3. If equal, return the index
// 4. If not, move to the next element
// 5. If all elements are checked and none match, return `-1`

// ### Key properties

// * Works on **unsorted** data
// * Very easy to implement
// * No preprocessing required

// ### Time complexity

// * Best case: **O(1)** (target at first position)
// * Worst case: **O(n)** (target at last position or not present)
// * Average case: **O(n)**

// ### Space complexity

// * **O(1)** (no extra space)

// ### When to use

// * Small datasets
// * Unsorted arrays
// * When simplicity matters more than speed

// Linear search is usually the first searching algorithm learned and helps build understanding before moving to binary search.


#include <vector>
using namespace std;

class Solution {
public:
    int linearSearch(const vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                return i;  // rseturn the index where the target is found
            }
        }
        return -1;  // we return -1 if the target is not found in the vector
    }
};

