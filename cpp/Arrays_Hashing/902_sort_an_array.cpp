#include "stdc++.h"

using namespace std;

class Solution {
    int partition(vector<int>& nums, int low, int high) {
        int pivot = nums[low];
        int count = 0;
        for (int i = low + 1; i <= high; i++) {
            if (nums[i] <= pivot) count++;
        }
        int pi = low + count;
        swap(nums[pi], nums[low]);
        int i = low, j = high;
        while (i < pi && j > pi) {
            while (nums[i] <= pi) {
                i++;
            }
            while (nums[j] > pi) {
                j--;
            }
            if (i < pi && j > pi) {
                swap(nums[i++], nums[j--]);
            }
        }

        return pi;
    }
    void quicksort(vector<int>& nums, int low, int high) {
        if (low >= high) return;
        int pi = partition(nums, low, high);
        quicksort(nums, low, pi - 1);
        quicksort(nums, pi + 1, high);
    }

   public:
    vector<int> sortArray(vector<int>& nums) {
        quicksort(nums, 0, nums.size() - 1);
        return nums;
    }
};