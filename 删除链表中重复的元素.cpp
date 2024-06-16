/**
 * struct ListNode {
 *  int val;
 *  struct ListNode *next;
 * };
 */

class Solution {
  public:
    /**
     *
     * @param head ListNode类
     * @return ListNode类
     */
    ListNode* deleteDuplicates(ListNode* head) {
        // write code here
        /*if (!head || !head->next) return head;
        if(head->val==head->next->val){
            return nullptr;
        }
         ListNode *start = head;
         while (start && start->next) {
            if (start->val == start->next->val) {
                 ListNode *tmp = start->next;
                 start->next = start->next->next;
                 delete tmp;
             } else start = start->next;
         }
         return head;*/
        //https://blog.csdn.net/No_one_z/article/details/109634379
        if (head == nullptr || head->next == nullptr)return head;
        ListNode* newHead = new ListNode(1);
        newHead->next = head;
        ListNode* pre = newHead;
        ListNode* cur = head;
        int count = 0;
        while (cur && cur->next) {
            if (cur->val == cur->next->val) {
                cur = cur->next;
                count++;
            } else {
                if (count > 0) {
                    pre->next = cur->next;
                    cur = cur->next;
                    count = 0;
                } else {
                    pre = pre->next;
                    cur = cur->next;
                }
            }
        }
        if (count > 0) {
            pre->next = cur->next;
        }
        return newHead->next;
    }
};



















