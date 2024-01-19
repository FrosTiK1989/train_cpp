#include <iostream>

using namespace std;

int main() {
    int number = {};
    cout << "Insert number in range 1 to 100: ";
    cin >> number;
    if(number >= 1 && number <= 100) {
        if(number != 50) {
            if(number > 50) cout << "You number bigger 50!" << endl;
            else cout << "You number smallest 50!" << endl;
        }
        else cout << "You number equal 50!" << endl;
    }
    else cout << "You number out of range! Suck my dick, Dude!" << endl;
}