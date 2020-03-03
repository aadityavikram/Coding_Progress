// https://leetcode.com/problems/robot-return-to-origin/

bool judgeCircle(string moves) {
        int x=0,y=0;
        for(auto c:moves){
            if(c=='U') y++;
            if(c=='D') y--;
            if(c=='L') x--;
            if(c=='R') x++;
        }return x==0 && y==0;
    }
