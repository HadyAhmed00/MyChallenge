//
// Created by Hady Ahmed on 7/14/2022.
//
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <vector >
#include <stack>
#include <cmath>
#include <queue>
#define improve ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define all(v) v.begin(), v.end()
#define loop(n) for (int i = 0; i < n; i++)
#define ll long long int
#define modl 1000000007
#define END cout<<endl;
#define reb(i, k, n) for (ll i = k; i < n; i++)
using namespace std;

void Candy_Bags(){
    int n;cin>>n;
    int a=1 ,b=n*n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n / 2; ++j) {
            cout<<a<<" "<<b<<" ";
            a++;
            b--;
        }
        END
    }
}
//
//int main(){
//
//    improve
//    Candy_Bags();
//    END
//    return 0;
//}
