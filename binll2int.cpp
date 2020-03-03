// https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/

// Solution 1: -
int getDecimalValue(ListNode* head) {
        string bin="";
        if(head==NULL) return 0;
        while(head!=NULL){
            bin+=(char)(head->val+48);
            head=head->next;
        }int dec=0,p=0;
        for(int i=bin.length()-1;i>=0;i--)
            dec+=(bin[i]-'0')*(int)pow(2,p++);
        return dec;
    }
    
//Solution 2: - (Shorter)
int getDecimalValue(ListNode* head) {
        long long dec=0;
        while(head!=NULL){
            dec*=2;
            if(head->val==1) dec++;
            head=head->next;
        }return dec;
    }
