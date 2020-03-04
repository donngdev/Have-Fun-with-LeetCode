/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    // Time complexity: O(n)
    // Space complexity: O(1)
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
      ListNode* dummy_head = new ListNode(-1);
      ListNode* prev = dummy_head;

      ListNode* p = l1;
      ListNode* q = l2;
      int carry = 0;
      while (p || q)
      {
        int a = 0, b = 0;
        if (p != NULL)
        {
          a = p->val;
          p = p->next;
        }
        if (q != NULL)
        {
          b = q->val;
          q = q->next;
        }
        
        ListNode* sum = new ListNode((a + b + carry) % 10);
        carry = (a + b + carry) / 10;
        prev->next = sum;
        prev = sum;
      }

      if (carry != 0)
      {
        ListNode* new_node = new ListNode(carry);
        prev->next = new_node;
      }

      ListNode* rp = dummy_head->next;
      delete dummy_head;
      dummy_head = NULL;

      return rp;
    }
};