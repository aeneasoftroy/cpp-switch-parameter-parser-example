/*
Program name: C++ switch parameter parser example
Program date: 15-December-2017
Compiler: GNU GCC (Code::Blocks 13.12)
Coder: Stephan van de Kerkhof
Description: Example of a C++ switch parameter parser that translates given switches to variables for your code to work with
Remarks: no additional libraries required
*/
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
// When we pass char arrays as parameters they must be pointers
int main(int argc, char* argv[]) {
    std::string myPath, myFile, myOutPath;
    if (argc < 5) { // Check the value of argc. If not enough parameters have been passed, display a usage example and exit. It's set to 5 because we need 4 actual parameters, argv[0] is always the name of the program being ran, 1-4 being what we actually need, adds up to 5.
        std::cout << "Usage: "<< argv[0] << " " << "-in <infile> -out <outdir>" << endl; // usage example
        std::cin.get();
        return(0);
    } else { // When there are enough parameters we proceed:
        std::cout << argv[0];
        for (int i = 1; i < argc; i++) { // We scan / iterate over argv[] to get the parameters provided by the user.
            if (i + 1 != argc){
                // Use strcomp for comparing the values, remember that strcomp returns 0 when true.
                // We take the argv[i] value provided next (argv[i]+1) of the given switch as value of that switch.
                if(strcmp(argv[i], "-f") == 0 ){
                    myFile = argv[i + 1];
                }else if(strcmp(argv[i], "-p") == 0 ) {
                    myPath = argv[i + 1];
                }else if(strcmp(argv[i], "-o") == 0 ) {
                    myOutPath = argv[i + 1];
                }
            }
            //Display the value of each switch:
            std::cout << argv[i] << " ";
        }
        }
        //Add here more action to perform
        std::cin.get();
        return 0;
    }
