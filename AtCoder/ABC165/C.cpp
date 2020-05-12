#include<iostream>
#include<vector>
using namespace std;

int main(){
  int N,M,Q;
  cin >> N >> M >> Q;

  vector<vector<int> >R(Q,vector<int>(4));
  for(int i=0;i<Q;i++){
    for(int j=0;j<4;j++){
      cin >> R.at(i).at(j);
    }
  }

  int MAX = 0;
  for(int i1=1;i1<M+1;i1++){
    for(int i2=i1;i1<M+1;i1++){
      for(int i3=i2;i1<M+1;i1++){
        for(int i4=i3;i1<M+1;i1++){
          for(int i5=i4;i1<M+1;i1++){
            for(int i6=i5;i1<M+1;i1++){
              for(int i7=i6;i1<M+1;i1++){
                for(int i8=i7;i1<M+1;i1++){
                  for(int i9=i8;i1<M+1;i1++){
                    for(int i10=i9;i1<M+1;i1++){
                      vector<int> A;
                      A .push_back(i1);
                      A .push_back(i2);
                      A .push_back(i3);
                      A .push_back(i4);
                      A .push_back(i5);
                      A .push_back(i6);
                      A .push_back(i7);
                      A .push_back(i8);
                      A .push_back(i9);
                      A .push_back(i10);
                      int score = 0;
                      for(int i=0;i<Q;i++){
                        if(A.at(R.at(i).at(1)+9-N)-A.at(R.at(i).at(0)+9-N) == R.at(i).at(2)){
                          score += R.at(i).at(3);
                        }
                      }
                      if(score>MAX){
                        MAX = score;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  cout << MAX << endl;
}
