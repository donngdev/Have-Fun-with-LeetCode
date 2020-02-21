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
    // Space commplexity: O(1)
    bool isPalindrome(ListNode* head)
    {
      if (head == NULL || head->next == NULL)
        return true;

      ListNode* slow = head;
      ListNode* fast = head;
      while (fast->next != NULL && fast->next->next != NULL)
      {
        slow = slow->next;
        fast = fast->next->next;
      }
      slow->next = reverse_list(slow->next);
      // head  - slow->next
      ListNode* curr = head;
      slow = slow->next;
      while (slow != NULL)
      {
        if (curr->val != slow->val)
          return false;
        else
        {
          curr = curr->next;
          slow = slow->next;
        }
      }

      return true;
    }
 private:
   ListNode*  reverse_list(ListNode* head)
   {
    if (head == NULL)
      return NULL;
    ListNode* prev = NULL;
    ListNode* curr = head;
    while (curr)
    {
      ListNode* next_node = curr->next;
      curr->next = prev;
      prev = curr;
      curr = next_node;
    }
    return prev;
   }
};


