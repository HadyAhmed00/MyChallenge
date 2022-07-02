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
#define f(i, k, n) for (ll i = k; i < n; i++)
using namespace std;

void Circle_line(){
    int n;cin>>n;
    int arr[n+1];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    int src,dst;
    cin>>src>>dst;
    src--,dst--;
    if(src==dst)
    {
        cout<<0<<endl;
        return;
    }
    if(dst>src){
        int tf=0,tb=0;
        for (int i =src ; i <dst ; ++i) {
            tf+=arr[i];
        }
        for (int i = dst; i < src+n; ++i) {
            tb+=arr[(i%n)];
        }
        cout<<min(tf,tb);

    }
    else{
        int tf=0,tb=0;
        for (int i =dst ; i <src ; ++i) {
            tf+=arr[i];
        }
        for (int i = src; i < dst+n; ++i) {
            tb+=arr[(i%n)];
        }
        cout<<min(tf,tb);
    }

}
//
//int main() {
//    Circle_line();
//
//    return 0;
//}
