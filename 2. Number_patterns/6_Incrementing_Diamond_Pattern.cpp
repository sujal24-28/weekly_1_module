#include <iostream>
using namespace std;

int main() {
    int start,end;
    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    int up = start;

    for (int i = start; i <= end;i++){
        for (int j = start; j <= i;j++){
            cout << up; 
        }
        up=up+1;
        cout << endl;
    }

    int down = end-1;
    for (int i = start; i <= end-1;i++){
        for (int j = end - 1; j >= i;j--){
            cout << down;
        }
        down = down - 1;
        cout << endl;
    }
        return 0;
}
// OUTPUT--
/*
Enter starting number: 3
Enter ending number: 7
3
44
555
6666
77777
6666
555
44
3
*/
