//
// Created by Hady Ahmed on 6/30/2022.
//
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <vector >
using namespace std;
bool isPalindrome(int x) {

    string num = to_string(x);
    string res = num;
    reverse(res.begin(),res.end());
    return num == res;
}
