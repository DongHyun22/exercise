#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <vector>
#include <math.h>
#include <time.h>
#include <conio.h>
//#define do 30
//

using namespace std;

void upper_body()
{
	cout << "��Ʈ���� �Է��Ͻÿ� : ";
	int set_num = 0;
	cin >> set_num;

	vector <int> set;
	for (int i = 1; i < set_num + 1; i++)
	{
		set.push_back(i);
	}

	vector<int>::iterator it; // it�� ���� �� Ƚ���� ����Ŵ
	char c;

	for (int i = 0; i < set_num; i++)
	{
		c = _getch();
		if (c == 32 || c == 13)
			// 13 == enter
			// 32 == spacebar
		{
			if (i % 2 == 0)
			{
				it = set.end()-1; // end()�� ������ ������ ������ ����Ŵ
				cout << *it << endl;
				set.erase(it);
			}
			else
			{
				it = set.begin();
				cout << *it << endl;
				set.erase(it);
			}

		}
	}


}

void squat()
{
	cout << "��Ʈ���� �Է��Ͻÿ� : ";
	int set_num = 0;
	cin >> set_num;


	vector <int> set;

	for (int i = 1; i < set_num + 1; i++)
	{
		set.push_back(i);
	}

	vector<int>::iterator it; // it�� ���� �� Ƚ���� ����Ŵ
	srand(time(NULL));
	char c;

	for (int i = set_num - 1; i >= 0; i--)
	{
		c = _getch();
		if (c == 32 || c == 13)
			// 13 == enter
			// 32 == spacebar
		{
			it = set.begin();

			int num = rand() % (i + 1); // ���� ���� ����

			printf("%d\n", set[num]);
			for (int i = 0; i < num; i++)
				it++;
			set.erase(it);
			// ���� ���� ��� �� ���׳��� �ش� ���� ����
		}
	}
}

int main()
{
	cout << "---------------\n��ü : 1\n��ü : 2\n---------------\n";
	cout << "��� ������ �����Ͻÿ� : ";

	int exercise;
	cin >> exercise;

	switch (exercise)
	{
	case 1:
		upper_body();
		break;
	case 2:
		squat();
		break;
	}

}