//
// Created by Hady Ahmed on 7/1/2022.
//
//leetcode
/*
██████╗  █████╗ ██╗   ██╗   ██████╗
██╔══██╗██╔══██╗╚██╗ ██╔╝   ╚════██╗
██║  ██║███████║ ╚████╔╝     █████╔╝
██║  ██║██╔══██║  ╚██╔╝      ╚═══██╗
██████╔╝██║  ██║   ██║      ██████╔╝
╚═════╝ ╚═╝  ╚═╝   ╚═╝      ╚═════╝

 */
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <vector >
#define ll long long
using namespace std;



int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {

    sort(boxTypes.begin(),boxTypes.end(),
         [](const vector<int>& a, const vector<int>& b){return a[1] > b[1];});

    int i = 0;
    int total=0;
    while(truckSize!=0&& i<boxTypes.size()){
        if(boxTypes[i][0]<truckSize)
        {
            truckSize-=boxTypes[i][0];
            total+=boxTypes[i][0]*boxTypes[i][1];
            i++;
        } else{

            total+=truckSize*boxTypes[i][1];
            truckSize=0;
            break;
        }
    }

    return total;

}

//int main() {
//
//    vector<vector<int>> test= {{1, 3}, {5, 5}, {2, 5}, {4, 2}, {4, 1}, {3, 1}, {2, 2}, {1, 3}, {2, 5}, {3, 2}}
//    ;
//    cout<< maximumUnits(test, 35)<<endl;
//    return 0;
//}

