#include <iostream>
#include <vector>

#define rep(i, N) for(int i = 0; i < N; i++)
#define range(i, s, f) for(int i = s; i < f; i++)

using namespace std;
using ll = long long;

int main() {

    ll D;
    cin >> D;

    ll N;
    cin >> N;

    vector<vector<ll>> querys(N, vector<ll>(2));
    rep(i, N) {
        cin >> querys[i][0] >> querys[i][1];
    }

    ll attend[D + 2] = {0};

    for(auto query : querys) {
        ll l, r;
        l = query[0];
        r = query[1];

        attend[l] += 1;
        attend[r + 1] -= 1;
    }

    ll cnt = 0;

    range(i, 1, D + 1) {
        cnt += attend[i];
        cout << cnt << endl;
    }

    return 0;
}
