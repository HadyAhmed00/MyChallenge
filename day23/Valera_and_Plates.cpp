//
// Created by Hady Ahmed on 7/22/2022.
//
/*
██████╗  █████╗ ██╗   ██╗     ██╗ ██╗ ██████╗ ██████╗
██╔══██╗██╔══██╗╚██╗ ██╔╝    ████████╗╚════██╗╚════██╗
██║  ██║███████║ ╚████╔╝     ╚██╔═██╔╝ █████╔╝ █████╔╝
██║  ██║██╔══██║  ╚██╔╝      ████████╗██╔═══╝  ╚═══██╗
██████╔╝██║  ██║   ██║       ╚██╔═██╔╝███████╗██████╔╝
╚═════╝ ╚═╝  ╚═╝   ╚═╝        ╚═╝ ╚═╝ ╚══════╝╚═════╝

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

void Valera_and_Plates(){
    int n, m, k, type;
    int ans = 0;
    cin >> n >> m >> k;

    for(int i = 0; i < n; i++)
    {
        cin >> type;

        if (type == 1)
        {
            if (m == 0)
                ans++;
            else
                m--;
        }
        else
        {
            if (k != 0)
            {
                k--;
                continue;
            }

            if (m != 0)
            {
                m--;
                continue;
            }

            ans++;
        }
    }

    cout << ans << endl;

}
//
//int main(){
//
//    improve
//    Valera_and_Plates();
//    END
//    return 0;
//}
