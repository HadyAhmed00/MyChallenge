//
// Created by Hady Ahmed on 7/30/2022.
//
/*
██████╗  █████╗ ██╗   ██╗     ██╗ ██╗ ██████╗  ██╗
██╔══██╗██╔══██╗╚██╗ ██╔╝    ████████╗╚════██╗███║
██║  ██║███████║ ╚████╔╝     ╚██╔═██╔╝ █████╔╝╚██║
██║  ██║██╔══██║  ╚██╔╝      ████████╗ ╚═══██╗ ██║
██████╔╝██║  ██║   ██║       ╚██╔═██╔╝██████╔╝ ██║
╚═════╝ ╚═╝  ╚═╝   ╚═╝        ╚═╝ ╚═╝ ╚═════╝  ╚═╝

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
void Chatroom(){
    set<char> input ;
    string s ;
    cin>>s;
    string hi = "hello";
    int j=0;
    for (int i = 0; i < s.size(); ++i) {
//        input.insert(s[i]);
        if(j==hi.size()){
            cout<<"YES";
            return;

        }
        if(s[i]==hi[j])
        {
            j++;
        }
    }
    if(j==hi.size())
        cout<<"YES";
    else{
        cout<<"NO";
    }

}
//int main(){
//    improve
//    Chatroom();
//    END
//}
