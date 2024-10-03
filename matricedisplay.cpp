#include <iostream>
using namespace std;

int main() {
    int c1, r1;
    cout << "Enter the number of rows for the matrix: ";
    cin >> r1;
    cout << "Enter the number of columns for the matrix: ";
    cin >> c1;

    int m[r1][c1];
    int i, j;

    cout << "Enter the elements of the matrix:" << endl;
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            cin >> m[i][j];
        }
    }

    cout << "The matrix you entered:" << endl;
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
//output
/*Enter the number of rows for the matrix: 2
Enter the number of columns for the matrix: 2
Enter the elements of the matrix:
2
3
4
5
The matrix you entered:
2 3
4 5*/