//
// Created by Hady Ahmed on 7/31/2022.
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
void  Tavas_and_Nafas()
{
    /*
{{0,	zero}    ,{10	,ten},
{1,	one	    },{11	,eleven},
{2,	two	    },{12	,twelve },      {20,twenty},
{3,	three	},{13	,thirteen} ,    {30,thirty},
{4,	four	},{14	,fourteen},     {40,forty},
{5,	five	},{15	,fifteen},      {50,fifty},
{6,	six	    },{16	,sixteen},      {60,sixty},
{7,	seven	},{17	,seventeen},    {70,seventy},
{8,	eight	},{18	,eighteen},     {80,eighty},
{9,	nine	},{19	,nineteen},     {90,ninety}}
     */
    map<int,string> mp = {{0,	"zero"},{10	,"ten"},
                          {1,	"one"},{11	,"eleven "},
                          {2,	"two"},{12	,"twelve "},      {20,"twenty"},
                          {3,	"three"},{13,"thirteen"} ,    {30,"thirty"},
                          {4,	"four"},{14	,"fourteen"},     {40,"forty"},
                          {5,	"five"},{15	,"fifteen" },      {50,"fifty"},
                          {6,	"six"},{16	,"sixteen" },      {60,"sixty"},
                          {7,	"seven"},{17,"seventeen"},    {70,"seventy"},
                          {8,	"eight"},{18,"eighteen"},     {80,"eighty"},
                          {9,	"nine"},{19	,"nineteen"},     {90,"ninety"}};
    string num;
    cin>>num;
    if(num.size()==1){
        cout<<mp[num[0]-'0'];
    }else{
        int a = stoi(num);
        if(a<20){
            cout<<mp[a];
        }else{
            int tmp = (num[0]-'0')*10;
            (a%10==0)?cout<<mp[tmp]:cout<<mp[tmp]<<"-"<<mp[num[1]-'0'];

        }
    }

}
//int main(){
//    improve
//    Tavas_and_Nafas();
//    END
//}
