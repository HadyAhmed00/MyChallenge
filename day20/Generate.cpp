//
// Created by Hady Ahmed on 7/19/2022.
//
/*
██████╗  █████╗ ██╗   ██╗     ██╗ ██╗ ██████╗  ██████╗
██╔══██╗██╔══██╗╚██╗ ██╔╝    ████████╗╚════██╗██╔═████╗
██║  ██║███████║ ╚████╔╝     ╚██╔═██╔╝ █████╔╝██║██╔██║
██║  ██║██╔══██║  ╚██╔╝      ████████╗██╔═══╝ ████╔╝██║
██████╔╝██║  ██║   ██║       ╚██╔═██╔╝███████╗╚██████╔╝
╚═════╝ ╚═╝  ╚═╝   ╚═╝        ╚═╝ ╚═╝ ╚══════╝ ╚═════╝

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

vector<vector<int>> generate(int numRows) {
    vector<vector<int>>res;
    for (int i = 1; i <=numRows ; ++i) {
        vector<int > row;

        for (int j = 0; j < i; ++j) {
            if(j==0){
                row.push_back(1);
            }else if(j==i-1)
            {
                row.push_back(1);
            }
            else{
                row.push_back(res[i-2][j-1]+res[i-2][j]);
            }
        }

        res.push_back(row);

    }
//    for(auto it : res){
//        for(auto num: it){
//            cout<<num<<" ";
//        }
//        cout<<endl;
//    }
    return res;


}
int main(){

    improve
    generate(5);
    END
    return 0;
}
