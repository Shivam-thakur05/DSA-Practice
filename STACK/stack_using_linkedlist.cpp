#include <iostream>

// Define a node structure
struct Node {
    int data;
    Node* next;
    
    Node(int value) : data(value), next(nullptr) {}
};

// Define a Stack class
class Stack {
private:
    Node* top; // Pointer to the top node of the stack

public:
    Stack() : top(nullptr) {}

    // Function to push an element onto the stack
    void push(int value) {
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
        std::cout << value << " pushed into stack\n";
    }

    // Function to pop an element from the stack
    void pop() {
        if (isEmpty()) {
            std::cout << "Stack underflow! Cannot pop element.\n";
            return;
        }
        Node* temp = top;
        top = top->next;
        std::cout << temp->data << " popped from stack\n";
        delete temp;
    }

    // Function to get the top element of the stack
    int peek() {
        if (isEmpty()) {
            std::cout << "Stack is empty! No top element.\n";
            return -1; // Return a default value or use an exception for a better approach
        }
        return top->data;
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return top == nullptr;
    }

    // Destructor to free memory when the stack is no longer needed
    ~Stack() {
        while (!isEmpty()) {
            pop();
        }
    }
};

int main() {
    Stack myStack;

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    std::cout << "Top element: " << myStack.peek() << std::endl;

    myStack.pop();
    std::cout << "After popping, top element: " << myStack.peek() << std::endl;

    std::cout << "Is the stack empty? " << (myStack.isEmpty() ? "Yes" : "No") << std::endl;

    return 0;
}
