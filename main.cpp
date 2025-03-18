#include <iomanip>
#include <iostream>

using namespace std;

int main() {

    for (int i = 1; i <= 5; i++) {
        cout << "+---+---+---+---+---+" << endl;
        for (int j = 1; j <= 5; j++) {
            cout << "|" << setw(3) << right << i * j;
        }
        cout << "|" << endl;
    }

    return 0;
}
