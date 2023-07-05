#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
   int ts; cin >> ts;
   while (ts--){
        int num; cin >> num;
        int m = 0;
        vector <int> piranha;
        for (size_t i = 0; i < num; i++)
        {
            int n; cin >> n;
            m = max(m, n);
            piranha.push_back(n);
        }

        int pos = 0;
        for(int i=0; i<num; i++){
            if( (piranha[i] > piranha[i-1] && piranha[i] == m) && (i > 0) ){
                pos = i+1;
                break;
            }
            else if( (piranha[i] > piranha[i+1] && piranha[i] == m) && (i < num-1) ){
                pos = i+1;
                break;
            }
        }
        if(pos > 0){
            cout<<pos<<endl;
        }
        else{
            cout<<-1<<endl;
        }
   }
}