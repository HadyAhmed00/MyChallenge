//
// Created by Hady Ahmed on 7/1/2022.
//
//leet cood
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


//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

    if(list1== nullptr)
        return list2;
    if(list2== nullptr)
        return list1;

    ListNode * res = list1;
    if(list1->val > list2->val)
    {
        res = list2;
        list2= list2->next;
    }else{
        list1 = list1->next;
    }
    ListNode * curr = res;

    while (list1 &&list2)
    {
        if(list1->val < list2->val)
        {
            curr->next = list1;
            list1 = list1->next;

        }
        else{
            curr->next = list2;
            list2 = list2->next;
        }
        curr = curr->next;
    }
    if(list1!= nullptr){
        curr->next = list1;
    }
    if(list2!= nullptr)
    {
        curr->next = list2;
    }
    return res;

}
//
//int main() {
//    ListNode *l3 = new ListNode() ;
//    l3->val = 4;
//    ListNode *l2= new ListNode() ;
//    l2->val = 2;
//    l2->next = l3;
//    ListNode *l1 = new ListNode()  ;
//    l1->val = 1;
//    l1->next = l2;
//    ////////////////////////
//    ListNode *l33 = new ListNode() ;
//    l33->val = 4;
//    ListNode *l22 = new ListNode() ;
//    l22->val = 3;
//    l22->next = l33;
//    ListNode *l11  = new ListNode();
//    l11->val = 1;
//    l11->next = l22;
//
//    ListNode * res = mergeTwoLists(l1, l11) ;
//
//    while (res)
//    {
//        cout<<res->val<<endl;
//        res = res->next;
//    }
//
//
//
//    return 0;
//}
