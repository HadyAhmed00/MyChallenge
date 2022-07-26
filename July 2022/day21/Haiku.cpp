//
// Created by Hady Ahmed on 7/20/2022.
//
/*
██████╗  █████╗ ██╗   ██╗     ██╗ ██╗     ██████╗  ██╗
██╔══██╗██╔══██╗╚██╗ ██╔╝    ████████╗    ╚════██╗███║
██║  ██║███████║ ╚████╔╝     ╚██╔═██╔╝     █████╔╝╚██║
██║  ██║██╔══██║  ╚██╔╝      ████████╗    ██╔═══╝  ██║
██████╔╝██║  ██║   ██║       ╚██╔═██╔╝    ███████╗ ██║
╚═════╝ ╚═╝  ╚═╝   ╚═╝        ╚═╝ ╚═╝     ╚══════╝ ╚═╝

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

void Haiku(){
    int lines[3];
    for (int i = 0; i < 3; ++i) {
        string s;
        getline(cin,s);
        lines[i]=0;
        for (int j = 0; j < s.size(); ++j) {
            if(s[j]=='a'||s[j]== 'e'||s[j]== 'i'||s[j] =='o'||s[j] =='u')
                lines[i]++;

        }
        if((i==0||i==2)&&lines[i]!=5)
        {
            cout<<"NO";
            return;
        }
        else if(i==1&&lines[i]!=7)
        {
            cout<<"NO";
            return;
        }
    }
    cout<<"YES";
}
//int main(){
//
//    improve
//    Haiku();
//    END
//    return 0;
//}
