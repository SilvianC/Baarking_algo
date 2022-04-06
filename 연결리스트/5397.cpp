#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;

    string L;

    cin >> t;
    while(t--) {
        list<char> li = {};
        list<char>::iterator it = li.end();
        
        cin >> L; // 문자열 전체를 받아야 list의 size에 대한 정보를 알 수 있음

        for(int i=0;i<L.length();i++){
            // 1. '<'
            if(L[i] == '<' && it != li.begin())
                it--;
            // 2. '>'
            else if(L[i] == '>' && it != li.end())
                it++;
            // 3. '-'
            else if(L[i] == '-' && it != li.begin()) it = li.erase(--it); // iterator가 가리키는 것은 다음의 letter이므로 감소 시켜준뒤 iterator의 위치를 조정
            // 4. letter ( '<' 아니고 '>' 아니고 '-'아닌)
            else if(L[i] != '<' && L[i] != '>' && L[i] != '-')
                li.insert(it,L[i]);
        }
        for(auto c : li) cout << c;
        cout << '\n';        
    }
}

