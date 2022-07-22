//
// Created by Hady Ahmed on 7/22/2022.
//
/*
██████╗  █████╗ ██╗   ██╗     ██╗ ██╗ ██████╗ ██████╗
██╔══██╗██╔══██╗╚██╗ ██╔╝    ████████╗╚════██╗╚════██╗
██║  ██║███████║ ╚████╔╝     ╚██╔═██╔╝ █████╔╝ █████╔╝
██║  ██║██╔══██║  ╚██╔╝      ████████╗██╔═══╝  ╚═══██╗
██████╔╝██║  ██║   ██║       ╚██╔═██╔╝███████╗██████╔╝
╚═════╝ ╚═╝  ╚═╝   ╚═╝        ╚═╝ ╚═╝ ╚══════╝╚═════╝

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
ListNode* partition(ListNode* head, int x) {

    ListNode* small = new ListNode(-1);
    ListNode* large = new ListNode(-1);
    ListNode* small_head = small;
    ListNode* large_head = large;

    while (head){
        if (head->val < x){
            small->next = head;
            small = small -> next;
            head = head -> next;
            small->next = NULL;
        }
        else{
            large->next = head;
            large = large -> next;
            head = head -> next;
            large -> next = NULL;
        }
    }
    small -> next = large_head -> next;

    return small_head -> next;
}
//
//int main(){
//
//    improve
//
//    END
//    return 0;
//}

