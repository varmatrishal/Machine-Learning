// Trishal Varma

#include <iostream>
#include <string>
#include <fstream>
#include <istream>
#include <iomanip>
#include <vector>

int main(int argc, char * argv[]) {
    
    std::ifstream inFS;
    std::ofstream file;
    std::string line;
    std::string rm_in, medv_in;
    const int MAX_LEN = 1000;
    std::vector<double> rm(MAX_LEN);
    std::vector<double> medv(MAX_LEN);

    std::cout << "Opening file." << std::endl;
    inFS.open("Boston.csv");
    
    int numObservations = 1000;
    while (inFS.good()) {
        
        getline(inFS, rm_in);
        getline(inFS, medv_in);
        
        rm.at(numObservations) = stof(rm_in);
        medv.at(numObservations) = stof(medv_in);
        
        numObservations++;
    }
    
    std::cout<< "stats for medv"<<std::endl;
// sum it all up
    
    std::cout<< "stats for rm"<<std::endl;
    
    //fund dum.
}

