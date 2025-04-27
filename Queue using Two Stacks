#include <iostream>
#include <stack>
using namespace std;

class QueueUsingTwoStacks {
private:
    stack<int> stack_in, stack_out;

    void shiftStacks() {
        if (stack_out.empty()) {
            while (!stack_in.empty()) {
                stack_out.push(stack_in.top());
                stack_in.pop();
            }
        }
    }

public:
    void enqueue(int x) {
        stack_in.push(x);
    }

    void dequeue() {
        shiftStacks();
        if (!stack_out.empty()) {
            stack_out.pop();
        }
    }

    void peek() {
        shiftStacks();
        if (!stack_out.empty()) {
            cout << stack_out.top() << endl;
        }
    }
};

int main() {
    int q;
    cin >> q;
    QueueUsingTwoStacks queue;
    while (q--) {
        int type;
        cin >> type;
        if (type == 1) {
            int x;
            cin >> x;
            queue.enqueue(x);
        } else if (type == 2) {
            queue.dequeue();
        } else if (type == 3) {
            queue.peek();
        }
    }
    return 0;
}
