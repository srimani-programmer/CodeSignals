#include<iostream>
#include<vector>

std::vector<double> fareEstimator(int ride_time, int ride_distance, std::vector<double> cost_per_minute, std::vector<double> cost_per_mile) {
    std::vector<double> res;
    double res1;
    for(int i=0;i<cost_per_mile.size();i++){
        res1 = 0.0;
        res1 = res1 + ((ride_time * cost_per_minute[i]) + (ride_distance * cost_per_mile[i]));
        
        res.push_back(res1);
    }
        
    return res;  
}
