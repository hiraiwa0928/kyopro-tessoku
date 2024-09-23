#include <iostream>
#include <math.h>

#define rep(N) for(int i = 0; i < N; i++)

using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    int A[N];
    rep(N) {
        int a; 
        cin >> a;
        A[i] = a;
    }

    bool flag = false;

    rep(N) {
        if (A[i] == X) flag = true;
    }

    if (flag) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
