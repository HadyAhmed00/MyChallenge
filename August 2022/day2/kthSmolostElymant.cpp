//
// Created by Hady Ahmed on 8/2/2022.
//
/*
 █████╗ ██╗   ██╗ ██████╗ ██╗   ██╗███████╗████████╗    ██████╗  █████╗ ██╗   ██╗     ██╗ ██╗ ██████╗
██╔══██╗██║   ██║██╔════╝ ██║   ██║██╔════╝╚══██╔══╝    ██╔══██╗██╔══██╗╚██╗ ██╔╝    ████████╗╚════██╗
███████║██║   ██║██║  ███╗██║   ██║███████╗   ██║       ██║  ██║███████║ ╚████╔╝     ╚██╔═██╔╝ █████╔╝
██╔══██║██║   ██║██║   ██║██║   ██║╚════██║   ██║       ██║  ██║██╔══██║  ╚██╔╝      ████████╗██╔═══╝
██║  ██║╚██████╔╝╚██████╔╝╚██████╔╝███████║   ██║       ██████╔╝██║  ██║   ██║       ╚██╔═██╔╝███████╗
╚═╝  ╚═╝ ╚═════╝  ╚═════╝  ╚═════╝ ╚══════╝   ╚═╝       ╚═════╝ ╚═╝  ╚═╝   ╚═╝        ╚═╝ ╚═╝ ╚══════╝

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
int kthSmallest(vector<vector<int>>& matrix, int k) {
    vector<int> res;
    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix[i].size(); ++j) {
            res.push_back(matrix[i][j]);

        }
    }
    sort(all(res));
    return res[k-1];


}
//int main(){
//    improve
//    END
//}
