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
    struct compare{
        bool operator()(ListNode* l1,ListNode* l2){
            return l1->val>l2->val;
        }
    };
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        priority_queue<ListNode*,vector<ListNode*>,compare >pq;
        if(lists.size()==0)
        {
            return nullptr;
        }
        for(int i=0;i<lists.size();i++)
        {
            ListNode* k=lists[i];
            while(k!=nullptr)
            {
                pq.push(k);
                k=k->next;
            }
        }
        ListNode* head=nullptr;
        ListNode* prev;
        while(!pq.empty())
        {
           if(head==nullptr){
              prev=pq.top();
              head=prev;
           }
           else{
               prev->next=pq.top();
               prev=prev->next; 
           }
           pq.pop();
        }
        if(head!=nullptr)
        prev->next=nullptr;
        return head;
    }
};