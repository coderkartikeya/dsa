#include <iostream>
using namespace std;
#include <vector>
void check(vector<string>&v,string s,int index){
    if(index>=s.length()){
        v.push_back(s);
        return;
    }

    for(int i=index;i<s.size();i++){
        swap(s[i],s[index]);
        check(v,s,index+1);
        //backtracking
        swap(s[i],s[index]);
    }

}

int main(){
    int n=3;
    int k=5;

    string s="";
    vector<string>v;
    int j=0;
    for(int i=1;i<=n;i++){
        s.push_back(i+'0');
        j++;
    }
    int index=0;
    check(v,s,index);

    for(string x:v){
        cout<<x<<endl;
    }

    cout<<endl;
  

    cout<<v[k-1];

    
}