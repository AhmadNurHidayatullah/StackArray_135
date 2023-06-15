#include <iostream>
#include <string>
using namespace std;

class stackArray {
private:
    string stack_array[5];
    int top;
public:
    //constructor
    stackArray() {
        top = -1;
    }

    string push(string element) {
        if (top == 4) {//step 1
            cout << "number of data exceeds the limit." << endl;
            return;
        }

        top++; //step 2
        stack_array[top] = element; //step 3
        cout << endl;
        cout << element << "ditambahkan(pushed)" << endl;

        return element;
    }

    void pop() {
        if (empty()) { //step 1
            cout << "\n stack is empty. cannot pop." << endl; //1.a
            return; //1.b
        }

        cout << "\n the popped element is: " << stack_array[top] << endl;
        top--; //step decrement
    }

    //method for check if data is empty
    bool empty() {
        return (top == -1);

    }

    void display() {
        if (empty()) {
            cout << "\nstack is empty." << endl;

        }
        else {
            for (int tmp = 0; tmp <= top; tmp++) {
                cout << stack_array[tmp] << endl;
            }
        }
    }
};

int main()
{
    stackArray s;
}


