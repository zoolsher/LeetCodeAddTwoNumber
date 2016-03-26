//
// Created by zoolsher on 16/3/26.
//

#ifndef ADDTWONUMBER_SOLUTION_H
#define ADDTWONUMBER_SOLUTION_H

#include <stddef.h>
#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        bool jumper = false;
        if(l1==NULL){
            return l2;
        }
        if(l2==NULL){
            return l1;
        }
        ListNode *res = new ListNode(0);
        ListNode *ret = res;
        while(true){
            int l1val = l1?l1->val:0;
            int l2val = l2?l2->val:0; 
            int temp = l1val+l2val+(jumper?1:0);
            res->val = temp%10;
            jumper = temp>=10;
            l1 = l1?l1->next:l1;
            l2 = l2?l2->next:l2;
            if(l1==NULL&&l2==NULL&&jumper==false){
                break;
            }
            res->next = new ListNode(0);
            res = res->next;
        }
        // while(l1 != NULL || l2 != NULL);
        return ret;
    }
};
#endif //ADDTWONUMBER_SOLUTION_H
