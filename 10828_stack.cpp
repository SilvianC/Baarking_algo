#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N;
    cin >> N;

    stack<int> S;
    while(N--){
        string c;

        cin >> c;
        if(c == "push"){
            int k;
            cin >> k;
            S.push(k);
        }
        else if(c == "pop"){
            if(S.empty())
                cout << -1 << '\n';
            else {
                cout<< S.top() << '\n';
                S.pop();
            }
        }
        else if(c == "size")
            cout << S.size() << '\n';
        else if(c == "empty"){
            if(S.empty()) 
                cout << '1' << '\n';
            else 
                cout << '0' << '\n';
        }
        else if(c == "top"){
            if(S.empty())
                cout << "-1" << '\n';
            else
                cout << S.top() << '\n';
        }
    }

}