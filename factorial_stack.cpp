#include <iostream>
using namespace std;

class Stack
{
private:
    int items[100];
    int top;

public:

    // Constructor
    Stack()
    {
        top = -1;
    }

    // Check whether stack is empty
    bool isEmpty()
    {
        return top == -1;
    }

    // Check whether stack is full
    bool isFull()
    {
        return top == 99;
    }

    // Add an element
    void push(int value)
    {
        if (isFull())
        {
            cout << "Stack overflow!" << endl;
            return;
        }

        top++;
        items[top] = value;
    }

    // Remove an element
    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack underflow!" << endl;
            return -1;
        }

        int value = items[top];
        top--;

        return value;
    }

    // View the top element
    int peek()
    {
        if (isEmpty())
        {
            return -1;
        }

        return items[top];
    }
};


// ----------------------------------------
// FORWARD STACK FACTORIAL
// ----------------------------------------

unsigned long long forwardFactorial(int n)
{
    Stack s;

    unsigned long long factorial = 1;

    // Push numbers from 1 to n
    for (int i = 1; i <= n; i++)
    {
        s.push(i);
    }

    cout << "\nForward Stack:\n";

    // Pop numbers and multiply
    while (!s.isEmpty())
    {
        int value = s.pop();

        factorial = factorial * value;

        cout << "Multiply by " << value
             << " = " << factorial << endl;
    }

    return factorial;
}


// ----------------------------------------
// BACKWARD STACK FACTORIAL
// ----------------------------------------

unsigned long long backwardFactorial(int n)
{
    Stack s;

    unsigned long long factorial = 1;

    // Push numbers from n down to 1
    for (int i = n; i >= 1; i--)
    {
        s.push(i);
    }

    cout << "\nBackward Stack:\n";

    // Pop numbers and multiply
    while (!s.isEmpty())
    {
        int value = s.pop();

        factorial = factorial * value;

        cout << "Multiply by " << value
             << " = " << factorial << endl;
    }

    return factorial;
}


// ----------------------------------------
// MAIN PROGRAM
// ----------------------------------------

int main()
{
    int n;

    cout << "=====================================\n";
    cout << "       FACTORIAL USING STACKS\n";
    cout << "=====================================\n";

    cout << "Enter a non-negative integer: ";
    cin >> n;

    // Validate input
    if (cin.fail() || n < 0)
    {
        cout << "\nInvalid input!" << endl;
        cout << "Please enter a non-negative integer." << endl;

        return 0;
    }

    // Special case
    if (n == 0)
    {
        cout << "\n0! = 1" << endl;
        return 0;
    }

    // Calculate using forward stack
    unsigned long long forwardResult =
        forwardFactorial(n);

    cout << "\nForward Result: "
         << n << "! = "
         << forwardResult << endl;


    // Calculate using backward stack
    unsigned long long backwardResult =
        backwardFactorial(n);

    cout << "\nBackward Result: "
         << n << "! = "
         << backwardResult << endl;


    // Compare results
    cout << "\n=====================================\n";

    if (forwardResult == backwardResult)
    {
        cout << "Both methods produced the same result."
             << endl;
    }
    else
    {
        cout << "The results are different."
             << endl;
    }

    cout << "=====================================\n";

    return 0;
}