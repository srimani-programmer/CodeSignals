#include<iostream>
#include<vector>

std::string fancyRide(int l, std::vector<double> fares) {
    std::string s[5] = {"UberX","UberXL","UberPlus","UberBlack","UberSUV"};
    int res = 0;
    double cost;
    for(int i=0;i<fares.size();i++){
        cost = 0.0;
        cost = cost + (l * fares[i]);
        if(cost <= 20)
            res = i; 
        else
            break;
    }
    
    return s[res];
}
