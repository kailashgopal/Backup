
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
  int a[n]; int max = 0; int maxn = 0;
  rep(i, 0, n){
    cin >> a[i];
    if (a[i] > max){max = a[i]; maxn = 1;}
    else{
      if (a[i] == max){maxn ++;}
    }
  }
  if (maxn == n){cout << -1 << '\n'; return;}
  else{
    cout  << n - maxn << ' ' << maxn << '\n';
    rep(i, 0, n){
      if (a[i] == max){continue;}
      else{cout << a[i] << ' ';}
    }
    cout << '\n';
    rep(i, 0, maxn){
      cout <<  max << ' '; 
    }
    cout << '\n';
  }

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
