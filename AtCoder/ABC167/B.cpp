#include<iostream>
using namespace std;

int main(){
 int A,B,C;
 long long K;
 cin >> A >> B >> C >> K;
 if(A>=K) cout << K << endl;
 else if(A+B >=K) cout << A << endl;
 else cout << A-K+(A+B) << endl;
}
