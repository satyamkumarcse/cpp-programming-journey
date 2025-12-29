// Binary Search (brief and clear)

// Binary Search is used to find an element in a sorted array by repeatedly dividing the search space into half.

// How it works

// Take two pointers: left and right

// Find the middle index mid

// Compare target with arr[mid]

// If equal, return mid

// If target is smaller, search left half

// If target is larger, search right half

// Repeat until left > right

// Key requirements

// Array must be sorted

// Works only on random access data structures (like arrays, vectors)

// Time and space complexity

// Time: O(log n)

// Space: O(1) (iterative version)



class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int l=0;
        int u = nums.size()-1;
        int midval;

       

        while(l<=u){
            midval = l+(u-l)/2;
            if(nums[midval]==target){
                return midval ;
                

            }
            else if(target>nums[midval]){
                l = midval + 1;
            }
            else if(target<nums[midval]){

                u = midval-1;
            }
        }
        return l;     // if target element not found, where it can be inserted to maintain sorted order.


        
    }
};