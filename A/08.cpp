#include <iostream>
#include <vector>

#define rep(i, N) for(int i = 0; i < N; i++)
#define range(i, s, f) for(int i = s; i < f; i++)

using namespace std;
using ll = long long;

int main() {

    ll H, W;
    cin >> H >> W;
    vector<vector<ll>> X(H, vector<ll>(W));
    rep(i, H) {
        rep(j, W) {
            cin >> X[i][j];
        }
    }

    ll Q;
    cin >> Q;
    ll A[Q], B[Q], C[Q], D[Q];

    rep(i, Q) {
        cin >> A[i];
        cin >> B[i];
        cin >> C[i];
        cin >> D[i];
    }

    vector<vector<ll>> M(H + 1, vector<ll>(W + 1, 0));
    
    rep(i, H) {
        ll cnt = 0;
        rep(j, W) {
            cnt += X[i][j];
            M[i + 1][j + 1] = cnt + M[i][j + 1];
        }
    }

    rep(i, Q) {
        ll a, b, c, d;
        a = A[i];
        b = B[i];
        c = C[i];
        d = D[i];

        cout << M[c][d] - M[a - 1][d] - M[c][b - 1] + M[a - 1][b - 1] << endl;
    }

    return 0;
}
