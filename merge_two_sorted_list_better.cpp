class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode p(0);//to create dummy one which delets after the program it is not a pointer it is a stack
        ListNode* pre=&p;//we are making pointer here using &
        while(l1!=nullptr && l2!=nullptr){
            if (l1->val <= l2->val) {
                pre->next=l2;
                l2=l2->next;
            }
            else{
                pre->next=l1;
                l1=l1->next;
            }
            pre=pre->next;
        }
        if(l2!=nullptr) pre->next=l2;
        if(l1!=nullptr) pre->next=l1;
        return p->next;
    }
 };