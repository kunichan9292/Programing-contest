#include<iostream>
using namespace std;

int main(){
  int N;
  cin >> N;
  string S;
  cin >> S;

  for(int i=0;i<S.size();i++){
    if('Z'-S.at(i)>=N){
      S.at(i)= (char) (S.at(i)+N);
    }else{
      S.at(i)= (char) (S.at(i)+N-26);
    }
    cout << S.at(i);
  }

  cout << endl;
}
