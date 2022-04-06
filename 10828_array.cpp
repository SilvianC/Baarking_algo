#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[MX];
int pos = 0;

void push(int x) {
    dat[pos++] = x;
}

void pop(){
    /*
    dat[pos--] = 0; 
    dat[pos]는 변경할 필요가 없음
    */
    pos--;   
}

int top(){
    return dat[pos-1];
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N; // test case 입력을 항상 하기
    
    while(N--){
        string s;
        cin >> s;

        if(s == "push"){
            int k;
            cin >> k;
            push(k);
        }
        else if(s == "pop"){
            if(pos == 0)
                cout << "-1" << '\n';
            else{
                cout << top() << '\n';
                pop();
            }
        }
        else if(s == "size")
            cout << pos << '\n';
        else if(s == "empty"){
            if(pos == 0)
                cout << '1' << '\n';
            else
                cout << '0' << '\n';
        }
        else if(s == "top"){
            if(pos == 0)
                cout << "-1" << '\n';
            else
                cout << top() << '\n';
        }
    }
}