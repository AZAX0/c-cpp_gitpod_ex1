#include <iostream>

using namespace std;

int main() {
    float x, y, ansP, ansM, ansX, last;

    printf(" two numbers: ") ;
    cin >> x >> y;

    ansP = x + y;
    ansM = x - y;
    ansX = x * y;
    last = x / y;

    cout << "The ansP of " << x << " and " << y << " is " << ansP << endl;
    cout << "The ansM of " << x << " and " << y << " is " << ansM << endl;
    cout << "The ansX of " << x << " and " << y << " is " << ansX << endl;
    cout << "The last of " << x << " and " << y << " is " << last << endl;

    return 0;
}
