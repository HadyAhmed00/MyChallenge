//
// Created by Hady Ahmed on 7/12/2022.
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
#define reb(i, k, n) for (ll i = k; i < n; i++)
using namespace std;
void Vanya_and_Cards(){
    int n,b;
    cin>>n>>b;
    ll sum=0;
    for (int i = 0; i < n; ++i) {
        int tmp ;cin>>tmp;
        sum+=tmp;
    }
    if(sum==0)
    {
        cout<<0;
        return;
    }


    if(b>=abs(sum)) {
        cout << 1;
        return;
    }
    else{
        int c=0;
        sum= abs(sum);
        while (sum>0)
        {
            sum-=b;
            c++;
        }
        cout<<c;
        return;
    }

}
//
//int main(){
//
//    improve
//    Vanya_and_Cards();
//    return 0;
//}
