#include <bits/stdc++.h>
#define MX 5001

using namespace std;
int pre[MX];
int nxt[MX];


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,k, len = 0;
    cin >> n >> k;

    vector<int> v;

    for(int i=1;i<=n;i++){ // 인덱스를 1부터 시작해야 cursor 값이 완성 됨.
        pre[i] = (i==1)?n:i-1;
        nxt[i] = (i==n)?1:i+1;
        len++;
    }

    int i = 1;
    for(int cur = 1; len !=0; cur = nxt[cur]){
        if(i == k){
            pre[nxt[cur]] = pre[cur];
            nxt[pre[cur]] = nxt[cur];
            v.push_back(cur);
            len--;
            i = 1;
        }
        else i++;
    }
    cout << '<';
    for(size_t i = 0;i < v.size(); i++){
        cout << v[i];
        if(i != v.size() - 1) cout << ", ";
    }
    cout << '>';
}