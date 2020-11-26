#include <iostream>
using namespace std;

struct sign
{
	char text[100];
	int width;
	int height;
}r;

void draw(int, int, char*);

int main()
{
	cin.getline(r.text, 100);
	cin >> r.width >> r.height;
	draw(r.width, r.height, &r.text[0]);

	return 0;
}

void draw(int w, int h, char* t)
{
	int l = strlen(t), s1, s2;
	s1 = (w - 2 - l) / 2;
	s2 = w - 2 - l - s1;

	if (w != 0 && h != 0)
	{
		for (int i = 0;i < h - 1;i++)
		{
			if (i == h / 2)
			{
				cout << "*";
				for (int k = 0;k < s1;k++) cout << " ";
				cout << t;
				for (int k = 0;k < s2;k++) cout << " ";
				cout << "*" << endl;
			}
			for (int j = 0;j < w;j++)
			{
				if (i == 0 || i == h - 2 || j == 0 || j == w - 1) cout << "*";
				else cout << " ";
			}
			cout << endl;
		}
	}
}