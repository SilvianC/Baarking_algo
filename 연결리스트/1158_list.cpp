#include <bits/stdc++.h>

using namespace std;

int main(){ 
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, k;
    cin >> t >> k;

    list<int> L;

    for(int i=1;i<=t;i++) L.push_back(i);
    cout << '<';

    list<int>::iterator it = L.begin();
    while(L.size() != 1){
        
        for(int i=0;i<k-1;i++){
            it++;
            if(it == L.end())
                it = L.begin();
        }
        cout << *it << ", ";
        it = L.erase(it); // erase 함수의 반환값이 삭제 원소 
        if(it == L.end())
            it = L.begin(); // 끝의 요소 다음이 list.end()인 경우
    }
    cout << *it << '>' << '\n';
}