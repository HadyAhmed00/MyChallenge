//
// Created by Hady Ahmed on 7/10/2022.
//
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <vector>
#include <stack>
#include <cmath>
#include <queue>

#define ll long long int
#define modl 1000000007
#define reb(i, k, n) for (ll i = k; i < n; i++)
using namespace std;
void Lights_Out(){
//    int lights[5][5];
    vector<vector<int>> lights(5,vector<int>(5,0));
    for (int i = 1; i <= 3; ++i) {
        for (int j = 1; j <= 3; ++j) {
            int tmp =0;
            cin>>tmp;
            if(tmp>0)
            {
                lights[i][j]+=tmp;
                lights[i-1][j]+=tmp;
                lights[i+1][j]+=tmp;
                lights[i][j+1]+= tmp;
                lights[i][j-1]+=tmp;
            }

        }
    }
    for (int i = 1; i <= 3; ++i) {
        for (int j = 1; j <= 3; ++j) {
            lights[i][j]%2?cout<<'0':cout<<'1';
        }
        cout<<endl;
    }


}
//
//int main(){
//    Lights_Out();
//    return 0;
//}
