#include <iostream>
#include <fstream>
#include <chrono>
#include <vector>
#include <list>
#include <set>

using namespace std;

/* NOTE: - Need to read the 20,000 lines of data from codes.txt into vector, list, and set
         - Need to sort the vector, sort the list. (Set is already sorted) 
         - Insert the value "TESTCODE" in the middle of the vecotr, middle of the list, and 
           middle of the set
         - Delete the middle element of the vector, list, and set */ 
int main() {
    
    ifstream fin("codes.txt");
    auto start = chrono::high_resolution_clock::now();
    vector<string> vector_read; 
    while (getline())
    


    return 0;
}

/* syntax examples:
auto start = high_resolution_clock::now()
auto end = high_resolution_clock::now()
auto duration = duration_cast<milliseconds>(end - start)
duration.count() references elapsed milliseconds
*/