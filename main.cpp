#include <iostream>
#include <iomanip>
#include <fstream>
#include <chrono>
#include <ratio>
#include <vector>
#include <list>
#include <set>
#include <algorithm>

using namespace std;
using namespace std::chrono;

string TEST_CODE = "TESTCODE";

// void output(string, string, string, string);

// void output(string read_result = "", string sort_result = "", string insert_result = "", string delete_result = ""){
//     cout << setw(10) << "Operation" << setw(10) << "Vector" << setw(10) << "List" << setw(10) << "Set" << endl;
//     cout << 
// }
/* NOTE: - Need to read the 20,000 lines of data from codes.txt into vector, list, and set
         - Need to sort the vector, sort the list. (Set is already sorted) 
         - Insert the value "TESTCODE" in the middle of the vecotr, middle of the list, and 
           middle of the set
         - Delete the middle element of the vector, list, and set */ 
int main() {

    ifstream fin_vector("codes.txt");
    auto start = chrono::high_resolution_clock::now();
    vector<string> vector_example;
    string temp_string; 
    // reading file into the vector:
    for (int i = 0; i < 20000; i++){
        getline(fin_vector, temp_string);
        vector_example.push_back(temp_string);
    }
    fin_vector.close();
    auto end = chrono::high_resolution_clock::now();
    auto duration_vector_read = duration_cast<microseconds>(end - start);

    // sorting the vector
    start = chrono::high_resolution_clock::now();
    sort(vector_example.begin(), vector_example.end()); // CITED from "Lesson Code: STD::vector" module from canvas
    end = chrono::high_resolution_clock::now();
    auto duration_vector_sort = duration_cast<microseconds>(end - start);

    // inserting "TESTCODE" into the middle of the vector
    int vector_midpoint = vector_example.size();
    vector_midpoint = (vector_midpoint / 2) - 1; // -1 since range is between 0-19999
    
    start = chrono::high_resolution_clock::now();
    vector_example.insert(vector_example.begin() + vector_midpoint, TEST_CODE);
    end = chrono::high_resolution_clock::now();
    auto duration_vector_insert = duration_cast<microseconds>(end - start);

    //

    // reading for list:
    // ifstream fin_list("codes.txt");




    


    return 0;
}

/* syntax examples:
auto start = high_resolution_clock::now()
auto end = high_resolution_clock::now()
auto duration = duration_cast<milliseconds>(end - start)
duration.count() references elapsed milliseconds
*/