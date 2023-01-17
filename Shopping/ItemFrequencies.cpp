#include "ItemFrequencies.h"

ItemFrequencies::ItemFrequencies(vector<string>& feed)
{
	bool found = false;

	item.push_back(feed[0]);
	frequence.push_back(1);

	for (int i = 1; i < feed.size(); i++)
	{
		found = false;
		for (int j = 0; j < item.size(); j++)
		{
			if (feed[i] == item[j])
			{
				frequence[j] ++;
				found = true;
				break;
			}
			
		}

		if (!found)
		{
			item.push_back(feed[i]);
			frequence.push_back(1);
			
		}
	}
}

void ItemFrequencies :: getStats()
{
	for (int i = 0; i < item.size(); i++)
	{
		cout << item[i] << ": " << frequence[i] << endl;
	}
}