struct Solution;

impl Solution {
    pub fn is_anagram(s: String, t: String) -> bool {
        if s.char().len() != t.char().len() {
            return false;
        }
        let mut vec: [0;26] = [];
        for elem in s {
            vec[elem - 'a'] += 1;
        }

        for elem in t {
            vec[elem - 'a'] -= 1;
        }

        for elem in vec {
            if elem != 0 {
                return false;
            }
        }

        true
    }
}
