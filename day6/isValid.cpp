//
// Created by Hady Ahmed on 7/4/2022.
//
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <vector >
#include <stack>
#define ll long long
#define modl 1000000007
#define f(i, k, n) for (ll i = k; i < n; i++)
using namespace std;

bool isValid(string s) {

    stack<char> per;
    for (int i = 0; i < s.size(); ++i) {

        if(!per.empty()){
            if( per.top()=='('&&s[i]==')' )
                per.pop();
            else if(per.top()=='['&&s[i]==']')
                per.pop();
            else if(per.top()=='{'&&s[i]=='}')
                per.pop();
            else
                per.push(s[i]);
        }
        else
            per.push(s[i]);

    }
    return per.empty();

}
//
//int main() {
//    string s = "()[]{}";
//    isValid(s);
//}
