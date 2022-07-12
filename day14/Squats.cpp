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

void Squats(){
    int n;cin>>n;
    string s;cin>>s;
    int caps=0,small=0;
    for (int i = 0; i < s.size(); ++i) {
        s[i]=='x'?small++:caps++;
    }
    int tmp = (n/2)-(min(caps,small));
    if(caps==small)
    {
        cout<<0<<endl;
        cout<<s;
        return;

    }
    else if(caps>small)
    {

        for (int i = 0; i < s.size()&&tmp!=0; ++i) {
            if(s[i]=='X')
            {
                s[i]='x';
                tmp--;
            }
        }
    }else{

        for (int i = 0; i < s.size()&&tmp>0; ++i) {
            if(s[i]=='x')
            {
                s[i]='X';
                tmp--;
            }
        }
    }
    cout<<(n/2)-(min(caps,small))<<endl;
    cout<<s;

}
//
//int main(){
//
//    improve
//    Squats();
//    return 0;
//}
