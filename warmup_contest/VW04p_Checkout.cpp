#include <bits/stdc++.h>
#define reset(x,d) memset(x,d,sizeof(x))
#define PROG "HOME"

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> ii;
typedef tuple<ll, ll, ll> ttt;

const bool MULTITESTS = 0;

const ll maxN = 1e5+5;
const ll oo = 1e18;
const ll MOD = 1e9 + 7;

void solve() {
    ld d, a1, a2, v, t;
    cin >> d >> a1 >> a2 >> v >> t;
    ld a = -(1 / (2 * a1) + 1 / (2 * a2));
    ld de = t * t - 4 * a * d;
    ld x1 = (t + sqrt(de)) / (2 * a);
    ld x2 = (t - sqrt(de)) / (2 * a);

    v = min(v, max(x1, x2));
    ld res = v / (2 * a1) + v / (2 * a2) +  d / v;
    cout << setprecision(12) << fixed << res;
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
