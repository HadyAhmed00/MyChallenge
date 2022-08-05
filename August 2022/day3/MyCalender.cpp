//
// Created by Hady Ahmed on 8/4/2022.
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
//int myStart =0;int myEnd=0;
vector<pair<int,int>> interval;
class MyCalendar {

public:

    MyCalendar() {

    }

    bool book(int start, int end) {


        if(interval.size()==0){
            interval.push_back({start,end});
            return true;
        }
        if(interval[0].first>=end){
            interval.insert(interval.begin(),{start,end});
            return true;
        }
        if(interval[interval.size()-1].second<=start){
            interval.insert(interval.end(),{start,end});
            return true;
        }
        if(interval.size()>1){
            for (int i = 0; i < interval.size()-1; ++i) {
                int myEnd=interval[i+1].first,myStart=interval[i].second;
                if(myEnd-myStart>0)
                {
                    if(start>=myStart&&end<=myEnd)
                    {
                        interval.insert(interval.begin()+i+1,{start,end});
                        return true;
                    }
                }
            }
        }
        else
            return false;

    }
};
//
//int main(){
//    improve
//    END
//}
