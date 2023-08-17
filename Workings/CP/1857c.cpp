
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
  int a[n*(n-1)/2];
  vi ans; int max = 0;
  rep(i, 0, (n*(n-1))/2){
    cin >> a[i];
     }
  sort(a, a+(n*(n-1))/2);
  int to_fill = n;
  for  (int i = 0; i < n*(n-1)/2; i++){
    int rpt = 0;
    int k = 0;
    while (i < (n*(n-1))/2-1 && a[i] == a[i+1]){
      i++;
      k ++;
    }
    k++;
    //cout << to_fill << 'n';
    rpt = ((2*(to_fill) - 1) - sqrt(pow(2*to_fill - 1, 2)-8*k))/2;
       //cout << rpt << '|';
    to_fill -= rpt;
    rep(j, 0, rpt){
    ans.push_back(a[i]);}
  }
  //rep(i, 0, n*(n-1)/2){
  //  cout << a[i] << ' ';
  //}
  //cout << '\n';
  int s = ans.size();
  rep(i, 0, n - s){
    ans.push_back(a[(n*(n-1))/2-1]);
  }
  rep(i, 0, n){
    cout << ans[i] << ' '; 
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
