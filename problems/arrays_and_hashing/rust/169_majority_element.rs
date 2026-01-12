// Time Complexity: O(n) - single pass through the array
// Space Complexity: O(1) - only uses two variables

impl Solution {
    pub fn majority_element(nums: Vec<i32>) -> i32 {
        let mut candidate = 0;
        let mut count = 0;

        for num in nums {
            if count == 0 {
                candidate = num;
            }
            count += if num == candidate { 1 } else { -1 };
        }

        candidate
    }
}
