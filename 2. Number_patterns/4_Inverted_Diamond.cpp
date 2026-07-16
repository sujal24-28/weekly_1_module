#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    int start;
    cout << "Enter starting number: ";
    cin >> start;
    for (int i = 0; i < rows; i++) {
        for (int space = 0; space < i; space++) {
            cout << " ";
        }
        int num = start + i;
        int count = rows - i;
        for (int j = 0; j < count; j++) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
// OUTPUT--

/*
Enter number of rows: 5
Enter starting number: 3
3 3 3 3 3 
 4 4 4 4 
  5 5 5 
   6 6 
    7 
*/