#include<iostream>
#include<string>
using namespace std;
void solve()
{
	int numOfSong = 0;
	string inputString;
	int currentPage[4];
	int currentIndex = 0;
	while (cin >> numOfSong >> inputString)
	{
		currentIndex = 0;

		if (numOfSong <= 4)
		{
			for (int i = 0; i < numOfSong; i++)
			{
				currentPage[i] = i + 1;
				cout << currentPage[i];
				if (i == numOfSong - 1)cout << endl;
				else
				{
					cout << " ";
				}
			}
			for (int i = 0; i < inputString.size(); i++)
			{
				currentIndex = inputString[i] == 'U' ? --currentIndex : ++currentIndex;
				if (currentIndex == numOfSong)currentIndex = 0;
				else if (currentIndex == -1)currentIndex = numOfSong - 1;
			}
			currentIndex += 1;
			cout << currentIndex << endl;;
		}
		else
		{
			currentIndex = 1;
			int currentPageIndex = 1;
			for (int i = 0; i < inputString.size(); i++)
			{
				if (currentIndex > currentPageIndex&&currentIndex < currentPageIndex + 3)
				{
					currentIndex = inputString[i] == 'U' ? --currentIndex : ++currentIndex;
					continue;
				}
				else
				{
					if (currentIndex == currentPageIndex)
					{
						if (inputString[i] == 'U')
						{
							if (currentPageIndex == 1)
							{
								currentPageIndex = numOfSong - 3;
								currentIndex = numOfSong;
							}
							else
							{
								currentIndex = --currentPageIndex;
							}
						}
						else
						{
							currentIndex++;
						}
					}
					else if (currentIndex == currentPageIndex + 3)
					{
						if (inputString[i] == 'D')
						{
							if (currentPageIndex == numOfSong - 3)
							{
								currentPageIndex = 1;
								currentIndex = 1;
							}
							else
							{
								currentPageIndex++;
								currentIndex++;
							}
						}
						else
						{
							currentIndex--;
						}
					}

					continue;
				}

			}
			for (int i = 0; i < 4; i++)
			{
				currentPage[i] = currentPageIndex + i;
				cout << currentPage[i];
				if (i == 3)
				{
					cout << endl;
				}
				else
				{
					cout << " ";
				}
			}
			cout << currentIndex << endl;

		}

	}
}
int main(){
	solve();

	system("pause");
	return EXIT_SUCCESS;
}