// https://leetcode.com/problems/reverse-string/

// Solution 1: -
void reverseString(vector<char>& s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        for(int i=0;i<s.size()/2;i++){
            char ch=s[i];
            s[i]=s[s.size()-1-i];
            s[s.size()-1-i]=ch;
        }
    }
    
// Solution 2: - (Two pointers)
ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int low=0,high=s.size()-1;
        while(low<high){
            char ch=s[low];
            s[low]=s[high];
            s[high]=ch;
            low++; high--;
        }
    }
