#include<iostream>
using namespace std;

int main(){
  int X;
  cin >> X;
  int five_hundred = X/500;
  int five = X%500/5;
  cout << 1000*five_hundred + 5*five << endl;  
}
