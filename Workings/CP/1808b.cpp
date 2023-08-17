// Kailash g
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define vi vector<int>
#define vii vector<vector<int>>
#define vb vector<bool>
#define pi pair<int, int>
#define si set<int>
#define rep(var, l, r) for (int var = l; var < r; var++)

void solve()
{
    int n, m; cin >> m >> n;
    int a[n][m];
    rep(i, 0, m){
        rep(j, 0, n){
            cin >> a[j][i];
        }
    }
    rep(i, 0, n){
        sort(a[i], a[i]+m, greater<int>());
    }
    int sum = 0;
    rep(i, 0, n){
        rep(j, 0, m){
            sum += a[i][j]*(m-2*j-1);
        }
    }
    cout << sum << '\n';
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();

    return 0;
}
