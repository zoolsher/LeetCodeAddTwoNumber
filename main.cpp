#include <iostream>
#include "Solution.h"

    

int main() {
    Solution *s = new Solution();
    ListNode *l1 = new ListNode(9);
    l1->next = new ListNode(5);
    l1->next->next = new ListNode(5);
    ListNode *l2 = new ListNode(2);
    ListNode *res = s->addTwoNumbers(l1,l2);
    while(res){
        cout<<res->val<<endl;
        res = res->next;
    }
    
    return 0;
}