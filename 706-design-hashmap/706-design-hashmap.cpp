class MyHashMap {
    const int size = 1e4;
	vector<vector<pair<int, int>>> map;
    public:
    MyHashMap() {
		map.resize(size);
	}
    void put(int key, int value) {
		int index = key % size;
        vector<pair<int, int>> &row = map[index];
        for(auto iter = row.begin(); iter != row.end(); iter++)
        {
            if(iter->first == key)
            {
                iter->second = value;
                return;
            }
        }
		row.push_back({key, value});
	}

	int get(int key) {
		int index = key % size;
        vector<pair<int, int>> &row = map[index];
		for (auto iter = row.begin(); iter != row.end(); iter++)
		{
			if (iter->first == key)
				return iter->second;
			
		}
		return -1;
	}

	void remove(int key) {
		int index = key % size;
        vector<pair<int, int>> &row = map[index];
		for (auto iter = row.begin(); iter != row.end(); iter++)
		{
			if (iter->first == key)
			{
				row.erase(iter);
                return;
			}
		}
	}
};