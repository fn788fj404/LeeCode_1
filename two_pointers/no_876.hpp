
#include <vector>

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

/** Given the head of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the second middle node.
 */
class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        std::vector<ListNode *> node_set;

        while (head)
        {
            node_set.push_back(head);
            head = head->next;
        }

        return node_set[node_set.size() / 2];
    }
};

/** 双指针 ， 快慢指针的解法 */
class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        ListNode *ptr_1 = head;
        ListNode *ptr_2 = head;

        while (ptr_2 && ptr_2->next)
        {
            ptr_1 = ptr_1->next;
            ptr_2 = ptr_2->next->next;
        }

        return ptr_1;
    }
};