#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> nums) {
    int t = 1;
    for(auto i : nums) {
        t *= i;
    }
    
    set<int> s;

    while(t > 1) {
        for(int i = t; i > 1; i--) {
            if(t % i == 0) {
                bool z = true;
                
                for(int j = i - 1; j > 1 && z; j--) {
                    if(i % j == 0) {
                        z = false;
                    }
                }
                
                if(z) {
                    t /= i;
                    s.insert(i); 
                    break;
                }
            }
        }
    }
    
    return s.size();
}

int main() {
    vector<int> n = {2, 4, 3, 7, 10, 6};
    cout << solution(n);
}