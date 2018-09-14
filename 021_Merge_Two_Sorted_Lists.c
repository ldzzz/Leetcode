/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    if(!l1) return l2;
    if(!l2) return l1;
    struct ListNode *head = malloc(sizeof(struct ListNode));
    struct ListNode *temp = head;
    
    while(l1 && l2)
    {
      if(l1->val < l2->val)
      {
        temp->val = l1->val;
        l1 = l1->next;
      }
      else
      {
       temp->val = l2->val;
        l2 = l2->next;
      }
      
      if(!l1 && l2){temp->next = l2; break;}
      if(l1 && !l2){temp->next = l1; break;}
      temp->next = malloc(sizeof(struct ListNode));
      temp = temp->next;
    }

    return head;
}
