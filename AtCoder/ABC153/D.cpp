#include<iostream>
#include<bitset>
using namespace std;

int main(){
  long long H;
  cin >> H;
  bitset<64> HP(H);
  int top;
  for(int i=63;;i--){
    if(HP.test(i)){
      top=i;
      break;
    }
  }
  HP.set();
  long long ans = (HP>>(63-top)).to_ullong();
  cout << ans << endl;
}
