//
// Created by Hady Ahmed on 7/7/2022.
//
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <vector>
#include <stack>
#define ll long long
#define modl 1000000007
#define reb(i, k, n) for (ll i = k; i < n; i++)

using namespace std;

void coder(){
    int n ; cin>>n;
    (n*n)%2==0?cout<<(n*n)/2:cout<<((n*n)/2)+1;
    cout<<endl;
    for (int i = 0; i < n; ++i) {
        int j ;
        i%2==0?j=0:j=1;
        for (int k = 0; k < n; ++k) {
            if(j)
                k%2!=0?cout<<"C":cout<<".";
            else
                k%2!=0?cout<<".":cout<<"C";
        }
        cout<<endl;
    }
}
//
//int main(){
//    coder();
//    return 0;
//}
