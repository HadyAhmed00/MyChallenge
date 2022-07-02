//
// Created by Hady Ahmed on 7/2/2022.
//
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <vector >
#define ll long long
using namespace std;

int n , k;

int check(int m){
    int sum =0;
    while (m){
        sum+=m;
        m/=k;
    }
    return sum;
}
void Burning_Midnight(){
    cin>>n>>k;

    int l =0,r=n;
    while (l<r)
    {
        int mid = (l+r)/2;
        if(check(mid)>=n)
        {
            r=mid;
        }
        else
        {
            l=mid+1;
        }
    }
    cout<<l<<endl;


}
//
//int main() {
//    Burning_Midnight();
//
//    return 0;
//}
