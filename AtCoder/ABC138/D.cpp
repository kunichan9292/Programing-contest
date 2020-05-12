#include<iostream>
#include<vector>
using namespace std;

int main(){
  int N; cin >> N;
  int Q; cin >> Q;
  vector<int> G(N+1);
  for(int i=0;i<N-1;i++){
    int A,B;
    cin >> A >> B;
    G.at(B) = A;
  }
  vector<long long>X(N+1,0);
  for(int i=0;i<Q;i++){
    int p,x;
    cin >> p >> x;
    X.at(p) += x;
  }
  vector<long long>ans(N+1);
  for(int i=1;i<=N;i++){
    ans.at(i) = X.at(i) + ans.at(G.at(i));
    if(i==N) cout << ans.at(i) << endl;
    else cout << ans.at(i) << ' ';
  }
}
