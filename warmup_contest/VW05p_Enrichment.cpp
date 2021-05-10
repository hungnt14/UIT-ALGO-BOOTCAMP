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

int n, m;

void solve() {
    cin >> n >> m;
    vector<vector<long long>> a;
    a.resize(n + 5);
    for (int i = 1; i <= n; i++) {
        a[i].resize(m + 5);
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    }
    long long ans = oo;
    for (int i = 1; i <= n - 2; i++) {
        for (int j = 1; j <= m - 2; j++) {
            long long cur = 0;
            for (int u = i; u <= i + 2; u++) {
                for (int v = j; v <= j + 2; v++)
                    cur += a[u][v];
            }
            ans = min(ans, cur);
        }
    }
    cout << ans;
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