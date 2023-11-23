#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
    int a = {8};
    int b = {++a};
    int c = {b++};
    cout << "a: " << a << "\t b: " << b << endl;
    cout << "c: " << c << "\t a + c: " << a + c << endl;
    return 0;
}