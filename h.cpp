#include <iostream>
	//
#include <cstring>
//#include <array>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int p = 0; p < n; p++)
	{
		int m;
		cin >> m;
		if (m == 1)
		{
			int cnt = 1;
			string input;
			cin >> input;
			for (int i = 0; i < input.size(); i++)
			{
				if (input[i] == input[i + 1])
				{
					cnt++;
				}
				else
				{
					if (cnt != 1)
					{
						cout << input[i] << cnt;
						cnt = 1;
					}
					else
					{
						cout << input[i];
					}
				}
			}

			cout << endl;
		}
		else
		{
			string input2;
			cin >> input2;
			int i = 0;
			for (i; i < input2.size(); i++)
			{
				if (input2[i] > 64)
				{
					cout << input2[i];
				}
				else
				{
					int temp = 0;
					int cnt = 0;
					int j = i;
					for (j; j < input2.size() && input2[j] <= 64; j++)
					{
						cnt++;
                        temp *= 10;
                        temp += (input2[j] - '0');
					}

					for (int l = 0; l < temp - 1; l++)
					{
						cout << input2[i - 1];
					}

					i += cnt - 1;
				}
			}

			cout << endl;
		}
	}

	cout << endl;
}
