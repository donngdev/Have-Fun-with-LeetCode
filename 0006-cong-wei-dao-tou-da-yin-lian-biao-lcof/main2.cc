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
    // Space complexity: O(n) // use a stack
    vector<int> reversePrint(ListNode* head)
    {
      stack<int> s;
      while (head)
      {
        s.push(head->val);
        head = head->next;
      }
      vector<int> nums;
      while (!s.empty())
      {
        nums.push_back(s.top());
        s.pop();
      }
      return nums;
    }
};