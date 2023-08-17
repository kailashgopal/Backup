


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
  set<int> my_set;
  rep(i, 0, n){
    my_set.insert(i+1);
  }
  vi a;
  while (!my_set.empty()){
    int a1 = *my_set.begin();
    my_set.erase(my_set.begin());
    a.push_back(a1);
    int t = 2;
    if (my_set)
    while (a1*t <= *(my_set.rbegin())){
      cout << a1 << '\\' << t << '|';
      if (my_set.find(a1*t) != my_set.end()){
        my_set.erase(a1*t);
        a.push_back(a1*(t));
      }
      t++;
    }
  }
  rep(i, 0, n){
    cout << a[i] << ' ';
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
