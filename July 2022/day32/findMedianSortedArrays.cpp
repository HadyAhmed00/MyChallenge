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
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    for (int i = 0; i < nums2.size(); ++i) {
        nums1.push_back(nums2[i]);
    }
    sort(nums1.begin(),nums1.end());
    if(nums1.size()%2==0)
    {
        double a = nums1[(nums1.size()/2)-1];
        double b = nums1[(nums1.size()/2)];
        return (a+b)/2;

    }else
    {
        return (double) nums1[(nums1.size()/2)];
    }
}
//
//int main(){
//    improve
//    vector<int> a ={1,3};
//    vector<int> b ={2,4};
//    cout<<findMedianSortedArrays(a,b);
//    END
//}
