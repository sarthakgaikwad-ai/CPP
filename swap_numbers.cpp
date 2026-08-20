#include <iostream>
using namespace std;

int main() {
    int a = 2, b = 3;

    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    int temp;
    temp = a;
    a = b;
    b = temp;

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}

//output
// Before swapping: a = 2, b = 3
// After swapping: a = 3, b = 2
// sarthak@192 CPP % 
