/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
    ListNode* DeleteLinkList(ListNode* head)
    {
        head -> val = head -> next-> val;
        head -> next = head -> next -> next;
        return head;
    }
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
    ListNode* cur = head;
    while (cur != nullptr && cur -> next != nullptr)
    {
        if (cur-> val == cur -> next -> val)
        {
            DeleteLinkList(cur);
        }
        else
        {
            cur = cur -> next;
        }
    }    
    return head;
    }
};