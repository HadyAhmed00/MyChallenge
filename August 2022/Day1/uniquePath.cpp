//
// Created by Hady Ahmed on 8/1/2022.
//
/*
 █████╗ ██╗   ██╗ ██████╗ ██╗   ██╗███████╗████████╗       ██████╗  █████╗ ██╗   ██╗     ██╗ ██╗  ██╗
██╔══██╗██║   ██║██╔════╝ ██║   ██║██╔════╝╚══██╔══╝       ██╔══██╗██╔══██╗╚██╗ ██╔╝    ████████╗███║
███████║██║   ██║██║  ███╗██║   ██║███████╗   ██║          ██║  ██║███████║ ╚████╔╝     ╚██╔═██╔╝╚██║
██╔══██║██║   ██║██║   ██║██║   ██║╚════██║   ██║          ██║  ██║██╔══██║  ╚██╔╝      ████████╗ ██║
██║  ██║╚██████╔╝╚██████╔╝╚██████╔╝███████║   ██║          ██████╔╝██║  ██║   ██║       ╚██╔═██╔╝ ██║
╚═╝  ╚═╝ ╚═════╝  ╚═════╝  ╚═════╝ ╚══════╝   ╚═╝          ╚═════╝ ╚═╝  ╚═╝   ╚═╝        ╚═╝ ╚═╝  ╚═╝

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
void Uncowed_Forces(){
    float points[]={500,1000,1500,2000,2500};
    float min[6]={};
    float w[6]={};
    float good,bad;
    for (int i = 0; i < 5; ++i) {
        cin>>min[i];
    }
    for (int i = 0; i < 5; ++i) {
        cin>>w[i];
    }
    cin>>good>>bad;
    float total=0;
    for (int i = 0; i < 5; ++i) {
        float first = 0.3*points[i];
        float second = ( (1-(min[i]/250))*(points[i]))-(50*w[i]);
        total+=max(first,second);
    }
    total+=(100*good);
    total-=(50*bad);
    cout<<total<<endl;


}
//int main(){
//    improve
//    Uncowed_Forces();
//    END
//}
