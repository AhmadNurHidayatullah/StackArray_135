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
        cout << element << "ditambahkan(pushed)." << endl;

        return element;
    }
};
int main()
{
    std::cout << "Hello World!\n";
}


