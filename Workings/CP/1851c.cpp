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
    int n, k; cin >> n >> k;
    int c[n]; rep(i, 0, n){cin >> c[i];}
    int c1 = c[0]; int c2 = c[n-1]; int n1 = 1, n2 = 1;
    int flag = 0;
    if (c1!=c2){
    rep(i, 1, n-1){  
        if (n1 < k){
            if (c[i] == c1){n1++;}
        }
        else{
            if (c[i] == c2){n2++;}
            if (n2 >= k){flag = 1; break;}
        }
    }
    if (n2 >= k){flag = 1;}}
    else{
        int ct = 0;
        rep(i, 0, n){
            if (c[i] == c1){ct++;}
        }
        if (ct >= k){flag = 1;}
    }
    if (flag == 0){cout << "NO\n";}
    else{cout << "YES\n";}
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
