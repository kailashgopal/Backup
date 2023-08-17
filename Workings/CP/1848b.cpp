
// Kailash
#include <algorithm>
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
  int a[n];
  rep(i, 0, n){
    cin >> a[i];
  }
  int b[k][3];
  rep(i, 0, k){
    b[i][0] = 0;
    b[i][1] = 0;
    b[i][2] = -1;
  }
  rep(i, 0, n){
    int n_tiles = i - b[a[i]-1][2];
    b[a[i]-1][2] = i;
    if (n_tiles > b[a[i]-1][1]){
      if (n_tiles > b[a[i]-1][0]){
        b[a[i]-1][1] = b[a[i]-1][0];
        b[a[i]-1][0] = n_tiles;
      }
      else{b[a[i]-1][1] = n_tiles;}
      
    }
    //cout << b[0][2] << b[1][2] << "{}";
    
  }
  rep(i, 0, k){
    //cout << b[i][2];
    int n_tiles = n-b[i][2];
     if (n_tiles > b[i][1]){
      if (n_tiles > b[i][0]){
        b[i][1] = b[i][0];
        b[i][0] = n_tiles;
      }
      else{b[i][1] = n_tiles;}
    }
  }
  int min1 = 1e9;
  rep(i, 0, k){
    if (b[i][0] == -1){continue;}
    if (min1 > max({(b[i][0]+1)/2,b[i][1]})){
      min1 = max({(b[i][0]+1)/2,b[i][1]});   
    } 
    //cout << b[i][0] << '|' << b[i][1] << "| ";
  }
  cout << min1-1 << '\n';
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
