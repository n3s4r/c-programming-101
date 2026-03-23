# Solution: Linked List Cycle Detection

## 🧠 Logic: Floyd’s Cycle-Finding Algorithm
The algorithm uses two pointers:
1. **Slow Pointer:** Moves 1 node at a time.
2. **Fast Pointer:** Moves 2 nodes at a time.

If the `fast` pointer reaches the end (`NULL`), the list is linear. If the `fast` pointer catches up to the `slow` pointer (they become equal), a cycle is confirmed.

## ⏱️ Complexity
- **Time Complexity:** $O(n)$ — In the worst case, we visit each node at most twice.
- **Space Complexity:** $O(1)$ — We only use two pointer variables regardless of the list size.

## ⚠️ Warning
Always remember to free your dynamically allocated memory in real-world applications to prevent memory leaks!
