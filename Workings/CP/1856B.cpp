// Kailash
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
    int n; cin >> n;
    int m[n];
    int p[n];
    rep(i, 0, n){cin >> m[i];p[i] = m[i];}
    if (n == 1){cout << "NO\n"; return;}
    int s = 0;
    rep(i, 0, n){
        if (m[i] > 1){
            s += m[i] - 1;
            m[i] = 1;
        }
    }
    rep(i, 0, n){
        if (m[i] == p[i]){
            if (s == 0){
                cout << "NO\n";
                return;
            }
            else{s--;}
        }
    }
    cout<< "YES\n";
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