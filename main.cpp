#include <iostream>
#include <iomanip>
#include <fstream>
#include <chrono>
#include <ratio>
#include <vector>
#include <list>
#include <set>
#include <algorithm> // used for "sort()"

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

    // deleting the middle element from the vector

    start = chrono::high_resolution_clock::now();
    vector_example.erase(vector_example.begin() + vector_midpoint); // CITED from https://cplusplus.com/reference/vector/vector/erase/ to learn how to use ".erase()" function
    end = chrono::high_resolution_clock::now();
    auto duration_vector_delete = duration_cast<microseconds>(end - start);

    // ----------------------------------------------

    ifstream fin_list("codes.txt");
    list<string> list_example;
    // reading the file into the list
    start = chrono::high_resolution_clock::now();
    for (int i = 0; i < 20000; i++){
        getline(fin_list, temp_string);
        list_example.push_back(temp_string);
    }
    end = chrono::high_resolution_clock::now();
    auto duration_list_read = duration_cast<microseconds>(end - start);
    fin_list.close();

    // sorting the list
    start = chrono::high_resolution_clock::now();
    list_example.sort();
    end = chrono::high_resolution_clock::now();
    auto list_example_sort = duration_cast<microseconds>(end - start);

    // inserting "TESTCODE" into the middle of the list
    int list_midpoint = list_example.size();
    list_midpoint = list_midpoint / 2;
    auto list_iter = list_example.begin();
    for (int i = 0; i < )

    start = chrono::high_resolution_clock::now();
    list_example.insert(list_midpoint, TEST_CODE);

    return 0;
}

/* syntax examples:
auto start = high_resolution_clock::now()
auto end = high_resolution_clock::now()
auto duration = duration_cast<milliseconds>(end - start)
duration.count() references elapsed milliseconds
*/