# Arrays and Hashing

## 1: [Two Sum](https://leetcode.com/problems/two-sum/)

-   **Difficulty**: 🟩 **Easy**
-   **Problem Statement**: Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
    You may assume that each input would have exactly one solution, and you may not use the same element twice.
    You can return the answer in any order.
-   **Solutions**:
    -   [C++](cpp/1_two_sum.cpp)
    -   [Rust](rust/1_two_sum.rs)

### Time and Space Complexity:

-   **Time**: O(n), For n elements in vector. HashTable insertion/lookup generally in O(1)
-   **Space**: O(n)

### Explanation:

Maintain Hash/Lookup table for values and check for complement value in HashTable.

### Test Cases:

1. Input: `nums = [2,7,11,15], target = 9`, Output: `[1,2]`
2. Input: `nums = [3,2,4], target = 6`, Output: `[[1,5]]`
3. Input: `nums = [3,3], target = 6`, Output: `[0,1]`

---

## 41: [First Missing Positive](https://leetcode.com/problems/first-missing-positive/)

-   **Difficulty**: 🟥 **Hard**
-   **Problem Statement**: NA

---

## 49: [Group Anagrams](https://leetcode.com/problems/group-anagrams/)

-   **Difficulty**: 🟧 **Medium**
-   **Problem Statement**: Given two strings s and t, return true if t is an anagram of s, and false otherwise.
-   **Solutions**:
    -   [C++](cpp/49_group_anagrams.cpp)

### Time and Space Complexity:

-   **Time Complexity**: O(n \* l), n = length of strs, l = max length of string in strs
-   **Space Complexity**: O(n \* l)

### Explanation:

Count chars, for each string use total char counts (naturally sorted) as key

---

## 217: [Contains Duplicate](https://leetcode.com/problems/contains-duplicate/)

-   **Difficulty**: 🟩 **Easy**
-   **Problem Statement**: Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
-   **Solutions**:
    -   [C++](cpp/217_contains_duplicate.cpp)
    -   [Rust](rust/217_contains_duplicate.rs)

### Time and Space Complexity:

-   **Time Complexity**: O(n)
-   **Space Complexity**: O(n)

### Explanation:

Simple HashMap lookup for value.

---

## 242: [Valid Anagram](https://leetcode.com/problems/valid-anagram/)

-   **Difficulty**: 🟩 **Easy**
-   **Problem Statement**: Given two strings s and t, return true if t is an anagram of s, and false otherwise.
-   **Solutions**:
    -   [C++](cpp/242_valid_anagram.cpp)
    -   [Rust](rust/242_valid_anagram.rs)

### Time and Space Complexity:

-   **Time Complexity**: O(n)
-   **Space Complexity**: O(n)

### Explanation:

If strings have the same number of each character, then all hashmap values must equal 0

---
