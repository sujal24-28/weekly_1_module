#include <iostream>
using namespace std;

int main() {
    int start;
    cout << "Enter starting number: ";
    cin >> start;

    int rows = (2 * start) - 1;
    int mid = rows / 2;

    for (int i = 0; i < rows; i++) {
        int num, count;

        if (i <= mid) {
            num = start + i;
            count = i + 1;
        } else {
            num = start + (rows - i - 1);
            count = rows - i;
        }
        for (int j = 0; j < count; j++) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}

