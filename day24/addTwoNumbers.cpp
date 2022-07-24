//
// Created by Hady Ahmed on 7/23/2022.
//
/*
██████╗  █████╗ ██╗   ██╗     ██╗ ██╗ ██████╗ ██╗  ██╗
██╔══██╗██╔══██╗╚██╗ ██╔╝    ████████╗╚════██╗██║  ██║
██║  ██║███████║ ╚████╔╝     ╚██╔═██╔╝ █████╔╝███████║
██║  ██║██╔══██║  ╚██╔╝      ████████╗██╔═══╝ ╚════██║
██████╔╝██║  ██║   ██║       ╚██╔═██╔╝███████╗     ██║
╚═════╝ ╚═╝  ╚═╝   ╚═╝        ╚═╝ ╚═╝ ╚══════╝     ╚═╝

*/
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <vector >
#include <stack>
#include <cmath>
#include <queue>
#include <utility>
#include <cstring>
#define improve ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define all(v) v.begin(), v.end()
#define loop(n) for (int i = 0; i < n; i++)
#define ll long long int
#define END cout<<endl;
#define reb(i, k, n) for (ll i = k; i < n; i++)
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode *res =new ListNode();
    ListNode *moving = res;
    int carry =0;
    while (l1||l2||carry)
    {
        int sum=0;
        if(l1){
            sum+=l1->val;
            l1= l1->next;
        }
        if(l2){
            sum+= l2->val;
            l2=l2->next;
        }
        sum+=carry;

        if(sum>9){
            carry=1;
            sum-=10;
        }
        else{
            carry=0;
        }
        ListNode * tmp = new ListNode(sum);
        moving->next=tmp;
        moving= moving->next;

    }
    return res->next;


}
//int main(){
//
//    improve
//
//    END
//    return 0;
//}
