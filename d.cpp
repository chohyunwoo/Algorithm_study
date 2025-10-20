#include <bits/stdc++.h>
using namespace std;

void loop(int N){
    for(int i = 1; i <=N; i ++){ // 행의 수를 제어
        for(int j = 1; j <=N -i; j++){ // 공백 출력
            cout << " ";
        }
        for(int k =1 ; k <=i; k++){ // 별 출력{
            cout << "*";
        }
        cout << "\n";
    }
}
int main(){
    int N;
    cin >> N;
    loop(N);
    
}
