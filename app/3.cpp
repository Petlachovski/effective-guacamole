#include <iostream>

using namespace std;

int main() {
    int a, b, c, d, e;
    int ans;
    cin >> a >> b >> c >> d >> e;
    for(int i; i < 1001; i++) {
        int t = i;

        if (a*t*t*t + b*t*t + c*t + d == 0 && t != e) {
                ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
