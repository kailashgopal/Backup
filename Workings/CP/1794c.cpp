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
    int a[n];
    rep(i, 0, n){
        cin >> a[i];
    }
    rep(i, 0, n){
        int left = 0, right = i;
        int mid = (left + right)/2;
        while (left <= right){  
            mid = (left + right)/2;
            //cout << a[mid]/(n-mid) << "\\";
           if (a[mid]/(i+1-mid) >= 1){
                right = mid-1;
                
            }    
            else{
                left = mid + 1;
           
        }
        cout << right << '|';
        double cost = 1;
        rep(j, mid+1, i+1)
            cost *= (double)a[j]/(double)(i+1-j);
            //cout << a[j] << '|';
        }
        cout << (i)-(right) << ' ';
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
