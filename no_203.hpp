
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

/** Given the head of a linked list and an integer val, remove all the nodes of the linked list that has Node.val == val, and return the new head. */
class Solution
{
public:
    ListNode *removeElements(ListNode *head, int val)
    {
        ListNode dummy;
        dummy.next = head;
        ListNode *cur = &dummy;

        while (cur->next)
        {
            if (cur->next->val == val)
            {
                cur->next = cur->next->next;
            }
            else
            {
                cur = cur->next;
            }
        }

        return dummy.next;
    }
};