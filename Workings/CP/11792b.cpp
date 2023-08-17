
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
  int a[256] = {0};
  int b[n];
  int result = 0;
  rep(i, 0, n){
    int x; cin >> x;
    result = result ^ x; 
    b[i] = result;
    a[result] = 1;
  }
  int max = 0;
  rep(i, 0, 256){
    if (a[i] == 1){
      if (max < i){
        max = i;
        //cout << i << ' ' << '|';
      }
    
      rep(j, 0, n){
        int a = b[j] ^ i;
        if (a > max){max = a;} //cout << i << ' ' << j << '|';}
      }
    }
  }
  cout << max << '\n';
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
