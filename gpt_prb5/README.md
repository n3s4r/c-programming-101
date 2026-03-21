# Problem: Find a Peak Element

## 📝 Description
Given an array of integers, find a **peak element**. An element is considered a peak if it is greater than or equal to its neighbors.

- For the **first element**, it only needs to be greater than or equal to the element to its right.
- For the **last element**, it only needs to be greater than or equal to the element to its left.
- If there are multiple peaks, returning any one of them is acceptable.

## 💡 Example
**Input:** `[1, 3, 20, 4, 1, 0]`  
**Output:** `20` (Index 2)

**Input:** `[5, 10, 20, 15]`  
**Output:** `20` (Index 2)

**Input:** `[10, 20, 15, 2, 23, 90, 67]`  
**Output:** `20` or `90`

## ⚙️ Requirements
1. Implement the solution in **C**.
2. Create a function `int findPeak(int arr[], int n)` that returns the index or value of the peak.
3. Handle edge cases such as:
   - An array with only one element.
   - An array where the peak is at the very beginning or the very end.

## 🚀 Optimization Challenge
- **Linear Search:** $O(n)$ time complexity.
- **Binary Search:** $O(\log n)$ time complexity. (Can you solve it using the Divide and Conquer approach?)

---
*Created for C Programming Practice*
