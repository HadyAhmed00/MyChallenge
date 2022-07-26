//
// Created by Hady Ahmed on 7/22/2022.
//
/*
██████╗  █████╗ ██╗   ██╗     ██╗ ██╗ ██████╗ ██████╗
██╔══██╗██╔══██╗╚██╗ ██╔╝    ████████╗╚════██╗╚════██╗
██║  ██║███████║ ╚████╔╝     ╚██╔═██╔╝ █████╔╝ █████╔╝
██║  ██║██╔══██║  ╚██╔╝      ████████╗██╔═══╝ ██╔═══╝
██████╔╝██║  ██║   ██║       ╚██╔═██╔╝███████╗███████╗
╚═════╝ ╚═╝  ╚═╝   ╚═╝        ╚═╝ ╚═╝ ╚══════╝╚══════╝

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
void IQ(){
    int a[1001];
    int n,i,num1=0,num2=0,cnt2=0,cnt1=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {
            cnt1++;
            num1=i;
        }
        else
        {
            cnt2++;
            num2=i;
        }
    }

    if(cnt1==1)
        cout<<num1+1<<endl;
    if(cnt2==1)
        cout<<num2+1<<endl;
}
//
//int main(){
//
//    improve
//    IQ();
//    END
//    return 0;
//}
