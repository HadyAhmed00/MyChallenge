//
// Created by Hady Ahmed on 7/4/2022.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <vector>
#define ll long long
#define modl 1000000007
#define f(i, k, n) for (ll i = k; i < n; i++)
using namespace std;

int candy(vector<int>& ratings) {
    int n = ratings.size();
    int candy = n, i=1;
    while(i<n){
        if(ratings[i] == ratings[i-1]){
            i++;
            continue;
        }

        //For increasing slope
        int peak = 0;
        while(ratings[i] > ratings [i-1]){
            peak++;
            candy += peak;
            i++;
            if(i == n) return candy;
        }

        //For decreasing slope
        int valley = 0;
        while(i<n && ratings[i] < ratings[i-1]){
            valley++;
            candy += valley;
            i++;
        }
        candy -= min(peak, valley); //Keep only the higher peak
    }
    return candy;
}

//int main() {
//
//}
