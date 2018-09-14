/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) 
{
  if(!head || !head->next)
    return head;
  struct ListNode *temp = head;
  while(temp->next)
  {
    if(temp->val == temp->next->val)
    {
      struct ListNode *del = temp->next;
      temp->next = temp->next->next;
      free(del);
      continue;
    }
    temp = temp->next;
  }
  
  return head;
}

