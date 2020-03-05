// https://leetcode.com/problems/reverse-linked-list/

// Solution 1: - (Using Queue)
void fastIO(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    ListNode* reverseList(ListNode* head) {
        fastIO();
        queue<int> q;
        while(head!=NULL){
            q.push(head->val);
            head=head->next;
        }
        while(!q.empty()){
            ListNode* temp=new ListNode(q.front());
            q.pop();
            temp->next=head;
            head=temp;
        }
        return head;
    }
    
// Solution 2: -
void fastIO(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    ListNode* reverseList(ListNode* head) {
        fastIO();
        if(head==NULL) return NULL;
        if(head->next==NULL) return head;
        ListNode *prev=NULL,*curr=head,*next;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }return prev;
    }
