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
    int a[n][n] = {0};
    rep(i, 0, n){
        rep(j, 0, n){
            cin >> a[i][j];
        }
    }
    int n_operations = 0;
    rep(i, 0, (n+2)/2){
        int i1 = n-i-1; 
        if ((n%2 == 0) && (i == n/2)){break;}
        if ((n%2 != 0)&&(i == n/2))
        rep(j, 0, (n)/2){
            int j1 = n-j-1;
            n_operations += a[i][j]^a[i1][j1];
            //if (a[i][j]^a[i1][j1] == 1){cout << "R" << i << "C" << j << '|';}
            
        }
        else{
            rep(j, 0, n){
                int j1 = n-j-1;
                n_operations += a[i][j]^a[i1][j1];
                //if (a[i][j]^a[i1][j1] == 1){cout << "R" << i << "C" << j << '|';}
            }
        }
    }
    //cout << n_operations;
    if (n_operations == k){
        cout << "YES\n";
    }
    else{
        if ((n_operations < k)&&((k-n_operations)%2 == 0)){cout << "YES\n";}
        else{if((n_operations < k)&&(n%2 != 0)){cout << "YES\n";}
        else{cout << "NO\n";}        }
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
