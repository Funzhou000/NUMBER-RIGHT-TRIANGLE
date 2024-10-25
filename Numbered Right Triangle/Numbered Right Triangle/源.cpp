#include <iostream>
#include <iomanip>
using namespace std;
//void create_triangle(int n) {
//	int count = 1;
//	int m;
//	m = n;
//	for (int i = 1; i <= n; i++) {
////		for (int j =1; j <=m ; j++)
////		{
////			cout << std::setfill('0') << std::setw(2) << count;
////			count++;
////			--m;
//		}cout << endl;
//	}

//}
int main() {
	int n,m;
	cin >> n;
	int count = 1;
	m = n;
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++)
		{
			cout << std::setfill('0') << std::setw(2) << count;
			count++;
		}
		--n;
		cout << endl;
	}

	return 0;
}