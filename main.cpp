#include <iostream>
#include <fstream>
#include <chrono>
#include <ratio>
#include <vector>
#include <list>
#include <set>

using namespace std;
using namespace std::chrono;



/* NOTE: - Need to read the 20,000 lines of data from codes.txt into vector, list, and set
         - Need to sort the vector, sort the list. (Set is already sorted) 
         - Insert the value "TESTCODE" in the middle of the vecotr, middle of the list, and 
           middle of the set
         - Delete the middle element of the vector, list, and set */ 
int main() {
    
    ifstream fin("codes.txt");
    auto start = chrono::high_resolution_clock::now();
    vector<string> vector_read;
    int i = 0;
    string temp_string; 
    
    for (int i = 0; i < 20000; i++){
        getline(fin, temp_string);
        vector_read.push_back(temp_string);
    }
    fin.close();
    auto end = chrono::high_resolution_clock::now();
    auto duration_vector_read = duration_cast<microseconds>(end - start);
    
    cout << "This is the amount of elements in the vector: " << vector_read.size() << endl;
    cout << "This is how long it took in microseconds: " << duration_vector_read.count() << endl;

    return 0;
}

/* syntax examples:
auto start = high_resolution_clock::now()
auto end = high_resolution_clock::now()
auto duration = duration_cast<milliseconds>(end - start)
duration.count() references elapsed milliseconds
*/