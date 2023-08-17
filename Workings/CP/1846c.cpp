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

void solve()
{
    int n, m, h; cin >> n >> m >> h;
    vii participants;
    rep(i, 0, n){
        vi temp;
        rep(j, 0, m){
            int a; cin >> a;
            temp.push_back(a);
        }
        participants.push_back(temp);
    }
    rep(i, 0, n){
        sort(participants[i].begin(), participants[i].end());
    }
    //rep(i, 0, n){
    //    rep(j, 0, participants[i].size()){
    //        cout << participants[i][j] << '|';
    //    }
    //    cout << '\n';
    //}
    vii pts;
    rep(i, 0, n){
        int sum1 = 0; int ct = 0; 
        int penalty = 0;
        rep(j, 0, m){
            sum1 += participants[i][j];
            if (sum1 > h){
                sum1 -= participants[i][j];
                break;
            }
            penalty += sum1;
            ct++;
        }
        vi d;
        d.push_back(ct);
        d.push_back(penalty);
        pts.push_back(d);
    }
    //rep(i, 0, pts.size()){
      //  cout << pts[i][0] << ' ' << pts[i][1] << '|';
    //}
    int pos = 1;
    rep(i, 1, n){
        if (pts[i][0] > pts[0][0]){pos++;}//cout<<"A";}
        else{
            if ((pts[i][0] == pts[0][0])&&(pts[i][1] < pts[0][1])){
                pos++;
                //cout << "B";k
            }
        } 
    }
    cout << pos << "\n";
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
