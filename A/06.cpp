#include <iostream>
#include <vector>

#define rep(i, N) for(int i = 0; i < N; i++)
#define range(i, s, f) for(int i = s; i < f; i++)

using namespace std;
using ll = long long;

int main() {
    ll N, Q;
    cin >> N >> Q;

    ll A[N];
    rep(i, N) cin >> A[i];

    vector<vector<ll>> querys(Q, vector<ll>(2));
    rep(i, Q) {
        rep(j, 2) {
            cin >> querys[i][j];
        }
    }

    ll s[N + 1];
    s[0] = 0;

    rep(i, N) {
        s[i + 1] = s[i] + A[i];
    }

    rep(i, Q) {
        ll l, r;
        l = querys[i][0], r = querys[i][1];

        cout << s[r] - s[l - 1] << endl;
    }

    return 0;
}
