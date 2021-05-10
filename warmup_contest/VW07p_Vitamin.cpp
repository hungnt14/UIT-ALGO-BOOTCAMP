#include <bits/stdc++.h>
#define reset(x,d) memset(x,d,sizeof(x))
#define PROG "HOME"

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> ii;
typedef tuple<ll, ll, ll> ttt;

const bool MULTITESTS = 0;

const ll maxN = 111;
const ll oo = 1e18;
const ll MOD = 1e9 + 7;

int n, need, a[maxN], s[maxN], f[(int)1e6 + 15];

void solve() {
    cin >> n >> need;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        s[i] = s[i - 1] + a[i];
    }
    for (int i = 0; i <= need; i++) f[i] = (int)1e9;
    f[0] = -1;
    for (int c = 0; c <= need; c++) {
        for (int i = 1; i <= n; i++) {
            if (s[i] <= c) {
                f[c] = min(f[c], f[c - s[i]] + i + 1);
                if (i == n) {
                    int lf = c - s[n];
                    f[c] = min(f[c], f[c - (s[n] + (lf / a[n]) * a[n])] + n + (lf / a[n]) + 1);
                }
            }
        }
    }
    cout << (f[need] == (int)1e9 ? -1 : f[need]);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int TESTS_NUM = 1;
    if (MULTITESTS) cin >> TESTS_NUM;
    for (int TESTS_CNT = 1; TESTS_CNT <= TESTS_NUM; TESTS_CNT++)
        solve();
    return 0;
}