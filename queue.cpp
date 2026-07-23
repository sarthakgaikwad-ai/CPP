#include <iostream>
using namespace std;

class Queue
{
private:
    int queue[5];
    int front;
    int rear;

public:
    // Constructor
    Queue()
    {
        front = -1;
        rear = -1;
    }

    // Enqueue
    void enqueue()
    {
        int value;

        if (rear == 4)
        {
            cout << "\nQueue Overflow";
            return;
        }

        cout << "\nEnter Element: ";
        cin >> value;

        // First element
        if (front == -1)
        {
            front = 0;
        }

        rear++;
        queue[rear] = value;

        cout << value << " inserted successfully.";
    }

    // Dequeue
    void dequeue()
    {
        // Check underflow
        if (front == -1 || front > rear)
        {
            cout << "\nQueue Underflow";
            return;
        }

        cout << "\nDeleted element = " << queue[front];
        front++;

        // Queue becomes empty
        if (front > rear)
        {
            front = -1;
            rear = -1;
        }
    }

    // Display
    void display()
    {
        if (front == -1)
        {
            cout << "\nQueue is empty";
            return;
        }

        cout << "\nQueue elements are:\n";

        for (int i = front; i <= rear; i++)
        {
            cout << queue[i] << " ";
        }

        cout << endl;
    }
};

// Main function
int main()
{
    Queue q;
    int choice;

    do
    {
        cout << "\n====================================";
        cout << "\n          QUEUE MENU";
        cout << "\n1. Enqueue";
        cout << "\n2. Dequeue";
        cout << "\n3. Display";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            q.enqueue();
            break;

        case 2:
            q.dequeue();
            break;

        case 3:
            q.display();
            break;

        case 4:
            cout << "\nProgram Ended";
            break;

        default:
            cout << "\nInvalid choice";
        }

    } while (choice != 4);

    return 0;
}