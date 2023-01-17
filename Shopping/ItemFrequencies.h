#ifndef ITEMFREQUENCIES_H
#define ITEMFREQUENCIES_H
#include<vector>
#include<string>
using namespace std;

class ItemFrequencies
{
	private:
		vector<int> frequence;
		vector<string> item;
	public:
		ItemFrequencies(vector<string> feed);
};
#endif
