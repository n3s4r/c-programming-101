#include <stdio.h>
#include <stdlib.h>

// Definition for singly-linked list node
struct Node {
    int data;
    struct Node* next;
};

// Function to detect cycle using Floyd's Algorithm
int hasCycle(struct Node* head) {
    if (head == NULL || head->next == NULL) {
        return 0;
    }

    struct Node *slow = head;
    struct Node *fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;          // Move one step
        fast = fast->next->next;    // Move two steps

        // If they meet, there is a cycle
        if (slow == fast) {
            return 1;
        }
    }

    // If fast reaches the end, there is no cycle
    return 0;
}

// Helper function to create a new node
struct Node* newNode(int data) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

int main() {
    // Creating a linked list: 1 -> 2 -> 3 -> 4
    struct Node* head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);

    // Creating a cycle for testing: 4 -> 2
    head->next->next->next->next = head->next;

    if (hasCycle(head)) {
        printf("Cycle detected in the linked list!\n");
    } else {
        printf("No cycle detected.\n");
    }

    return 0;
}
