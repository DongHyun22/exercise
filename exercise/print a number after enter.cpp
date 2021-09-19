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
	cout << "세트수를 입력하시오 : ";
	int set_num = 0;
	cin >> set_num;

	vector <int> set;
	for (int i = 1; i < set_num + 1; i++)
	{
		set.push_back(i);
	}

	vector<int>::iterator it; // it은 실행 할 횟수를 가르킴
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
				it = set.end()-1; // end()는 마지막 원소의 다음을 가르킴
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
	cout << "세트수를 입력하시오 : ";
	int set_num = 0;
	cin >> set_num;


	vector <int> set;

	for (int i = 1; i < set_num + 1; i++)
	{
		set.push_back(i);
	}

	vector<int>::iterator it; // it은 실행 할 횟수를 가르킴
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

			int num = rand() % (i + 1); // 랜덤 숫자 생성

			printf("%d\n", set[num]);
			for (int i = 0; i < num; i++)
				it++;
			set.erase(it);
			// 랜덤 숫자 출력 및 벡테내의 해당 숫자 삭제
		}
	}
}

int main()
{
	cout << "---------------\n상체 : 1\n하체 : 2\n---------------\n";
	cout << "운동할 부위를 선택하시오 : ";

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