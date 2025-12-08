
/** Given the heads of two singly linked-lists headA and headB, return the node at which the two lists intersect. If the two linked lists have no intersection at all, return null. */
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

#include <unordered_set>

class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        /**
         * 只要有一个next指针相同，肯定相交
         * 先用一个unordered_set保存A所有的next节点，再遍历B看是否出现过
         */

        // std::unordered_set<ListNode *> ptr_set;

        // while (headA)
        // {
        //     ptr_set.insert(headA);
        //     headA = headA->next;
        // }

        // while (headB)
        // {
        //     if (ptr_set.count(headB))
        //     {
        //         return headB->next;
        //     }
        //     headB = headB->next;
        // }

        // return nullptr;

        /** 空间指针切换法 */

        ListNode *ptr_1 = headA;
        ListNode *ptr_2 = headB;

        while (ptr_1 != ptr_2)
        {
            ptr_1 = ptr_1 ? ptr_1->next : headB;
            ptr_2 = ptr_2 ? ptr_2->next : headA;
        }

        return ptr_1;
    }
};