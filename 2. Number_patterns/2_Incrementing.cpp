#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of Incrementing: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}
// OUTPUT--

/*
Enter size of Incrementing: 5
12345
12345
12345
12345
12345
*/