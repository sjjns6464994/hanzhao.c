/**
 * struct ListNode {
 *  int val;
 *  struct ListNode *next;
 * };
 */
/**
 * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
 *
 *
 * @param head ListNode类
 * @param m int整型
 * @param n int整型
 * @return ListNode类
 */
struct ListNode* reverseBetween(struct ListNode* head, int m, int n ) {
    struct ListNode dummy;
    dummy.next = head;
    struct ListNode* pre, *cur, *next;
    pre = &dummy;  // 将 pre 初始化为 dummy 节点
    for (int i = 1; i < m; i++) {
        pre = pre->next;
    }
    cur = pre->next;

    for (int i = m; i < n; i++) {
        next = cur->next;
        cur->next = next->next;
        next->next = pre->next;
        pre->next = next;
    }
    return dummy.next;
}