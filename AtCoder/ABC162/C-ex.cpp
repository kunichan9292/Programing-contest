#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int x, int y, int z){
  int a = __gcd(x, y);
  int b = __gcd(a, z);
  return b;
}

int main() {
	int k = 0;
	cin >> k;
	int a = 0;
	for(int i = 1; i <= k; i++ )
		for(int j = 1; j <= k; j++)
			for (int n = 1; n <= k; n++) {
				a += gcd(i, j, n);
			}
	cout << a << endl;
	return 0;
}
