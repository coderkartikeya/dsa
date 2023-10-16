#include <iostream>
#include <string>
using namespace std;
void str(string &s,int index){
    if(index>s.size()) return;

    else if(s[index]==s[index+1]){
        s.erase(index,2);
        str(s,index);

    }
    str(s,index+1);

}

void dupi(string &s,int index){
    if(index>=s.size()){
        return;
    }

    else if(s[index]=='x'){
        s.erase(index,1);
        s=s+'x';
        dupi(s,index+1);
    }
    dupi(s,index+1);
}

int main(){
    string s="aaxaabxxbbxccc";
    int index=0;
    // str(s,index);
    dupi(s,index);
    cout<<s<<endl;
}