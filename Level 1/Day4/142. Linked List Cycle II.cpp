/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
         unordered_map<ListNode*,int> vis;
        while(head){
            if(vis.find(head)!=vis.end())return head;
            vis[head]=1;
            head = head->next;
        }
        return NULL;
    }
};
