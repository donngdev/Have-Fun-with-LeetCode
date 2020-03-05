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
    // Space complexity: O(n)  // set
    ListNode* removeDuplicateNodes(ListNode* head)
    {
      ListNode* dummy_head = new ListNode(-1);
      dummy_head->next = head;

      ListNode* prev = dummy_head;
      ListNode* curr = head;

      unordered_set<int> record;
      while (curr)
      {
        if (record.find(curr->val) != record.end())
        {
          ListNode* del_node = curr;
          prev->next = del_node->next;
          curr = del_node->next;
          delete del_node;
          del_node = NULL;
        }
        else
        {
          record.insert(curr->val);
          prev = curr;
          curr = curr->next;
        }
      }
      ListNode* r = dummy_head->next;
      delete dummy_head;
      dummy_head = NULL;

      return r;
    }
};