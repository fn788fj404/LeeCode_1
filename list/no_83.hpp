
// 给你一个 已经排好序 的链表的头节点 head。
// 请你 删除链表中所有重复的节点，使得 每个元素只出现一次。

// 返回处理后的、仍然按顺序排列的链表的头节点。

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        // [1,1,2,3,3]
        // 【1，1，1】
        ListNode *tail = head;

        while (tail)
        {
            if (tail->next == nullptr)
                break;

            if (tail->val == tail->next->val)
            {
                tail->next = tail->next->next;
            }
            else
            {

                tail = tail->next;
            }
        }

        return head;
    }
};