#include <iostream>
#include <math.h>

#define rep(i, S, F) for(int i = S; i < F; i++)

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    int ans = 0;

    rep(i, 1, N + 1) {
        int nokori = K - i - 2;
        if (nokori < 0 || nokori > (N - 1) * 2) continue;
        ans += N - max(0, (nokori - (N - 1))) - max(0, N - 1 - nokori);
    }

    cout << ans << endl;

    return 0;
}
