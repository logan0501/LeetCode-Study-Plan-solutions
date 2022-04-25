class UndergroundSystem {
public:
    unordered_map<int,pair<string,int>> m;
    unordered_map<string,pair<int,int>> trips;
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        m[id]={stationName,t};    
    }
    
    void checkOut(int id, string stationName, int t) {
        const auto& [start,tin]=m[id];
        auto &[total,cnt]=trips[start+"->"+stationName];
        total+=t-tin;
        cnt++;
            
    }
    
    double getAverageTime(string startStation, string endStation) {
        auto [total,cnt] = trips[startStation+"->"+endStation];
        return (double)total/cnt;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */