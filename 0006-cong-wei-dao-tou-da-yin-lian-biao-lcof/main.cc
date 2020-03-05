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
    vector<int> reversePrint(ListNode* head)
    {
      ListNode* rhead = reverse(head);
      vector<int> nums;
      while (rhead)
      {
        nums.push_back(rhead->val);
        rhead = rhead->next;
      }
      return nums;
    }
 private:
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