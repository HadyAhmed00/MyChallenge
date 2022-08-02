//
// Created by Hady Ahmed on 8/2/2022.
//
/*
 █████╗ ██╗   ██╗ ██████╗ ██╗   ██╗███████╗████████╗    ██████╗  █████╗ ██╗   ██╗     ██╗ ██╗ ██████╗
██╔══██╗██║   ██║██╔════╝ ██║   ██║██╔════╝╚══██╔══╝    ██╔══██╗██╔══██╗╚██╗ ██╔╝    ████████╗╚════██╗
███████║██║   ██║██║  ███╗██║   ██║███████╗   ██║       ██║  ██║███████║ ╚████╔╝     ╚██╔═██╔╝ █████╔╝
██╔══██║██║   ██║██║   ██║██║   ██║╚════██║   ██║       ██║  ██║██╔══██║  ╚██╔╝      ████████╗██╔═══╝
██║  ██║╚██████╔╝╚██████╔╝╚██████╔╝███████║   ██║       ██████╔╝██║  ██║   ██║       ╚██╔═██╔╝███████╗
╚═╝  ╚═╝ ╚═════╝  ╚═════╝  ╚═════╝ ╚══════╝   ╚═╝       ╚═════╝ ╚═╝  ╚═╝   ╚═╝        ╚═╝ ╚═╝ ╚══════╝

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
const int val[13] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
const string rom[13] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
//these are the two global lookup tables that will help us in the process
string intToRoman(int num) {
    string ans="";
    int i=0;
    while(num){
        while(num>=val[i]){
            ans+=rom[i];
            num-=val[i];
        }
        i++;
    }
    return ans;
}
//int main(){
//    improve
//    END
//}
