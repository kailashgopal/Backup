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
#define repr(var, l, r) for (int var = r; var > l; var--)
#define ip_to_vi(var, n) rep(i, 0, n){int a; cin >> a; var.push_back(a);}

void solve()
{
    int t; cin >> t;
    vi l; ip_to_vi(l, t);
    sort(l.begin(), l.end());
    int n_liars = 0; int atmost = t; int flag = 0;
    for (int i = t-1; i >= 0; i--){
        if (l[i] <= n_liars){break;}
        else{n_liars++; atmost = l[i]; if (atmost <= n_liars){flag = 1; break;}}
        }
    if ((n_liars == t)||(flag == 1)){cout << -1 << '\n';}
    else{cout << n_liars << '\n';}
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
