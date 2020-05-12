#include<iostream>
#include<utility>
#include<vector>
#include<bitset>
using namespace std;

int main(){
  vector<pair<int,bitset<1> > >A(9);
  for(int i=0;i<9;i++){
    int a;
    cin >> a;
    A.at(i)=make_pair(a,0);
  }

  int N;
  cin >> N;
  for(int i=0;i<N;i++){
    int b;
    cin >> b;
    for(int j=0;j<9;j++){
      if(A.at(j).first==b){
        A.at(j).second.set();
      }
    }
  }
  if((A.at(0).second==1 && A.at(1).second==1 && A.at(2).second==1)
    ||(A.at(3).second==1 && A.at(4).second==1 && A.at(5).second==1)
    ||(A.at(6).second==1 && A.at(7).second==1 && A.at(8).second==1)
    ||(A.at(0).second==1 && A.at(3).second==1 && A.at(6).second==1)
    ||(A.at(1).second==1 && A.at(4).second==1 && A.at(7).second==1)
    ||(A.at(2).second==1 && A.at(5).second==1 && A.at(8).second==1)
    ||(A.at(0).second==1 && A.at(4).second==1 && A.at(8).second==1)
    ||(A.at(2).second==1 && A.at(4).second==1 && A.at(6).second==1)){
      cout << "Yes" << endl;
    }
    else{
      cout << "No" << endl;
    }
}
