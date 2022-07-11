//
// Created by Hady Ahmed on 7/11/2022.
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
int Duff_and_Meat(){
    // O(n) space O(N)
    vector<pair<int,int>> days;
    int n;cin>>n;
    for (int i = 0; i < n; ++i) {
        int a ,b;
        cin>>a>>b;
        days.emplace_back(a,b);
    }
    days.emplace_back(0,0);
    ll totalCost =0;
    for (int i = 0; i < n; ++i) {
        totalCost+=days[i].first*days[i].second;
        if(i<n-1){
            int min =0;
            if(days[i].second<days[i+1].second )
                min = i;
            while(days[min].second<days[i+1].second && i<n-1)
            {
                totalCost+=days[i+1].first*days[min].second;
                i++;
            }
        }

    }
//    cout<<totalCost<<endl;
    return totalCost;

}
// super elgant soutin
void Duff_and_Meat_space_optimzed()
{
    int n;
    cin>>n;
    int totalCost=0,currMin =   INT_MAX;
    loop(n){
        int a,b;
        cin>>a>>b;
        currMin = min(currMin,b);
        totalCost+=b*currMin;
    }
    cout<<totalCost;
}
//int main(){
//
//    improve
//    Duff_and_Meat_space_optimzed();
//    return 0;
//}
