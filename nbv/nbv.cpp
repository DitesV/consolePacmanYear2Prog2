#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n, m, i, j, k = 0;
	double t;
	cout << "Введите количество вершин" << endl;
	cin >> n;
	m = n;
	int  **s;
	s = new int*[n];
	for (i = 0; i<n; i++)
		s[i] = new int[m];

	for (i = 0; i<n; i++)
		for (j = 0; j<m; j++)
		{
			cout << "graf[" << i << "][" << j << "]: ";
			cin >> s[i][j];
		}
	cout << endl << "Матрица смежности" << endl;;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++)
		{
			cout << s[i][j] << " ";
		}
		cout << endl;
	}
	for (i = 0; i < n; i++) 
		for (j = 0; j < m; j++)
		{
			if (s[i][j])
				k++;
		}

		k = k / 2;
		
		int j_b = 0;
		int **b = new int*[n];
		for (i = 0; i<n; i++)
		{
			b[i] = new int[k];
			for (j = 0; j<k; j++)
				b[i][j] = 0;
		}
		for (i = 0; i < n; i++) {
			for (j = i + 1; j < n; j++)
				if (s[i][j])
				{
					b[i][j_b] = 1;
					b[j][j_b] = 1;
					j_b++;
				}
		}

		cout << endl << "Матрица инци" << endl;;
		for (i = 0; i < n; i++) {
			for (j = 0; j < k; j++)
			{
				cout << b[i][j] << " ";
			}
			cout << endl;
		}

		char ch[11] = { '1','2','3','4','5','6','7','8','9','10','11' };
		string c[20];
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				if (s[i][j])
					c[i] = c[i] + ch[j];
			}
			}

		for (i = 0; i < n; i++)
			cout << 'l' << i+1 << " = " << c[i] << endl;
	system("pause");
	return 0;
}