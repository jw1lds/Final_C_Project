#include "proj.h"

void piano() {
//*These are the variables used in the program. There are 2 octave values because the first two *//
//*notes on the scale are an octave lower than the rest. There are 2 note values because one note is*//
//*recieved from the keyboard and the other is the piano note which is printed to the user. x is*//
//*2 to some power because each octave's frequency is double the last and this value is multiplied with the frequency. These declarations/definitions were written by JACKSON WILDS*//
	int oct = 3;
	int oct2 = 4;
	int x;
	char note1;
	char note;
	double freq;
	//*This prints the initial instructions and graphics and was written by JULIA TOSCANO*//
	printf("\nWelcome to Piano! Below is a display of the piano notes and their corresponding keys on the keyboard. The highest letter is the key on the keyboard and the\nlower letter(s) represents the note and octave. The program will also display\nthe current note underneath the piano. To stop playing the current note, press\nSPACE. Press numbers 1-7 to select the octave. Press ESC to exit. Enjoy!");
	printf("\n|     |   |     |     |   |   |   |     |     |   |   |   |   |   |     |");
	printf("\n|     | W |     |     | R |   | T |     |     | U |   | I |   | O |     |");
	printf("\n|     | A#|     |     | C#|   | D#|     |     | F#|   | G#|   | A#|     |");
	printf("\n|     | Bb|     |     | Db|   | Eb|     |     | Gb|   | Ab|   | Bb|     |");
	printf("\n|     |___|     |     |___|   |___|     |     |___|   |___|   |___|     |");
	printf("\n|   A   |   S   |   D   |   F   |   G   |   H   |   J   |   K   |   L   |");
	printf("\n|   A   |   B   |   C   |   D   |   E   |   F   |   G   |   A   |   B   |");
	printf("\n|_______|_______|_______|_______|_______|_______|_______|_______|_______|");
	while (1) {
	//*The entire program is enclosed in this infinite while loop so that the program does not close*//
       //*kbhit gets the users input when a key is pressed and is a part of the conio library by JACKSON WILDS*//
		if (kbhit()) {
			note = getch();
			}
		//* switch statement and letter cases written by JACKSON WILDS and number cases written by JULIA TOSCANO*//
		//* The frequency of a note is the product of a base number and 2 to the power of the 'octave' it is in.*//
		//* first, x is designated as 2^oct*//
		//* then, the switch checks which note is pressed*//
		//* depending on the note, a 'base frequency' is multiplied by x to be played*//
		//* then, the last line of the output is overwritten to show which note is being played*//
		x = pow(2, oct);
		switch(note) {
		case 'a' :
			note1 = 'A';
			freq = 27.50*x;
			sound(freq);
			printf("\r|###%c%d##|_______|_______|_______|_______|_______|_______|_______|_______|",note1,oct);
			break;
		case 'w' :
			note1 = 'A#';
			freq = 29.14*x;
			sound(freq);
			printf("\r|_____|%c#%d|_____|_______|_______|_______|_______|_______|_______|",note1,oct);
			break;
		case 's':
			note1 = 'B';
			freq = 30.89*x;
			sound(freq);
			printf("\r|_______|###%c%d##|_______|_______|_______|_______|_______|_______|_______|",note1,oct);
			break;
		case 'd':
			note1 = 'C';
			freq = 32.70*x;
			sound(freq);
			printf("\r|_______|_______|###%c%d##|_______|_______|_______|_______|_______|_______|",note1,oct2);
			break;
		case 'r':
			note1 = 'C#';
			freq = 34.65*x;
			sound(freq);
			printf("\r|_______|_______|_____|%c#%d|_____|_______|_______|_______|_______|_______|",note1,oct2);
			break;
		case 'f':
			note1 = 'D';
			freq = 36.71*x;
			sound(freq);
			printf("\r|_______|_______|_______|###%c%d##|_______|_______|_______|_______|_______|",note1,oct2);
			break;
		case 't':
			note1 = 'D#';
			freq = 38.89*x;
			sound(freq);
			printf("\r|_______|_______|_______|_____|%c#%d|_____|_______|_______|_______|_______|",note1,oct2);
			break;
		case 'g':
			note1 = 'E';
			freq = 41.20 *x;
			sound(freq);
			printf("\r|_______|_______|_______|_______|###%c%d##|_______|_______|_______|_______|",note1,oct2);
			break;
		case 'h':
			note1 = 'F';
			freq = 43.65*x;
			sound(freq);
			printf("\r|_______|_______|_______|_______|_______|###%c%d##|_______|_______|_______|",note1,oct2);
			break;
		case 'u':
			note1 = 'F#';
			freq = 46.25*x;
			sound(freq);
			printf("\r|_______|_______|_______|_______|_______|_____|%c#%d|_____|_______|_______|",note1,oct2);
			break;
		case 'j':
			note1 = 'G';
			freq = 49.00*x;
			sound(freq);
			printf("\r|_______|_______|_______|_______|_______|_______|###%c%d##|_______|_______|",note1,oct2);
			break;
		case 'i':
			note1 = 'G#';
			freq = 51.91*x;
			sound(freq);
			printf("\r|_______|_______|_______|_______|_______|_______|_____|%c#%d|_____|_______|",note1,oct2);
			break;
		case 'k':
			note1 = 'A';
			freq = 55.00*x;
			sound(freq);
			printf("\r|_______|_______|_______|_______|_______|_______|_______|###%c%d##|_______|",note1,oct2);
			break;
		case 'o':
			note1 = 'A#';
			freq = 58.27*x;
			sound(freq);
			printf("\r|_______|_______|_______|_______|_______|_______|_______|_____|%c#%d|_____|",note1,oct2);
			break;
		case 'l':
			note1 = 'B';
			freq = 61.64*x;
			sound(freq);
			printf("\r|_______|_______|_______|_______|_______|_______|_______|_______|###%c%d##|",note1,oct2);
			break;
		case '1':
			oct = 0;
			oct2 = 1;
			break;
		case '2':
			oct = 1;
			oct2 = 2;
			break;
		case '3':
			oct = 2;
			oct2 = 3;
			break;
		case '4':
			oct = 3;
			oct2 = 4;
			break;
		case '5':
			oct = 4;
			oct2 = 5;
			break;
		case '6':
			oct = 5;
			oct2 = 6;
			break;
		case '7':
			oct = 6;
			oct2 = 7;
			break;
		  }
		//*This reprints the last line of the piano as blank when the user presses SPACE and was written by JULIA TOSCANO*//
		if ((int)note == 32) {
			printf("\r|_______|_______|_______|_______|_______|_______|_______|_______|_______|");
			}
		//*This breaks the loop and closes the program when the user presses ESC and was written by JULIA TOSCANO*//
		if ((int)note == 27) {
			break;
			}
		//*nosound ends the sound when ANY unnasigned key is pressed although the instructions suggest pressing SPACE by JULIA TOSCANO*//
		nosound();
	}
}
