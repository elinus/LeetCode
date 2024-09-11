use std::collections::HashMap;

struct Solution;

impl Solution {
    pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
        let mut num_map = HashMap::new();

        for (index, &num) in nums.iter().enumerate() {
            let complement = target - num;

            if let Some(&prev_index) = num_map.get(&complement) {
                return vec![prev_index as i32, index as i32];
            }

            num_map.insert(num, index);
        }

        vec![]
    }
}
