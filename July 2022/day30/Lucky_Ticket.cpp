//
// Created by Hady Ahmed on 7/29/2022.
//
/*
██╗  ██╗ █████╗ ██████╗ ██╗   ██╗
██║  ██║██╔══██╗██╔══██╗╚██╗ ██╔╝
███████║███████║██║  ██║ ╚████╔╝
██╔══██║██╔══██║██║  ██║  ╚██╔╝
██║  ██║██║  ██║██████╔╝   ██║
╚═╝  ╚═╝╚═╝  ╚═╝╚═════╝    ╚═╝
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

void Lucky_Ticket(){
    int n ; cin>>n;
    string a="" ;
    int fHalf =0,sHalf=0;
    for (int i = 0; i < n; ++i) {
        char tmp ; cin>>tmp;
        if(tmp!='4' && tmp!='7')
        {
            cout<<"NO";
            return;
        }
        if(i<n/2){
            fHalf+=(tmp-'0');
        } else{
            sHalf+=(tmp-'0');
        }
        a+=tmp;
    }
    if(fHalf==sHalf){
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
}
//
//int main(){
//    improve
//    Lucky_Ticket();
//    END
//    return 0;
//}
