//
// Created by Hady Ahmed on 7/8/2022.
//
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <vector>
#include <stack>
#include <cmath>
#define ll long long
#define modl 1000000007
#define reb(i, k, n) for (ll i = k; i < n; i++)
using namespace std;
string dnaComplement(string s) {
    reverse(s.begin(),s.end());
    for (int i = 0; i < s.size(); ++i) {
        if(s[i]=='A')
            s[i]='T';
        else if(s[i]=='T')
            s[i]= 'A';
        else if(s[i]=='C')
            s[i]='G';
        else if(s[i]=='G')
            s[i]='C';

    }
    return s;
}
long maximumSum(vector<int> arr) {
    ll  sum_sof_far=0,sum =0;
    for (int i = 0; i < arr.size(); ++i) {
        sum_sof_far+=arr[i];

        if(sum_sof_far<0)
            sum_sof_far=0;
        sum=max(sum,sum_sof_far);
    }
    return sum;

}
vector<int> mergeArrays(vector<int> a, vector<int> b) {
    //naive solution (n Log(n) )
    if(a.size()==0){
        for (int i = 0; i < b.size(); ++i) {
            cout<<b[i]<<endl;
        }
    }else if(b.size()==0)
    {
        for (int i = 0; i < a.size(); ++i) {
            cout<<a[i]<<endl;
        }
    }
    for (int i = 0; i < b.size(); ++i) {
        a.push_back(b[i]);
    }
    sort(a.begin(),a.end());
    for (int i = 0; i < a.size(); ++i) {
        cout<<a[i]<<endl;
    }
    return a;
}
vector<int> isPower(vector<int> arr) {
    vector<int>res;
    for (int i = 0; i < arr.size(); ++i) {

        int n =  arr[i];
        if(ceil(log2(n))== floor(log2(n)))
        {
            res.push_back(1);
        }
        else
        {
            res.push_back(0);
        }
    }
    for (int i = 0; i < res.size(); ++i) {
        cout<<res[i]<<endl;
    }
    return res;

}
int weightCapacity(vector<int> weights, int maxCapacity) {
//    greedy
    int total = 0;
    sort(weights.begin(),weights.end(),greater<int>());
    for (int i = 0; i < weights.size() && maxCapacity>0; ++i) {
        if(weights[i]<=maxCapacity)
        {
            total+=weights[i];
            maxCapacity-=weights[i];
        }

    }
    cout<<total<<endl;
    return total;
}



//
//int main(){
//
//    return 0;
//}

