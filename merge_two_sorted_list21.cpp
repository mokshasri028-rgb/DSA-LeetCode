class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* t=l1;
        ListNode* n=l2;
        ListNode* p=nullptr;
        ListNode* pre=nullptr;
        while(n!=nullptr && t!=nullptr){
            if(t->val>=n->val){
                if(p==nullptr){
                    pre=n;
                    p=pre;
                }
                else{
                    p->next=n;
                    p=p->next;
                }
                n=n->next;
            }
            else{
                if(p==nullptr){
                    pre=t;
                    p=pre;
                }
                else{
                    p->next=t;
                    p=p->next;
                }
                t=t->next;
            }
        }
        while(n!=nullptr){
            if(p==nullptr){
                 pre=n;
                    p=pre;
            }
            else{
                p->next=n;
                p=p->next;
            }
            n=n->next;
        }
        while(t!=nullptr){
                if(p==nullptr){
                    pre=t;
                    p=pre;
                }
                else{
                    p->next=t;
                    p=p->next;
                }
                t=t->next;
        }
        return pre;
    }
 };