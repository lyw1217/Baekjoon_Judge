#include<iostream>
#include<algorithm>
#include<utility>

using namespace std;

//void swap(int x[], int index_1, int index_2, int y[]) {
//	int temp = x[index_1];
//	x[index_1] = x[index_2];
//	x[index_2] = temp;
//
//	// ���� �� �� x, y��ǥ�� �Բ� �̵��ϰԲ�
//	temp = y[index_1];
//	y[index_1] = y[index_2];
//	y[index_2] = temp;
//}
//
//int partition(int x[], int start, int end, int y[]) {
//	// �迭�� �߰������� ���������� ����
//	int pivot = x[(start + end) / 2];
//
//	while (start <= end) { // �������� ������ �����Ǵ� ������ �ݺ��� ����
//		while (x[start] < pivot) start++;
//		// �������� ���������� �� ���� ���� ���� ������ �������� ���������� �̵�
//		while (x[end] > pivot) end--;
//		// ������ ���������� �� ū ���� ���� ������ ������ �������� �̵�
//		if (start <= end) { // �̵��ϴ� �������� �����Ǿ����� �ٽ� Ȯ�����ְ�
//			// �������� �ʾҴٸ� �������� ������ ���� ����
//			swap(x, start, end, y);
//			// �׸��� �ٽ� �������� ����������, ������ �������� �̵���Ű�鼭 �ݺ�
//			start++;
//			end--;
//		}
//	}
//	return start;
//}
//
//void quickSort(int x[], int start, int end, int y[]) {
//	// ������ ���� ���ۺκ��� �˷��ִ� partition �Լ�
//	int part_right = partition(x, start, end, y);
//
//	// ������ �ϴ� �߿�, ������ ���� ������ �ٷ� ����ĭ�� �������̶��
//	// ���� ���� �� ĭ¥�� ���̹Ƿ� ���̻� ������ �ʿ� ����
//	if (start < part_right - 1) {
//		// �׷� ���� ��Ƽ���� ������ ������ ������ ��Ƽ���� ������ �ٷ� ������ �̵�
//		quickSort(x, start, part_right - 1, y);
//	}
//	// ������ ��Ƽ���� ���ۺκ��� �������� ���� �� �� ����
//	// ���࿡ ������ ��Ƽ���� ���ۺκ��� �����̶� �������ٸ� ������ ���� ��ĭ¥�� ��
//	if (part_right < end) {
//		// �׷� ������ ��Ƽ���� ���ۺκк��� �������� �ٽ� ����
//		quickSort(x, part_right, end, y);
//	}
//
//}

int main() {
	int n, x, y;
	pair<int, int> pos[100000];
	/*int* x_pos = new int[100000];
	int* y_pos = new int[100000];*/

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		/*scanf("%d %d", &x_pos[i], &y_pos[i]);*/
		scanf("%d %d", x, y);
		pos[i] = { x, y };
	}

	/*quickSort(x_pos, 0, n - 1, y_pos);
	quickSort(y_pos, 0, n - 1, x_pos);*/

	for (int i = 0; i < n; i++) {
		/*printf("%d %d\n", x_pos[i], y_pos[i]);*/
	}

	/*delete[] x_pos;
	delete[] y_pos;*/

	return 0;
}