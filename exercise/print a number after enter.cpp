#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <vector>
#include <math.h>
#include <time.h>
#include <conio.h>
//#define do 30

using namespace std;

void draw_Card()
{

}

int main()
{
	int doo = 0;
	cin >> doo;


	vector <int> card;

	for (int i = 1; i < doo + 1; i++)
	{
		card.push_back(i);
	}

	vector<int>::iterator it;
	srand(time(NULL));
	char c;

	for (int i = doo - 1; i >= 0; i--)
	{
		c = _getch();
		if (c == 13 || c == 32)
		{
			it = card.begin();

			int num = rand() % (i + 1);
			//printf("%d ", i);
			//printf("%d ", num);
			printf("%d\n", card[num]);
			for (int i = 0; i < num; i++)
				it++;
			it = card.erase(it);
		}
	}
}