#include <iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n > 0) {
        cout << "DUONG";
    }
    else {
        if (n < 0) {
            cout << "AM";
        }
        else {
            cout << 0;
        }
    }

    return 0;
}
