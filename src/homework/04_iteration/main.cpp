#include"dna.h"
#include<iostream>

int main() {

    int option;
    string dna;

    while (1) {

        cout << "\nSelect option" << endl;
        cout << "1. GC Content" << endl;
        cout << "2. DNA Complement\n" << endl;
        cout << "Enter option: ";
        cin >> option;
        cout << "Enter a DNA String: ";
        cin >> dna;

        if (option == 1) {
            double content = get_gc_content(dna);
            cout << "GC content: " << content << endl;

        }

        else if (option == 2) {
            string complement = get_dna_complement(dna);
            cout << "Complement: " << complement << endl;

        }

        else{
            cout << "Invalid input." << endl;
        }

        char ch;
        cout << "\nTo continue preess (Y/y): ";
        cin >> ch;

        if(ch == 'Y' || ch == 'y') {
            cout << "\n" << endl;
            continue;
        }

        else {
            break;
        }

    }
    return 0;
}