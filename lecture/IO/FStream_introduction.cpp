// Corresponding Zyante chapters: File IO
// Introduces File IO
//  An introduction on how to read data from a file and write data to a file using fstreams
#include <fstream>
#include <iostream>
#include <cstdlib>

using namespace std;

const int ARRAY_CAP = 100;

void read_input(string input_filename,int scores[],int& scores_size) {
    // Open the input file
    // .c_str() converts a string to a cstring
    ifstream fin;
    fin.open(input_filename.c_str());
    
    // Check to make sure it opened properly
    if (!fin.is_open()) {
        cout << "Error opening " << input_filename << endl;
        exit(1);
    }

    // Read in the numbers from the input file and store them in an array
    int number;
    while (fin >> number) {
        scores[scores_size] = number;
        scores_size++;
    }
    // Close the input file when done working with it.
    fin.close();
}

void write_output(string output_filename,int scores[],int& scores_size) {
    // Open the output file. This is an alternative constructor that opens during initialization
    ofstream fout(output_filename.c_str());

    // We must still check if it is opened properly.
    if (!fout.is_open()) {
        cout << "Error opening " << output_filename << endl;
        // exit(1) allows us to close the program with an exit code, in this case 1 indicating an error.
        exit(1);
    }
    // Output the scores with a space between each score.
    for (int i = 0;i < scores_size;i++) {
        fout << scores[i] << ' ';
    }
    fout << endl;

    // Don't forget to close the output file when done working with it. 
    fout.close();
}

// argc contains the number of arguments provided with the command line call. If no arguments are provided it still has
// a value of 1 for the program itself.
// char* argv[] is an array of cstrings which contain the arguments provided. argv[0] is always the program itself.
int main(int argc,char* argv[]) {
    string input_filename, output_filename;

    // First you must check if the correct number of arguments were provided. We check if too many are in this case.
    if (argc > 3) {
        // If too many, report the proper usage, and then return with error code 1. (This should not be used when
        // submitting to R'Sub as it will break R'Sub
        cerr << "Error: Proper usage: " << argv[0] << " <input_filename> <output_filename>" << endl;
        return 1;
    } else if (argc == 3) {// This will check if the right number of arguments were used and set the appropriate variables
        input_filename = argv[1];
        output_filename = argv[2];
    } else { // If no arguments were provided get input from the user for what filenames to use.
        cout << "Enter name of input file: ";
        cin >> input_filename;
        cout << "Enter name of output file: ";
        cin >> output_filename;
    }

    int scores[ARRAY_CAP];
    int scores_size = 0;
    read_input(input_filename,scores,scores_size);
    cout << "Read operation completed successfully!" << endl;

    write_output(output_filename,scores,scores_size);
    cout << "Write operation completed successfully!" << endl;
    return 0;
}
