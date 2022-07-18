//
// Created by Hady Ahmed on 7/19/2022.
//
/*
██████╗  █████╗ ██╗   ██╗     ██╗ ██╗ ██████╗  ██████╗
██╔══██╗██╔══██╗╚██╗ ██╔╝    ████████╗╚════██╗██╔═████╗
██║  ██║███████║ ╚████╔╝     ╚██╔═██╔╝ █████╔╝██║██╔██║
██║  ██║██╔══██║  ╚██╔╝      ████████╗██╔═══╝ ████╔╝██║
██████╔╝██║  ██║   ██║       ╚██╔═██╔╝███████╗╚██████╔╝
╚═════╝ ╚═╝  ╚═╝   ╚═╝        ╚═╝ ╚═╝ ╚══════╝ ╚═════╝

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

/**
 * Definition for singly-linked list.*/
void Holidays(){
    int n ;cin>>n;
    int res = n/7;
    int mx= res*2,mn=res*2;
    n %= 7;
    if (n == 1) mx++;
    if (n > 1) mx += 2;
    if (n > 5) mn++;
    cout<<mn<<" "<<mx;

}
//int main(){
//
//    improve
//    Holidays();
//    END
//    return 0;
//}
