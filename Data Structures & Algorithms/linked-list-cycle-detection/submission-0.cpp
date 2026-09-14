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
    bool hasCycle(ListNode* head) {
        if(head == nullptr)
            return false; 
        ListNode* listPtr = head;
        unordered_set<ListNode*> listSet;    
        while(listPtr != nullptr)
        {
            if(listSet.find(listPtr->next) != listSet.end())
                return true;
            else
                listSet.insert(listPtr->next); 

            listPtr = listPtr->next;
        }
        
        return false;
    }
};
