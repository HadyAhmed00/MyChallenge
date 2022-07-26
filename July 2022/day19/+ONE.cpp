//
// Created by Hady Ahmed on 7/17/2022.
//
/*
██████╗  █████╗ ██╗   ██╗     ██╗ ██╗  ██╗ █████╗
██╔══██╗██╔══██╗╚██╗ ██╔╝    ████████╗███║██╔══██╗
██║  ██║███████║ ╚████╔╝     ╚██╔═██╔╝╚██║╚██████║
██║  ██║██╔══██║  ╚██╔╝      ████████╗ ██║ ╚═══██║
██████╔╝██║  ██║   ██║       ╚██╔═██╔╝ ██║ █████╔╝
╚═════╝ ╚═╝  ╚═╝   ╚═╝        ╚═╝ ╚═╝  ╚═╝ ╚════╝

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
vector<int> plusOne(vector<int>& digits) {
    if(digits[digits.size()-1]!=9){
        digits[digits.size()-1]+=1;
        return digits;
    }
    int i = digits.size()-1;
    while (digits[i]==9&&i>0){
        digits[i]=0;
        i--;
    }

    if(digits[i]==9)
    {
        digits[i]=0;
        digits.insert(digits.begin(),1);
    }
    else{
        digits[i]+=1;
    }
    for(auto it:digits) cout<<it<<endl;
    END
    return digits;

}
//int main(){
//
//    improve
//    vector<int> v = {8,9,9,9};
//    plusOne(v);
//    END
//    return 0;
//}
