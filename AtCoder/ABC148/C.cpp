#include<bits/stdc++.h>
using namespace std;

int main(){
  long long A,B,g;
  cin >> A >> B;
  g=__gcd(A,B);
  A /=g;
  B /=g;
  cout << A*B*g << endl;
}
