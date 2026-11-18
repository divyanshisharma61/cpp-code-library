// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
using namespace std;
int main() {

    string Adrin = "ABC";
    string Bruno = "BABC";
    string Goran = "CCAABB";
    string ans = "BAACC";
    int ma = 0,mb = 0,mg = 0;
    int n = ans.size();
    for(int i = 0;i<n;i++){
        if(ans[i]==Adrin[i%3]){
            ma++;
        }
        if(ans[i]==Bruno[i%4]){
            mb++;
        }
        if(ans[i]==Goran[i%6]){
            mg++;
        }
  
    }
    int maxMarks = max(ma,max(mb,mg));
    cout<<maxMarks<<endl;
    if(ma ==maxMarks){
        cout<<"Adrian"<<endl;
    }
    if(mb ==maxMarks){
        cout<<"Bruno"<<endl;
    }
    if(mg ==maxMarks){
        cout<<"Goran"<<endl;
    }
    
    
    
    
    return 0;
}
