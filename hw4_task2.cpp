#include <iostream>
#include <vector>

using namespace std;


void different_numbers(vector<int> &a)
{
	vector<int> help_vector;
	help_vector.push_back(a[0]);
	for (int i = 0; i < a.size(); i++)
	{
		for (int j = 0; j < help_vector.size(); j++)
		{
			if (a[i] != help_vector[j])
				help_vector.push_back(a[i]);
		}			
	}

	cout << "Your vector has " << help_vector.size() << " repeated elements" << endl;
}

void print(vector<int>& a) {

	for (int i = 0; i < a.size(); i++)
		cout << a[i] << ' ';

	cout << endl;
}


int main()
{
	vector<int> array{ 0, 1, 2, 3 };

	print(array);
	different_numbers(array);

	return 0;
}