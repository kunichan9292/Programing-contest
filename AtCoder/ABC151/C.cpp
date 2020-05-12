#include<iostream>
#include<vector>
using namespace std;

int main(){
  int N,M;
  cin >> N >> M;
  vector<pair<string,bool> >p(N);

  for(int i=0;i<N;i++){
    p.at(i).first="WA";
    p.at(i).second=false;
  }

  vector<int>count(N,0);
  int input_num;
  string input_ev;
  int AC=0;
  int WA=0;

  for(int i=0;i<M;i++){
    cin >> input_num;
    cin >> input_ev;
    if(p.at(input_num-1).second==false){
      if(input_ev=="AC"){
        p.at(input_num-1).second=true;
        WA += count.at(input_num-1);
        AC++;
      }else if(input_ev=="WA"){
        count.at(input_num-1)++;
      }
    }
  }
  cout << AC << ' ' << WA << endl;
}
