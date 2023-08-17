
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
  int n, c; cin >> n >> c;
  int s[n];
  int sum = 0;
  rep(i, 0, n){
    cin >> s[i];
    sum += (s[i] * s[i]);
  }
  int low = 0;
  int high = sqrt((c - sum)/n);
  while (low <= high){
    int mid = (low + high)/2;
    sum = 0;
    rep(i, 0, n){
      sum += (s[i]+mid)*(s[i]+mid);
    }
    if (sum == c){
      cout << mid/2 << '\n';
      break;
    }
    else{
      if (sum < c){
        low = mid + 1;
      }
      else{
        high = mid - 1;
      }
    }
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
