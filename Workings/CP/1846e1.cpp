
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
  int k = 2;
  while (n >= 1 + k + k*k){
    int m = n - (1 + k + k*k);
    int ct = 3;
    while (m > 0){
      m -= pow(k, ct);
      ct++;
    }
    //cout << k << '|' << m;
    if (m == 0){cout << "YES\n"; return;}
    k++;
  }
  cout << "NO\n";
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
