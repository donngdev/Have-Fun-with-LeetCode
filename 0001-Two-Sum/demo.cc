#include <iostream>
#include <unordered_map>
 
int main()
{
    std::unordered_map<int,int> example = {{1,2},{2,4}};
 
    if(example.find(2) != example.end()) {
        std::cout << "Found\n";
    } else {
        std::cout << "Not found\n";
    }
}