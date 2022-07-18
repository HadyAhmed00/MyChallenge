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
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int j=0;
    for (int i = m; i < n+m; ++i) {
        nums1[i]=nums2[j];
        j++;
    }
    sort(nums1.begin(),nums1.end());

}
//int main(){
//
//    improve
//    vector<int> nums1={1,2,3,0,0,0};
//    int m=2;
//    vector<int> nums2={2,5,6};
//    int n=1;
//    merge( nums1,  m,  nums2, n);
//    END
//    return 0;
//}
