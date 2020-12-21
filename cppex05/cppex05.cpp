#include <iostream>
using namespace std;
#include "getVolumeSurface.h"

int main()
{
	const int BoxCount = 3;
	BOX boxes[BoxCount];
	for (int i = 0; i < BoxCount; i++) {
		cout << "幅を入力：";
		cin >> boxes[i].x;
		cout << "高さを入力：";
		cin >> boxes[i].y;
		cout << "奥行を入力：";
		cin >> boxes[i].z;

		isSendable(&boxes[i]);
		if (boxes[i].check == true) {
			cout << boxes[i].packSize << "サイズで送れます。" << endl;
		}
		else
		{
			cout << "送れません。" << endl;
		}
	}
	return 0;
}