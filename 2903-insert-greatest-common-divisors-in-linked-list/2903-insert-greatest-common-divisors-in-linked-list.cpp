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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(!head->next) return head;
        else{
            addDiv(head);
        }
        return head; 
    }

    void addDiv(ListNode* head) {
    if (head->next) {
        int current = head->val;
        int next = head->next->val;
        ListNode* newNode = new ListNode(gcd(current, next));
        newNode->next = head->next;
        head->next = newNode;
        addDiv(newNode->next);
    }
}


    int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
};