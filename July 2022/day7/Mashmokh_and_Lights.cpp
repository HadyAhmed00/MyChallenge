//
// Created by Hady Ahmed on 7/5/2022.
//
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <vector>
#include <stack>
#define ll long long
#define modl 1000000007
#define f(i, k, n) for (ll i = k; i < n; i++)
using namespace std;

void Mashmokh_and_Lights(){
    int n, m ;
    cin>>n>>m;
    vector<int> lights(n+1,-1);
    for (int i = 0; i < m; ++i) {
        int input;
        cin>>input;
        for (int j = input; j < lights.size(); ++j) {
            if(lights[j]==-1)
                lights[j]=input;
            else
                break;

        }
    }
    for (int i = 1; i < lights.size(); ++i) {
        cout<<lights[i]<<" ";

    }

}

//int main() {
//    Mashmokh_and_Lights();
//    return 0;
//}
