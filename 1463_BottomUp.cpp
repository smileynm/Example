//1463�� ���� <Bottom-up ���>
#define _NO_CRT_SECURE_WARNINGS
#include <iostream>
using namespace std;
int d[1000000];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;

	cin >> n;

	d[1] = 0;	// �ʱ�ȭ�� ���ؼ��� ��Ÿ�����ִ� ���� ���� ����
	for (int i = 2; i <= n; i++)
	{
		d[i] = d[i - 1] + 1;		//N -> N-1
		if (i % 2 == 0 && d[i] > d[i / 2] + 1)
		{
			d[i] = d[i / 2] + 1;	// N-> N/2
		}
		if (i % 3 == 0 && d[i] > d[i / 3] + 1)
		{
			d[i] = d[i / 3] + 1;	// N-> N/3
		}
	}
	cout << d[n];
	
}

//Bottom-up
//1. ������ ũ�Ⱑ ���� �������� ���ʴ�� Ǭ��.
//2. ������ ũ�⸦ ���ݾ� ũ�� ����鼭 ������ ���� Ǭ��.
//3. ���� ������ Ǯ�鼭 �Ա� ������, ū ������ �׻� Ǯ �� �ִ�.
//4. �ݺ��ϴ� ���� ���� ū ������ Ǯ �� �ִ�.
