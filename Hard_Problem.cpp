#include <iostream>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    
    while(t--){
        int m, a, b, c;
        cin >> m >> a >> b >> c;
        
        int primeiro = m;
        int segundo = m;
        int ans = 0;
        
        ans += min(primeiro, a);
        primeiro -= min(primeiro, a);
        
        ans += min(segundo, b);
        segundo -= min(segundo, b);
        
        ans += min(c, primeiro + segundo);
        
        cout << ans << endl;
    }
    
    
    return 0;
}