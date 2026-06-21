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
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
    ListNode* tempNode = new ListNode(0);
    tempNode -> next = head;
    ListNode* cur = tempNode;
    while (cur -> next != nullptr)
    {
        if (cur->next->val != val && cur -> next != nullptr)
        {
        cur = cur->next;
        }
        else
        {
        ListNode* temp = cur->next;
        cur -> next = cur ->next->next;
        }
    }
    ListNode* NewHead = tempNode -> next;
    delete tempNode;
    return NewHead;
    
    }
};