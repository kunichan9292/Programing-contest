#include<iostream>
#include<vector>
using namespace std;

int main(){
  string answer; cin >> answer;
  vector<int>Number(16);
  vector<vector<int> >Cards = {
    {1,2,3,4,5,6,7,8},
    {1,2,3,4,9,10,11,12},
    {1,2,5,6,9,10,13,14},
    {1,3,5,7,9,11,13,15},
  };

  vector<vector<int> >reCards = {
    {9,10,11,12,13,14,15,16},
    {5,6,7,8,13,14,15,16},
    {3,4,7,8,11,12,15,16},
    {2,4,6,8,10,12,14,16},
  };

  for(int i=0;i<answer.size();i++){
    if(answer.at(i) == 'N'){
      for(auto num : reCards.at(i)){
        Number.at(num-1)++;
      }
    }
    else{
      for(auto num : Cards.at(i)){
        Number.at(num-1)++;
      }
    }
  }
  for(int i=0;i<16;i++){
    if(Number.at(i) == 4){
      cout << i+1 << endl;
    }
  }
}
