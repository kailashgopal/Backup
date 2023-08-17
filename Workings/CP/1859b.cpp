
// Kailash
#include <bits/stdc++.h>
#include <functional>
#include <map>
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
  vii a;
  rep(i, 0, n){
    int x; cin >> x;
    vi ai;
    rep(i, 0, x){
      int tmp;
      cin >> tmp;
      ai.push_back(tmp);
    }
    sort(ai.begin(), ai.end());
    a.push_back(ai);}
  vi t1; vi t2;
  rep(i, 0, n){
    t1.push_back(a[i][0]);
    t2.push_back(a[i][1]);
  }

  sort(t1.begin(), t1.end());
  sort(t2.begin(), t2.end());
  int s = t1[0];
  rep(i, 0, n-1){
    s += t2[n-1-i];
  }
  cout << s  << '\n';
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
