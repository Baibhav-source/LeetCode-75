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
    ListNode* middleNode(ListNode* head) {
        ListNode *temp = new ListNode();
        ListNode *temp1 = new ListNode();
        temp = head;
        temp1 = head;
        int i = 0;
        while(temp!=NULL){
            i++;
            temp = temp -> next;
        }

        int mid;
        mid = i/2;
        while(mid != 0){
            temp1 = temp1 -> next;
            mid--;
        }
        head = temp1;
        return head;

    }
};
