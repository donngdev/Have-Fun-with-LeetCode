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
    bool isPalindrome(ListNode* head)
    {
      ListNode* slow = head;
      ListNode* fast = head;
      while (fast)
      {
        slow = slow->next;
        fast = fast->next == NULL ? NULL : fast->next->next;
      }
      ListNode* p = head;
      ListNode* q = reverse(slow);
      while (p && q)
      {
        if (p->val != q->val)
          return false;
        else
        {
          p = p->next;
          q = q->next;
        }
      }
      return true;
    }
 private:
    // Time complexity: O(n)
    // Space complexity: O(1)
    ListNode* reverse(ListNode* head)
    {
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