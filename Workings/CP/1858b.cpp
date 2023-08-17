
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
  int n, m, d; cin >> n >> m >> d;
  int n_points = 0;
  int k = 0;
  vi s = {};
  vi change(m);
  s.push_back(1);
  rep(i, 0, m){
    int a;
    cin >> a;
    if (a == 1){k--;}
    s.push_back(a);
    k += (s[i+1] - s[i]-1)/d;
  }
  s.push_back(n);
  k += (n - s[m]-1)/d; 
  
  rep(i, 1, m+1){
        change[i] = (s[i+1] - s[i-1]-1)/d  + (s[i] - s[i-1] - 1)/d + (s[i+1] - s[i] - 1)/d  - 1;
    }
  int min = 3;
  rep(i, 0, m){
      if (min < change[i]){min = change[i];}
    cout << change[i] << '|';
    }
  rep(i, 0, m){
      if (change[i] == min){
        n_points++;
      }
  }
  cout << k+min << ' ' << n_points << '\n';
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
