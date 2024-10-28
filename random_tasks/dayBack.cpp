#include <bits/stdc++.h>

using namespace std;

int getMinutes(string s) {
    string::iterator it = find(s.begin(), s.end(), ':');
    
    *it = ' ';
    
    stringstream ss(s);
    
    int hours, minutes;
    
    ss >> hours >> minutes;
    
    return minutes + hours * 60;
}

int main() {
    
    string time;
    cout << "Enter time: ";
    cin >> time;
    
    int minutes = getMinutes(time);
    
    cout << "Enter bring back time: ";
    string bringback;
    
    cin >> bringback;
    
    int bMinutes = getMinutes(bringback);
    
    int dayMinutes = 60 * 24;
    
    int days = bMinutes / dayMinutes;
    bMinutes %= dayMinutes;
    
    int ans = 0;
    
    if(bMinutes > minutes) {
        days++;
        bMinutes -= minutes;
        ans = dayMinutes - bMinutes;
    }
    else {
        ans = minutes - bMinutes;
    }
    
    if(days > 0) {
        cout << "You went back " << days << "day/s" << endl;
    }
    
    int nHours = ans / 60;
    int nMinutes = ans % 60;
    
    cout << "New time is: " << nHours << ":";
    printf("%02d", nMinutes);
}
