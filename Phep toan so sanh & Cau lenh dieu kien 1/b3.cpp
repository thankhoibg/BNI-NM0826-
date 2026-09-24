#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 100) {
        cout << "YES";
    }

    if (n > 100) {
        cout << "NO";
    }

    return 0;
}
