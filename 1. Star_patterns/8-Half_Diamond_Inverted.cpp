#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of Half Diamond Inverted: ";
    cin >> n;

    for (int i = n; i >= 1; i--) {
        for (int space = 0; space < n-i; space++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
// OUTPUT--

/*
Enter size of Half Diamond Inverted: 5
* * * * * 
 * * * * 
  * * * 
   * * 
    * 
*/
