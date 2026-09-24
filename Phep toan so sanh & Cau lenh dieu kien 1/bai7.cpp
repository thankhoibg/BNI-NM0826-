#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;

    int s = a*a;

    if (s > 100) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}
