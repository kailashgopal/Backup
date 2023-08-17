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
    int n, m, k, h; cin >> n >> m >> k >> h;
    vi b;
    rep(i, 0, n){
        int a;
        cin >> a;
        b.push_back(a);
        }
    int ct = 0;
    rep(i, 0, n){
        if ((h != b[i])&&(abs(h- b[i])%k == 0)&&(abs(h-b[i])/k  < m)){
            ct++;
        }
    }
    cout <<  ct << '\n';
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
