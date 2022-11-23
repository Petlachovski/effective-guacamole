#include <iostream>

using namespace std;

int main() {
    int N, ans;
    cin >> N;
    while(N>0) {
        if (N%10 == 0) {
            ans++;
        }
        N = N/10;
    }
    cout << ans << endl;
    return 0;
}
