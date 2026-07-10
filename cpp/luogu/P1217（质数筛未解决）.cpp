#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;


bool huiwenshu(int n) {
    string s = to_string(n);
    string s1 = s;
    reverse(s1.begin(), s1.end()); 
    return s == s1; 
}

bool zhishu(int n) {
    if (n < 2){
    return false;

    } 
    if (n % 2 == 0) {
        return n == 2;
    }
    
    int a = sqrt(n);
    for (int i = 3; i <= a; i += 2) {
        if (n % i == 0) {
            return false;
        } 
    }
    return true;
}

int main() {
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        if (huiwenshu(i) && zhishu(i)) {
            cout << i << endl;
        }
    }

    return 0;
}
