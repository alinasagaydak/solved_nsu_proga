#include <iostream>
#include <string>

using namespace std;

int count_f(const string& str) {
    int cnt = 0;
    for (size_t i = 0; i < str.size(); ++i) {
        if (str[i] == 'f') {
            ++cnt;
            if (cnt == 2) return i;
        }
    }
    if (cnt == 1) {return -1;}

    return -2;
}

int main() {
    string str;
    cin >> str;
    cout << count_f(str);
    return 0;
}
