#include <iostream>

using namespace std;

int main() {
    int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
    if(abs(x1-x2) == 2 && abs(y1-y2) == 1 || abs(x1-x2) == 1 && abs(y1-y2) == 2) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    return 0;
}
