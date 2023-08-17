
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
#define ai(b, c) int b[c] 

void solve()
{
    int n;
    cin >> n;
    ai(a, n) = {0}; ai(b, n) = {0};
    int flag = 0;
    int start = 0; int stop = n-1;
    rep(i, 0, n){
        cin >> a[i];    
    }
    rep(i, 0, n){       
        cin >> b[i];
        if (!flag && a[i] != b[i]){
            flag = 1;
            start = i;
        }
        if (flag && a[i] == b[i]){
            if (a[i-1] != b[i-1]){
            stop = i-1;}
        }
    }
    while (start > 0 && b[start] >= b[start-1]) start --;
    while (stop < n-1 && b[stop] <= b[stop +1]) stop ++;
    cout << start+1 << ' ' << stop+1 << '\n';


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
