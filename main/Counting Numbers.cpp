#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<int> number(n);
    for(int i = 0; i < n; i++){
        cin >> number[i];
    }
    int v;
    cin >> v; //ã������ ����
    
    int count =0;
    for(int num : number){
        if(num  == v)
            count++;    
    }
    cout << count;
}
