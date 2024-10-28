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
// CITED: Cited the "main_menu" function from my Lab 23/24 submission 
int menu(){
    int choice;

    cout << endl << "Select a race that you would like to perform from the list below:" << endl;
    cout << "[1] Read" << endl;
    cout << "[2] Sort" << endl;
    cout << "[3] Insert" << endl;
    cout << "[4] Delete" << endl;
    cout << "[5] End" << endl;
    cout << "Choice --> ";
    cin >> choice;
    if ((choice < 1) || (choice >> 5)){
        cout << "Invalid Choice" << endl;
    }
    return choice;
}

/* NOTE: - Need to read the 20,000 lines of data from codes.txt into vector, list, and set
         - Need to sort the vector, sort the list. (Set is already sorted) 
         - Insert the value "TESTCODE" in the middle of the vecotr, middle of the list, and 
           middle of the set
         - Delete the middle element of the vector, list, and set */ 
int main() {
    bool race_flag = false;
    while (!race_flag){
        int menu_choice;
        menu_choice = menu();

        if (menu_choice == 5){
            race_flag = true;
        }

        // Reading race
        if (menu_choice == 1){
            cout << setw(10) << "Operation" << setw(10) << "Vector" << setw(10) << "List" << setw(10) << "Set" << endl;
            // reading for vector:
            ifstream fin("codes.txt");
            auto start = chrono::high_resolution_clock::now();
            vector<string> vector_read;
            string temp_string; 
    
            for (int i = 0; i < 20000; i++){
                getline(fin, temp_string);
                vector_read.push_back(temp_string);
            }
            fin.close();
            auto end = chrono::high_resolution_clock::now();
            auto duration_vector_read = duration_cast<microseconds>(end - start);
            cout << setw(10) << "Read" << setw(10) << duration_vector_read.count();
        }


    }


    return 0;
}

/* syntax examples:
auto start = high_resolution_clock::now()
auto end = high_resolution_clock::now()
auto duration = duration_cast<milliseconds>(end - start)
duration.count() references elapsed milliseconds
*/