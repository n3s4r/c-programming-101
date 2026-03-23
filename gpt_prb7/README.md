# Problem: Linked List Cycle Detection

## 📝 Description
Given the head of a singly linked list, determine if the list has a cycle in it. A cycle exists if there is some node in the list that can be reached again by continuously following the `next` pointer.

## 💡 Example
- **Input:** `1 -> 2 -> 3 -> 4 -> 2 (back to 2)`
- **Output:** `1` (True)

- **Input:** `1 -> 2 -> 3 -> NULL`
- **Output:** `0` (False)

## ⚙️ Requirements
1. Implement the solution in **C**.
2. Use **Floyd's Cycle-Finding Algorithm**:
   - Use two pointers, `slow` and `fast`.
   - `slow` moves one step at a time.
   - `fast` moves two steps at a time.
   - If they ever meet, a cycle exists.
3. **Complexity:**
   - Time: $O(n)$
   - Space: $O(1)$

---
*Created for C Programming Practice*
