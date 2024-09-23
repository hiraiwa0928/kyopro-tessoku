#include <iostream>
#include <math.h>

#define rep(i, N) for(int i = 0; i < N; i++)

using namespace std;

int main() {

    int N;
    cin >> N;

    string ans = "";

    while (N > 0) {
        ans = to_string(N % 2) + ans;
        N /= 2;
    }

    rep(i, 10 - ans.length()) {
        cout << "0";
    }

    cout << ans << endl;

    return 0;
}
