#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of right triangle: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}
// OUTPUT--

/*
Enter size of right triangle: 5
1
12
123
1234
12345
*/