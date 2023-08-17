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
    int a[n];
    rep(i, 0, n){
        cin >> a[i];
    }
    int b[n] = {0};
    rep(i, 0, n){
        b[i] = a[i];
    }
    sort(b, b+n);
    int flag = 0;
    rep(i, 0, n){
        if (abs(b[i]- a[i])%2 != 0){flag = 1; break;}
    }
    if (flag == 0){cout << "YES\n";}
    else{cout << "NO\n";}
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
