// https://leetcode.com/problems/defanging-an-ip-address/

string defangIPaddr(string address) {
        string defAddress="";
        for(int i=0;i<address.length();i++){
            if(address[i]!='.') defAddress+=address[i];
            else defAddress+="[.]";
        }return defAddress;
    }
