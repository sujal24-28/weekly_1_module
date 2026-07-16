#include <iostream>
using namespace std;

int main() {
    int start;
    cout << "Enter starting number: ";
    cin >> start;

    int rows = (2 * start) - 1;
    int mid = rows / 2;

    for (int i = 0; i < rows; i++) {
        int spaces = (i <= mid) ? i : rows - i - 1;
        int num = start + spaces;
        int count = rows - 2*spaces;

        for (int s = 0; s < spaces; s++) cout << " ";
        for (int j = 0; j < count; j++) cout << num;

        cout << endl;
    }
    return 0;
}
// OUTPUT--

/*
Enter starting number: 3
33333
 444
  5
 444
33333
*/