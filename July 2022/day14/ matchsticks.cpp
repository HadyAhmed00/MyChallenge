//
// Created by Hady Ahmed on 7/12/2022.
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
#define improve ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define all(v) v.begin(), v.end()
#define loop(n) for (int i = 0; i < n; i++)
#define ll long long int
#define modl 1000000007
#define reb(i, k, n) for (ll i = k; i < n; i++)
using namespace std;

bool match(vector<int>& sticks,int idx,int right,int lift,int button, int top,int aim){
    if(right==aim&&lift==aim&&top==aim&&button==aim)
        return true;
    if(right>aim||lift>aim||top > aim||button>aim|| idx==-1)
        return false;
    int val = sticks[idx];
    bool t= match(sticks,idx-1,right+val,lift,button,top,aim);
    if(t) return true;
    t= match(sticks,idx-1,right,lift+val,button,top,aim);
    if(t) return true;
    t= match(sticks,idx-1,right,lift,button+val,top,aim);
    if(t) return true;
    t= match(sticks,idx-1,right-val,lift,button,top+val,aim);
    if(t) return true;


}

bool makesquare(vector<int>& matchsticks) {

    int sum=0;
    for (int matchstick : matchsticks) {
        sum+=matchstick;
    }
    if(sum%4!=0)
        return false;
    sort(all(matchsticks));
    return match(matchsticks,matchsticks.size()-1,0,0,0,0,sum/4);

}
//
//int main(){
//
//    improve
//    vector<int> matchsticks = {1,1,2,2,2};
//    cout<< makesquare(matchsticks);
//    return 0;
//}
