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
            if(l1){
                sum += l1->val;
            }
            if(l2){
                sum += l2->val;
            }
            carry = (int) sum/10;
            if(carry > 0){
                sum += carry;   
                
            }
            //sumNode-> val = sum%10; //asign accumulated sum to the node value
            ListNode(sumNode->val= sum%10, sumNode->next);
            
            sum = 0;
            
            
            //sumNode->next= sumNode;
            
            l1= l1->next;
            l2 =l2->next;
        }
        
        return sumNode;
    }
};
int main(){
    Solution x;
    ListNode b(4);
    
    ListNode l1(2, &b);
    ListNode c(6);
    ListNode l2(5, &c);
    x.addTwoNumbers(&l1, &l2);
}