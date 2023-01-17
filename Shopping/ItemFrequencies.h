#ifndef ITEMFREQUENCIES_H
#define ITEMFREQUENCIES_H
#include<vector>
#include<string>
#include<iostream>
using namespace std;

class ItemFrequencies
{
	private:
		vector<int> frequence;
		vector<string> item;
	public:
		ItemFrequencies(vector<string>& feed);
		void getStats();
};
#endif
