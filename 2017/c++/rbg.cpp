#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

std::vector<char> generateNextRow(std::string row){
    std::vector<char> colours = {'R','B','G'};

    std::vector<std::vector<char>> pairs;
    for (int i = 0; i < row.size()-1;i++){
        std::vector<char> value = {row[i],row[i+1]};
        pairs.push_back(value);
    }

    std::vector<char> nextRow;
    for (int i = 0; i < pairs.size();i++){
        // std::cout << pairs[i][0] << pairs[i][1] << " ";
        if (pairs[i][0] == pairs[i][1]){
            nextRow.push_back(pairs[i][0]);
        } else {
            std::vector<char> coloursCopy = colours;
            coloursCopy.erase(std::remove(coloursCopy.begin(), coloursCopy.end(), pairs[i][0]), coloursCopy.end());
            coloursCopy.erase(std::remove(coloursCopy.begin(), coloursCopy.end(), pairs[i][1]), coloursCopy.end());
            nextRow.push_back(coloursCopy[0]);
        }
    }
   return nextRow;
}

int main(){
    std::vector<char> nextRow = generateNextRow("RBRGBRB");
    for (int i = 0; i < nextRow.size(); i++){
        std::cout << nextRow[i] << "\n";
    }
}

