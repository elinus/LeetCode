struct Solution;

impl Solution {
    pub fn get_concatenation(nums: Vec<i32>) -> Vec<i32> {
        let n = nums.len();
        let mut result: Vec<i32> = vec![0; n * 2];
        for index in 0..n {
            result[index] = nums[index];
            result[index + n] = nums[index];
        }
        result
    }
}

fn main() {
    let _sol = Solution;
}
