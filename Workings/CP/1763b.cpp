
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


bool sortcol(const vector<int>& v1, const vector<int>& v2)
{
    return v1[1] < v2[1];
}

int flag1 = 0;
void solve()
{
    int n, k; cin >> n >> k;
    vii h(n, {0, 0});
 
    rep(i, 0, n){      
        cin >> h[i][0];
    }
    rep(i, 0, n){
        cin >> h[i][1];
    }
    sort(h.begin(), h.end(), sortcol);
    int pos = 0;
    while(pos < n){
        int s = 0;
        while (h[pos][0] > 0){
            h[pos][0] -= k;
            s += k;
            if (h[pos][0] <= 0){
                int flag = 0;
                rep(i, pos+1, n){
                    if ((h[i][0] - s) > 0){
                        pos = i;
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0){cout << "YES\n"; return;}
            }
            k -= h[pos][1];
            if (k < 0){break;}
        }
        rep(i, 0, n){
            if (i == pos){continue;}
            else{
                h[i][0] -= s;
                if (k <= 0 && h[i][0] > 0){cout << "NO\n"; return;}
            }
        }
        pos++;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int tc = 1;
    cin >> tc;
    int ct = 0;
    while (tc--){
        if (ct == 34){flag1 = 1;}
        solve();
        ct++;}

    return 0;
}
