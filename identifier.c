/* Identifier in C90 - MRT1, LUR (c) 2007 */

// Deklarationsdateien einbinden
#include <stdio.h>

// Funktionskopf
int main() {
	// C unterscheidet Groß-/Kleinschreibung
	int ABC;
	char abc = 1;

	// Erstes Zeichen muss ein Buchstabe (a-z,A-Z) oder ein Unterstrich sein
	double pi = 3.1415;
	double _2pi = 3.1415 * 2;

	// double 2pi;	// Erster Buchstabe darf keine Zahl sein
	// int überall = 1; // Umlaute sind nicht erlaubt

	_2pi = pi * 2;
	ABC = abc;
	return 0;
}
