//
// Created by Hady Ahmed on 7/23/2022.
//
/*
██████╗  █████╗ ██╗   ██╗     ██╗ ██╗ ██████╗ ██╗  ██╗
██╔══██╗██╔══██╗╚██╗ ██╔╝    ████████╗╚════██╗██║  ██║
██║  ██║███████║ ╚████╔╝     ╚██╔═██╔╝ █████╔╝███████║
██║  ██║██╔══██║  ╚██╔╝      ████████╗██╔═══╝ ╚════██║
██████╔╝██║  ██║   ██║       ╚██╔═██╔╝███████╗     ██║
╚═════╝ ╚═╝  ╚═╝   ╚═╝        ╚═╝ ╚═╝ ╚══════╝     ╚═╝

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

void merge(vector<int>& arr, int l, int mid, int r,vector<pair<int,int>>& v,vector<int>& count)
{
    // Your code here
    vector<pair<int,int>> temp(r-l+1);
    int i = l;
    int j= mid + 1;
    int k = 0;

    while(i<=mid && j<=r){                                                    // Step 4
        if(v[i].first<=v[j].first) temp[k++] = v[j++];
        else{
            count[v[i].second] += r-j+1;
            temp[k++] = v[i++];
        }
    }

    while(i<=mid){
        temp[k++] = v[i++];
    }
    while(j<=r){
        temp[k++] = v[j++];
    }

    for(int i=l;i<=r;i++){
        v[i] = temp[i-l];
    }
}
void mergeSort(vector<int>& arr, int l, int r,vector<pair<int,int>>& v,vector<int>& count)
{
    //code here
    if(l>=r) return ;
    int mid = (l+r)/2;
    mergeSort(arr,l,mid,v,count);
    mergeSort(arr,mid+1,r,v,count);
    merge(arr,l,mid,r,v,count);
}

vector<int> countSmaller(vector<int>& nums) {
    int n = nums.size();
    vector<pair<int,int>> v(n);                                        // step 1
    for(int i=0;i<n;i++) v[i] = {nums[i],i};
    vector<int> count(n,0);                                             // step 2
    mergeSort(nums,0,n-1,v,count);                                // step 3
    // for(int i=0;i<n;i++) cout<<v[i].first<<" ";
    return count;
}
//
//int main(){
//
//    improve
//
//    END
//    return 0;
//}
