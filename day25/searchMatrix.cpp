//
// Created by Hady Ahmed on 7/24/2022.
//
/*
██████╗  █████╗ ██╗   ██╗     ██╗ ██╗ ██████╗ ███████╗
██╔══██╗██╔══██╗╚██╗ ██╔╝    ████████╗╚════██╗██╔════╝
██║  ██║███████║ ╚████╔╝     ╚██╔═██╔╝ █████╔╝███████╗
██║  ██║██╔══██║  ╚██╔╝      ████████╗██╔═══╝ ╚════██║
██████╔╝██║  ██║   ██║       ╚██╔═██╔╝███████╗███████║
╚═════╝ ╚═╝  ╚═╝   ╚═╝        ╚═╝ ╚═╝ ╚══════╝╚══════╝

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



bool searchMatrix(vector<vector<int>>& matrix, int target) {
    for (int i = 0; i < matrix.size(); ++i) {
        if(binary_search(matrix[i].begin(),matrix[i].end(),target))
        {
            return true;
        }
    }
    return false;

}
//
//int main(){
//
//    improve
//    vector<vector<int>> matrix = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
//    int target=20;
//    cout<<searchMatrix(matrix,target);
//    END
//    return 0;
//}
