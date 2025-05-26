#include <iostream>
using namespace std;

int main() {
    string response;

    cout << "Print a Countdown? (YES/NO): ";
    cin >> response;

    if (response == "YES") {
        for (int a = 10; a >= 0; a--) {
            cout << a << endl;
        }
        cout << "Happy New Year Eberywan!" << endl;
    } else {
        cout << "nye :(( " << endl;
    }

    return 0;
}
