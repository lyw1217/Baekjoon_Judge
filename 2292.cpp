#include<iostream>
#include<algorithm>

using namespace std;

long long int sum(long long int n) {
	long long int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += i;
	}
	return sum;
}

int main() {

	/* 
		�� ���̾�� ����.
		����� 1��, 2~7�� 2��, 8~19�� 3�� ���̾�...
		���̾��� ������ : 6 * sum(0 ~ n-1) + 1
		�������� num���� �� Ŀ���� �� ���� i���� num�� ���� ���̾�
	*/
	long long int num;
	cin >> num;
	
	for (int i = 1;; i++) {
		if ((6 * sum(i) + 1) >= num) {
			cout << i;
			break;
		}
	}

	return 0;
}