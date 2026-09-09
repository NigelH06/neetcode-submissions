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
    ListNode* nextNode = new ListNode(); 
    nextNode->val = val; 
    if(head->next == nullptr)
    {
        head->next = nextNode; 
        nextNode->next = nullptr; 
        return nextNode;
    }

    while(head->next != nullptr)
        head = head->next; 
    head->next = nextNode; 
    nextNode->next = nullptr; 
    return nextNode;
}
public:
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr)
            return nullptr; 

        vector<int> nodeVal; 
        while(head != nullptr)
        {
            nodeVal.push_back(head->val); 
            head = head->next;
        }
        reverse(nodeVal.begin(), nodeVal.end()); 
        ListNode* newHead = new ListNode(); 
        newHead->val = nodeVal[0]; 
        for(int i{1}; i < nodeVal.size(); ++i)
            ListNode* newNode = createNode(newHead, nodeVal[i]);

        return newHead;
    }
};
