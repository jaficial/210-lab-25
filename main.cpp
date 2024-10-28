#include <iostream>
#include <iomanip>
#include <fstream>
#include <chrono>
#include <ratio>
#include <vector>
#include <list>
#include <set>

using namespace std;
using namespace std::chrono;

int menu();
void output(string, string, string, string);

void output(string read_result = "", string sort_result = "", string insert_result = "", string delete_result = ""){
    cout << setw(10) << "Operation" << setw(10) << "Vector" << setw(10) << "List" << setw(10) << "Set" << endl;
    cout << 
}
/* NOTE: - Need to read the 20,000 lines of data from codes.txt into vector, list, and set
         - Need to sort the vector, sort the list. (Set is already sorted) 
         - Insert the value "TESTCODE" in the middle of the vecotr, middle of the list, and 
           middle of the set
         - Delete the middle element of the vector, list, and set */ 
int main() {
    ifstream fin_vector("codes.txt");
    auto start = chrono::high_resolution_clock::now();
    vector<string> vector_;
    string temp_string; 
    // reading for vector:
    for (int i = 0; i < 20000; i++){
        getline(fin_vector, temp_string);
        vector_read.push_back(temp_string);
    }
    fin_vector.close();
    auto end = chrono::high_resolution_clock::now();
    auto duration_vector_read = duration_cast<microseconds>(end - start);

    start = chrono::high_resolution_clock::now();
    // reading for list:
    ifstream fin_list("codes.txt");




    


    return 0;
}

/* syntax examples:
auto start = high_resolution_clock::now()
auto end = high_resolution_clock::now()
auto duration = duration_cast<milliseconds>(end - start)
duration.count() references elapsed milliseconds
*/