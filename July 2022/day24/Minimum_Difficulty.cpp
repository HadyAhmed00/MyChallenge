//
// Created by Hady Ahmed on 7/23/2022.
//
/*
██████╗  █████╗ ██╗   ██╗     ██╗ ██╗ ██████╗ ██╗  ██╗
██╔══██╗██╔══██╗╚██╗ ██╔╝    ████████╗╚════██╗██║  ██║
██║  ██║███████║ ╚████╔╝     ╚██╔═██╔╝ █████╔╝███████║
██║  ██║██╔══██║  ╚██╔╝      ████████╗██╔═══╝ ╚════██║
██████╔╝██║  ██║   ██║       ╚██╔═██╔╝███████╗     ██║
╚═════╝ ╚═╝  ╚═╝   ╚═╝        ╚═╝ ╚═╝ ╚══════╝     ╚═╝

*/
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <vector>
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

int calc_difficulty(vector<int> arr){
    int Max = INT_MIN;
    for (int i = 0; i < arr.size()-1; ++i) {
        Max=max(Max,(arr[i+1]-arr[i]));
    }
    return Max;
}

void Minimum_Difficulty(){
    int n;cin>>n;

    vector<int> input_full;
    vector<int>input_play;
    for (int i = 0; i < n; ++i) {
        int tmp ;
        cin>>tmp;
        input_full.push_back(tmp);
        input_play.push_back(tmp);
    }
    if(n==3)
    {
        cout<<input_full[2]-input_full[0];
        return;
    }
    int Min = INT_MAX;
    for (int i = 1; i < n-1; ++i) {
        input_play= input_full;
        input_play.erase(input_play.begin()+i)  ;
        Min= min(Min, calc_difficulty(input_play));
    }
    cout<<Min;

}

//
//int main(){
//
//    improve
//    Minimum_Difficulty();
//    END
//    return 0;
//}
