//
// Created by Hady Ahmed on 7/5/2022.
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
#define f(i, k, n) for (ll i = k; i < n; i++)
using namespace std;
string addBinary(string a, string b) {
    if(a.size()!=b.size()){
        while (a.size()!=b.size()){
            if(a.size()>b.size())
            {
                b.insert(b.begin(),'0');
            } else{
                a.insert(a.begin(),'0');
            }
        }
    }
    string res= "";
    int carry= 0;
    for (int i = a.size()-1; i >=0 ; --i) {
        int x = a[i]-'0';
        int y = b[i]-'0';
        int sum = x + y + carry;
        if(sum == 3){
            res.push_back('1');
            carry=1;
        }
        else if(sum==2){
            res.push_back('0');
            carry=1;
        }
        else if(sum ==1){
            res.push_back('1');
            carry=0;
        }
        else if (sum ==0){
            res.push_back('0');
            carry =0;
        }
    }
    reverse(res.begin(),res.end());
    if(carry==1){
        res.insert(res.begin(),'1');
    }
    cout<<res;
    return res;

}
//
//int main(){
////    string a=,  b=;
//    string res =  addBinary("1010","1011");
////    cout<<res;
//    return 0;
//}
