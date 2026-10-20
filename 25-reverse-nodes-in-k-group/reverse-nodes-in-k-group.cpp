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

    ListNode* findKthNode(ListNode* temp,int k){
        k-=1;

        while(temp!=NULL && k>0){

             k--;
            temp=temp->next;
           
        }
        return temp;

    }


    ListNode* reverse(ListNode* temp){
        if(temp==NULL || temp->next==NULL) return temp;
       
        ListNode* newhead= reverse(temp->next);

        ListNode* front=temp->next;
        front->next=temp;
        temp->next=NULL;
        

        return newhead;
    }


    ListNode* reverseKGroup(ListNode* head, int k) {


        ListNode* temp=head;
        ListNode* prevLast=NULL;
        ListNode* kthNode,*nextNode;
        

        while(temp!=NULL){
            ListNode* kthNode=findKthNode(temp,k);
            if(kthNode==NULL){
                if(prevLast){
                    prevLast->next=temp;
                }
                break;
            }
            nextNode=kthNode->next;
            kthNode->next=NULL;
            reverse(temp);

            if(temp==head){
                head=kthNode;
            }
            else{
                prevLast->next=kthNode;
            }
            prevLast=temp;
            temp=nextNode;

        }

        return head;


    




        

        

        
    }
};