#include <iostream>

struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        int sum = 0;
        ListNode* sumNode = new ListNode;
        ListNode* head = sumNode;

        while(l1 != nullptr || l2 != nullptr){
            sum = 0;
            if(carry > 0){ //check whether there's positive numbers to add into sum
                sum += carry;
                carry = 0;
            }
            if(l1 !=nullptr){
                sum += l1->val;
            }
            if(l2 !=nullptr){
                sum += l2->val;
            }
            carry = (int) sum/10;

            //creating new node
            ListNode* nextNode = new ListNode;
            ListNode(sumNode->val= sum%10); //assign accumulated sum to the node value
            if(l1 != nullptr || l2 != nullptr){
                sumNode->next = nextNode;
                sumNode= sumNode->next;
            }
            if(l1 != nullptr){
            l1= l1->next;
            }
            if(l2 != nullptr){
            l2 =l2->next;
            }
        }
        if(carry>0){
            head->next = new ListNode(carry);
        }
        return head;
    }
};
int main(){
    Solution x;
    /*
    ListNode f(9);
    ListNode e(9, &f);
    ListNode d(9, &e);
    ListNode c(9, &d);
    ListNode b(9, &c);
    ListNode a(9, &b);
    ListNode l1(9, &a);
    ListNode i(9);
    ListNode h(9, &i);
    ListNode g(9, &h);
    ListNode l2(9, &g);
    */
    
    ListNode b(3);
    ListNode a(4, &b);
    ListNode l1(2, &a);

    ListNode d(4);
    ListNode c(6, &d);
    ListNode l2(5, &c);
    x.addTwoNumbers(&l1, &l2);

}