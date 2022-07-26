/*
██╗  ██╗ █████╗ ██████╗ ██╗   ██╗
██║  ██║██╔══██╗██╔══██╗╚██╗ ██╔╝
███████║███████║██║  ██║ ╚████╔╝
██╔══██║██╔══██║██║  ██║  ╚██╔╝
██║  ██║██║  ██║██████╔╝   ██║
╚═╝  ╚═╝╚═╝  ╚═╝╚═════╝    ╚═╝
*/
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <vector >
#include <stack>
#include <cmath>
#include <queue>
#include <utility>
#include <cstring>
#define improve ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define all(v) v.begin(), v.end()
#define loop(n) for (int i = 0; i < n; i++)
#define ll long long int
#define END cout<<endl;
#define reb(i, k, n) for (ll i = k; i < n; i++)
using namespace std;
void Letter(){
    vector<string> res;
    int n, m;cin>>n>>m;
    for (int i = 0; i < n; ++i) {
        string s ;
        cin>>s;
        res.push_back(s);
    }
    int minRow=INT_MAX,maxRow=INT_MIN,
        minCol=INT_MAX,maxCol=INT_MIN;

    for (int i = 0; i < res.size(); ++i) {
        for (int j = 0; j < res[i].size(); ++j) {
            if(res[i][j]=='*'){
                minRow=min(minRow,i);maxRow=max(maxRow,i);
                minCol=min(minCol,j);maxCol=max(maxCol,j);
            }

        }
    }
    for (int i = minRow; i <=maxRow; ++i) {
        for (int j = minCol; j <= maxCol; ++j) {
            cout<<res[i][j];
        }
        cout<<endl;
    }


}

int main(){
    improve
    Letter();

    END
    return 0;
}
