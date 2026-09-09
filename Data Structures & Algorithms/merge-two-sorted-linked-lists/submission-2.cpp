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
ListNode* createNode(ListNode* head, int val)
{
    ListNode* newNode = new ListNode(); 
    newNode->val = val; 
    if(head->next == nullptr)
    {
        head->next = newNode; 
        newNode->next = nullptr; 
        return newNode;
    }

    while(head->next != nullptr)
        head = head->next; 
    head->next = newNode; 
    newNode->next = nullptr; 
    return newNode; 
}
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == nullptr && list2 == nullptr)
            return nullptr;
        vector<int> mergedVal; 
        if(list1 != nullptr)
        {
            while(list1 != nullptr)
            {
                mergedVal.push_back(list1->val); 
                list1 = list1->next;
            }
        }

        if(list2 != nullptr)
        {
            while(list2 != nullptr)
            {
                mergedVal.push_back(list2->val); 
                list2 = list2->next;
            }
        }
   
        sort(mergedVal.begin(), mergedVal.end());
        ListNode* newHead = new ListNode(); 
        newHead->val = mergedVal[0]; 
        for(int i{1}; i < mergedVal.size(); ++i)
            ListNode* newNode = createNode(newHead, mergedVal[i]); 
        return newHead; 
    }
};
