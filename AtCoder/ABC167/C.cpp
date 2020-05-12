#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  int N,M;
  long long X;
  cin >> N >> M >> X;
  vector<vector<int> >CA(12,vector<int>(13,0));
  for(int i=0;i<N;i++){
    for(int j=0;j<M+1;j++){
      cin >> CA.at(i).at(j);
    }
  }
  long long min=10000000;
  for(int i1=0;i1<2;i1++){
    for(int i2=0;i2<2;i2++){
      for(int i3=0;i3<2;i3++){
        for(int i4=0;i4<2;i4++){
          for(int i5=0;i5<2;i5++){
            for(int i6=0;i6<2;i6++){
              for(int i7=0;i7<2;i7++){
                for(int i8=0;i8<2;i8++){
                  for(int i9=0;i9<2;i9++){
                    for(int i10=0;i10<2;i10++){
                      for(int i11=0;i11<2;i11++){
                        for(int i12=0;i12<2;i12++){
                          vector<int>A;
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
                          A.push_back(i11);
                          A.push_back(i12);
                          vector<int>score(13);
                          for(int i=0;i<12;i++){
                            if(A.at(i)){
                              for(int j=0;j<13;j++){
                                score.at(j) += CA.at(i).at(j);
                              }
                            }
                          }
                          bool flag = true;
                          for(int i=1;i<=M;i++){
                            if(score.at(i)<X) flag = false;
                          }
                          if(flag && min>score.at(0)){
                            min = score.at(0);
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
    }
  }
  if(min==10000000) cout << "-1" << endl;
  else cout << min << endl;
}
