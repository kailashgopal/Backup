
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
  string s;
  cin >> s;
  vi n1;
  n1.push_back(0);
  rep(i, 0, s.size()){
    n1.push_back(s[i]-'0');
  }
  int flag = 1;
  while(flag){
    flag = 0;
    rep(i, 1, n1.size()){
      if (n1[i] >= 5){
        n1[i-1]++;
        rep(j, i, n1.size()){
          n1[j] = 0;
        }
        flag = 1;
        break;
      }
    }
  }
  rep(i, 0, n1.size()){
    if (i  == 0 && n1[i] == 0){continue;}
    cout << n1[i];
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
