
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
  int b[n];
  rep(i, 0, n){
    cin >> a[i];
  }
  rep(i, 0, n){
    cin >> b[i];
  }
  int c[n];
  int d[n];
  rep(i, 0, n){
    c[i] = a[i]-b[i];
    d[i] = c[i];
  }
  sort(c, c+n, greater<int>());
  int max = c[0];
  int ct = 0;
  rep(i, 0, n){
    if (c[i] == max){
      ct++;
    }
  }  
  cout << ct << '\n';
  rep(i, 0, n){
    if (d[i] == max){cout << i+1 << ' ';}
  }
  cout << '\n';
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
