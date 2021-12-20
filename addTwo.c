#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ListNode{
    int val;
    struct ListNode *next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    int carry = 0;
    struct ListNode *head = NULL;
    head = (struct ListNode *) malloc(sizeof(struct ListNode));
    struct ListNode *current = head;
    while(l1 || l2 != NULL){
        int x = (l1 != NULL) ? l1->val : 0;
        int y = (l2 != NULL) ? l2->val : 0;
        int sum = carry + x + y;
        carry =  sum / 10;
        struct ListNode *sumNode;
        sumNode = (struct ListNode *) malloc(sizeof(struct ListNode));
        sumNode->val = sum%10;
        current->next = sumNode;
        
        current = current->next;
        if (l1 != NULL) l1 = l1->next;
        if (l2 != NULL) l2 = l2->next;
    }
    if(carry > 0){
        struct ListNode *carryNode;
        carryNode = (struct ListNode *) malloc(sizeof(struct ListNode));
        current->next = carryNode;
        carryNode->val=carry;
    }

    return head->next;
}

struct ListNode* insertHead(struct ListNode *head, struct ListNode *elem){
    elem->next = head;
    return(elem);
}

struct ListNode *createNode(struct ListNode* p){
    p = NULL;
    p = (struct ListNode *) malloc(sizeof(struct ListNode));
    return p;
}

void printList( struct ListNode* h )
{
   while ( h != NULL )
   {
      printf(" %d\n", h->val );   	// Print

      h = h->next;			// Go to next element in list
   }

   printf("\n");
}


int main(){

    //struct ListNode *head;
    //head = (struct ListNode *) malloc(sizeof(struct ListNode));

    struct ListNode *l12;
    l12 = (struct ListNode *) malloc(sizeof(struct ListNode));
    (*l12).val = 9;
    struct ListNode *l11;
    l11 = (struct ListNode *) malloc(sizeof(struct ListNode));
    (*l11).val = 4;
    insertHead(l12, l11);
    struct ListNode *l1;
    l1 = (struct ListNode *) malloc(sizeof(struct ListNode));
    l1->val = 2;
    insertHead(l11, l1);
    //printList(l1);

    struct ListNode *l22;
    l22 = (struct ListNode *) malloc(sizeof(struct ListNode));
    (*l22).val = 4;
    struct ListNode *l21;
    l21 = (struct ListNode *) malloc(sizeof(struct ListNode));
    (*l21).val = 6;
    insertHead(l22, l21);
    struct ListNode *l2;
    l2 = (struct ListNode *) malloc(sizeof(struct ListNode));
    l2->val = 5;
    l2= insertHead(l21, l2);
    //printList(l2);
    //printf("%d", l1->val);
    addTwoNumbers(l1, l2);
    
    return 0;
}