#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    cout << "Enter a even positive integer: ";
    cin >> n;
    while (0 > n || n % 2 == 1) {
        cout << "Enter a valid odd positive integer: ";
        cin >> n;
    }

    for (int r = 1; r <= n; r++) {
        for (int c1 = 1; c1 <= n; c1++) {
            if (c1 == 1 || c1 == n  ||r==n ) {
                cout << "*";
            }
            else
                cout << " ";





        }



        cout << endl;
    }
    return 0;
}