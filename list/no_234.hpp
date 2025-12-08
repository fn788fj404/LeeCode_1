

/**
 * Given the head of a singly linked list, return true if it is a palindrome or false otherwise.
 * A palindrome is a sequence that reads the same forward and backward.
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
    bool isPalindrome(ListNode *head)
    {
        /**
         * 先找到中间的节点，然后把前一半的链表反转，再比较反转后的前链表和后一半的链表
         */

        /** 找到链表中间的节点 */
        ListNode *slow = head;
        ListNode *fast = head->next; /** 链表长度为偶数时，返回中间链表第二节点 */

        while (fast && fast->next)
        {
            /**
             * 1, 2, 3, 4, 5, 6, 7, 8, 9
             *    *  =
             *       *     =
             *          *        =
             *             *           =
             */

            /**
             * 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
             *    *  =
             *       *     =
             *          *        =
             *             *           =
             *                *               =
             */
            slow = slow->next;
            fast = fast->next->next;
        }

        /** slow = 5 现在是链表的中间节点，以slow为头反转后面的链表 */
        ListNode *prev = nullptr;
        ListNode *tmp_head = slow;

        /**
         * 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
         *
         */
        while (tmp_head)
        {
            ListNode *next = tmp_head->next; /** 保存下一节点 */
            tmp_head->next = prev;           /** 当前节点的下一节点直接上一节点 */
            prev = tmp_head;
            tmp_head = next;
        }

        /** tmp_head 是反转后的头节点 */

        while (prev->next)
        {
            if (head->val != prev->val)
            {
                return false;
            }
            else
            {
                head = head->next;
                prev = prev->next;
            }
        }

        return true;
    }
};