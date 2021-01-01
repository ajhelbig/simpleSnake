#include <iostream>

using namespace std;

int height = 10;
int width = 20;

void draw()
{
	system("clear");


	for(int i = 0; i < width+2; ++i)
		cout << "#";

	cout << endl;

	for(int i = 0; i < height; ++i)
	{
		for(int j = 0; j < width+2; ++j)
		{
			if(j == 0) cout << "#";
			else if(j == width+1) cout << "#";
			else cout << " ";
		}

		cout << endl;
	}

	for(int i = 0; i < width+2; ++i)
		cout << "#";

	cout << endl;
}

int main(int argc, char *argv[])
{

	draw();

	return 0;
}