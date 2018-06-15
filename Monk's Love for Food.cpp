#include <iostream>
using namespace std;

long top = -1; // Globally defining the value of top as the stack is empty

void push(long stack[], long x, long n) {
    if (top == n - 1) { // If the top position is the last of position of the stack, this means that the stack is full.
        cout << "Full";
    } else {
        top = top + 1;  // Incrementing the top position
        stack[top] = x; // Inserting an element on incremented position
    }
}

bool isEmpty() {
    return top == -1;
}

void pop(long stack[]) {

    if (isEmpty()) {
        cout << "No Food" << endl;
    } else {
        cout << stack[top] << endl;
        top = top - 1;  // Decrementing top’s position will detach last element from stack
    }
}

int main() {
    long q, i, t, c;
    cin >> q;
    long stack[q];
    for (i = 1; i <= q; i++) {
        cin >> t;
        if (t == 2) {
            cin >> c;
            push(stack, c, q);
        } else {
            pop(stack);
        }
    }
    return 0;
}
