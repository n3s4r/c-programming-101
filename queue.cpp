#include <iostream>
#include <stack>

using namespace std;

const int MAX_SIZE = 100;

class Queue {
  private:
    int front; // Front index of the queue
    int rear; // Rear index of the queue
    int arr[MAX_SIZE]; // Array to store elements

  public:
    Queue() {
      front = -1; // Initialize front index to -1
      rear = -1; // Initialize rear index to -1
    }

    bool isFull() {
      return (rear == MAX_SIZE - 1); // Check if the queue is full
    }

    bool isEmpty() {
      return (front == -1 && rear == -1); // Check if the queue is empty
    }

    void enqueue(int x) {
      if (isFull()) {
        cout << "Error: Queue is full" << endl; // Display error message if queue is full
        return;
      }
      if (isEmpty()) {
        front = 0;
        rear = 0;
      } else {
        rear++;
      }
      arr[rear] = x; // Insert the element at the rear index
    }

    void dequeue() {
      if (isEmpty()) {
        cout << "Error: Queue is empty" << endl; // Display error message if queue is empty
        return;
      }
      if (front == rear) {
        front = -1;
        rear = -1;
      } else {
        front++;
      }
    }

    int peek() {
      if (isEmpty()) {
        cout << "Error: Queue is empty" << endl; // Display error message if queue is empty
        return -1;
      }
      return arr[front]; // Return the element at the front of the queue
    }

    void display() {
      if (isEmpty()) {
        cout << "Error: Queue is empty" << endl; // Display error message if queue is empty
        return;
      }
      cout << "Queue elements are: ";
      for (int i = front; i <= rear; i++) {
        cout << arr[i] << " "; // Display all elements in the queue
      }
      cout << endl;
    }

    // Function to calculate the average of all elements in the queue
    float avg_Queue(Queue & q) {
      if (q.isEmpty()) {
        cout << "Error: Queue is empty" << endl; // Display error message if queue is empty
        return 0.0;
      }
      int sum = 0;
      int count = 0;
      for (int i = q.front; i <= q.rear; i++) {
        sum += q.arr[i]; // Accumulate sum of elements
        count++;
      }
      float avg = static_cast < float > (sum) / count; // Calculate the average
      return avg;
    }
};

int main() {
  cout << "Initialize a Queue." << endl;
  Queue q;
  cout << "\nInsert some elements into the queue:" << endl;
  q.enqueue(1);
  q.enqueue(5);
  q.enqueue(3);
  q.enqueue(6);
  q.enqueue(2);
  q.enqueue(0);
  q.display();

  // Calculate the average of elements in the queue and display it
  float avg_val = q.avg_Queue(q);
  cout << "Average of all elements of the said queue: " << avg_val;

  cout << "\n\nInput two more elements into the queue:" << endl;
  q.enqueue(-1);
  q.enqueue(4);
  q.display();

  // Calculate the average of elements in the queue after adding new elements and display it
  avg_val = q.avg_Queue(q);
  cout << "Average of all elements of the said queue: " << avg_val;

  return 0;
}
