#include <iostream>

using namespace std;

int main() {
    int x, p, y, ans;
    cin >> x >> p >> y;
    while (x<=y) {
        x = x + x * p / 100;
        ans++;
    }
    cout << ans << endl;
    return 0;
}
