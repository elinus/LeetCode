use std::collections::HashSet;

impl Solution {
    pub fn contains_duplicate(nums: Vec<i32>) -> bool {
        let mut hset = HashSet::new();
        for &n in nums.iter() {
            if hset.contains(&n) {
                return true;
            }
            hset.insert(n);
        }
        false
    }
}
