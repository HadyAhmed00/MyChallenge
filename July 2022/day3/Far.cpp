//
// Created by Hady Ahmed on 7/1/2022.
//
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
#include <vector>
#define ll long long
using namespace std;
void Far(){
    int n ;cin>>n;
    string a [n];
    int c =0;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(a[i][j]=='C')
            {
                for (int k = j+1; k < n; ++k) {
                    if(a[i][k]=='C')
                    {
                        c++;
                    }
                }
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(a[j][i]=='C')
            {
                for (int k = j+1; k < n; ++k) {
                    if(a[k][i]=='C')
                    {
                        c++;
                    }
                }
            }
        }
    }

    cout<<c <<endl;

}