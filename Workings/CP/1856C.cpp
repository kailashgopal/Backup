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
    int a[n];
    int max = 0; 
    rep(i, 0, n){cin >> a[i];}
    vii arr1;
    int pos = 0; int flag = 0; vi temp;
    while (pos < n){
        if (!flag){temp = {}; flag = 1;}
        temp.push_back(a[pos]);
        if (pos == n-1){
            arr1.push_back(temp);
            pos++; 
            continue;
        }
        if (pos < n-1 && a[pos] >= a[pos + 1]){
            arr1.push_back(temp);
            flag = 0;
        } 
        
        pos ++;
    }
    rep(i, 0, arr1.size()){
        int m = arr1[i][arr1[i].size()-1];
        int moves = k;
        int pos = arr1[i].size() - 2;
        int j = i;
        while (moves > 0){
            if (moves > arr1[i][pos+1]+(int)1-arr1[i][pos]){
                moves -=  arr1[i][pos+1]+(int)1-arr1[i][pos];
                m++;
            }
            else{break;}
            if (pos <= 0){
                if (i > 0){
                    i = i-1;
                    pos = arr1[i].size()-2;
                }
                else{break;}
            }
            
            pos --;
            
        }
        cout << pos << '|';
        i = j;
        
        if (max < m){
            max = m;
        }
    }
    cout << max << "\n";
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