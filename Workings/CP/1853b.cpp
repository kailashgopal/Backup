// Kailash1
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
    int n, k; cin >> n >> k;
    int n_pairs = 0;
    for(int i = n; i >= 0; i--){
      int ti = n;
      int tii = i;
      int ct = 2;
      while((ti - tii >= 0) && (ti - tii <= tii)){
        int temp = tii;
        tii = ti - tii;
        ti = temp;
        ct++;
        if (ct == k){
          n_pairs++;
          break;
        }
      }
   // cout << i << '|' << ct << '\n';
    }
  cout << n_pairs << '\n';
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
