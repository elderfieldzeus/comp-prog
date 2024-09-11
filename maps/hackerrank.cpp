#include <bits/stdc++.h>
using namespace std;


int main() {
    map<string, int> m;
    
    int size;
    cin >> size;
    
    for(int i = 0; i < size; i++) {
        int choice;
        cin >> choice;
        
        if(choice == 1) {
                string a;
                int b;
                cin >> a >> b;
                
                map<string, int>::iterator l = m.find(a);
                if(l == m.end()) {
                    m.insert(make_pair(a, b));
                }
                else {
                    int prev = m[a];
                    m.erase(a);
                    m.insert(make_pair(a, b + prev));
                }
        }
        else if(choice == 2) {
                string c;
                cin >> c;
                
                m.erase(c);
       }
       else if(choice == 3) {
                string d;
                cin >> d;
                
                map<string,int>::iterator l = m.find(d);
                cout << (l == m.end() ? 0 : m[d]) << endl;
       }
    }
    
    return 0;
}
