/ Time Complexity: O(n) - single pass through the array
// Space Complexity: O(1) - only uses two pointers, no extra space

impl Solution {
    pub fn move_zeroes(nums: &mut Vec<i32>) {
        let mut left = 0;
        
        for right in 0..nums.len() {
            if nums[right] != 0 {
                nums.swap(left, right);
                left += 1;
            }
        }
    }
}