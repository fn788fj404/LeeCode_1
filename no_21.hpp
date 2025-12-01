/**
 * 给你两个已经排好序的链表的头结点 list1 和 list2。请你将这两个链表合并成一个新的有序链表。
 * 新链表应当通过拼接这两个链表中的节点而构成（不能新建额外节点，只能复用原节点）。返回合并后链表的头结点。
 */

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
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode dummy_list;
        ListNode *tail = &dummy_list;

        while (list1 && list2)
        {
            if (list1->val < list2->val)
            {
                tail->next = list1;
                list1 = list1->next;
            }
            else
            {
                tail->next = list2;
                list2 = list2->next;
            }

            tail = tail->next;
        }

        tail->next = list1 ? list1 : list2;
        return dummy_list.next;
    }
};