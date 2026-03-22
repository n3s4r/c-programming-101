# Solution: Reverse Words in a String

## 🧠 Logic
The "In-Place" constraint means we cannot allocate a new string. The algorithm follows a two-step reversal process:
1. **Word Reversal:** Iterate through the string and reverse every word individually.
2. **Full Reversal:** Reverse the entire string from start to finish.

## 💻 Implementation
The solution uses a helper function `reverse(char *begin, char *end)` that swaps characters using pointers until they meet in the middle.

## ⏱️ Complexity
- **Time Complexity:** $O(n)$ where $n$ is the length of the string.
- **Space Complexity:** $O(1)$ as no extra buffers are used.
