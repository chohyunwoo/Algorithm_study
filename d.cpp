#include <bits/stdc++.h>
using namespace std;

void loop(int N){
    for(int i = 1; i <=N; i ++){ // ���� ���� ����
        for(int j = 1; j <=N -i; j++){ // ���� ���
            cout << " ";
        }
        for(int k =1 ; k <=i; k++){ // �� ���{
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
