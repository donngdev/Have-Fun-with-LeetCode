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
    // Space complexity: (n)
    bool hasCycle(ListNode *head)
    {
      if (head == NULL)
        return false;
      unordered_set<ListNode*> record;
      ListNode* curr = head;
      while (curr != NULL)
      {
        if (record.find(curr) != record.end())
          return true;
        record.insert(curr);
        curr = curr->next;
      }
      return false;
    }
};