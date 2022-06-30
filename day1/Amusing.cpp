//
// Created by Hady Ahmed on 6/30/2022.
//
#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
void Amusing(){
    map<char,int> lookup;
    string f,s,r;
    cin>>f>>s>>r;
    for (int i = 0; i < r.size(); ++i) {

        if(lookup.find(r[i])==lookup.end())
        {
            lookup.insert(make_pair(r[i],1));
        }
        else{
            lookup.at(r[i])++;
        }
    }

    for (int i = 0; i < f.size(); ++i) {
        if(lookup.find(f[i])==lookup.end())
        {
            cout<<"NO";
            return;
        }
        else{
            if(lookup.at(f[i])>0)
            {
                lookup.at(f[i])--;
            }
            else {
                cout <<"NO";
                return;
            }
        }
    }
    for (int i = 0; i < s.size(); ++i) {
        if(lookup.find(s[i])==lookup.end())
        {
            cout<<"NO";
            return;
        }
        else{
            if(lookup.at(s[i])>0)
            {
                lookup.at(s[i])--;
            }
            else {
                cout <<"NO";
                return;
            }
        }
    }
    for (auto i = lookup.begin(); i != lookup.end(); ++i) {
        if(i->second!=0)
        {
            cout<<"NO";
            return;
        }

    }
    cout<<"YES";
    return;

}