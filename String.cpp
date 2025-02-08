#include<iostream>
using namespace std;
 /////////////////////////////gopal
int main(){
    int t;
    cin>>t;
    while(t--){
            string s;
        cin>>s;
        
        int count = 0;
        for(auto it : s){
            if(it == '1')
                count++;
        }
        
        cout<<count<<endl;   
    }
    return 0;
}