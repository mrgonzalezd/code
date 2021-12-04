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
        
        while(l1 && l2 != nullptr){
            if(carry > 0){ //check whether there's positive numbers to add into sum
                sum += carry;   
                carry = 0;
            }
            if(l1){
                sum += l1->val;
            }
            if(l2){
                sum += l2->val;
            }
            carry = (int) sum/10;
            
            ListNode* nextNode = new ListNode;
            ListNode(sumNode->val= sum%10); //assign accumulated sum to the node value
            sumNode->next = nextNode;
            sumNode= sumNode->next;
            
            sum = 0;
            
            l1= l1->next;
            l2 =l2->next;
        }
        
        return sumNode;
    }
};
int main(){
    Solution x;
    ListNode c(3);
    ListNode b(4, &c);
    ListNode l1(2, &b);
    ListNode e(4);
    ListNode d(6, &e);
    ListNode l2(5, &d);
    x.addTwoNumbers(&l1, &l2);
}