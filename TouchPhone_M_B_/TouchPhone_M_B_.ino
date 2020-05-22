#include "Keyboard.h"


//key functions
#define Hook 240
#define Tone KEY_ESC
#define Pause KEY_TAB//PrintScreen
#define Store 194
#define Clear 195
#define Recall 196
#define Redial 197
#define One 113
#define Two 119
#define Three 102
#define Four 97
#define Five 115
#define Six 100
#define Seven 122
#define Eight 120
#define Nine 99
#define Asterisk KEY_LEFT_SHIFT
#define Zero 32
#define Hash KEY_LEFT_CTRL
#define A 49
#define B 0
#define C 0
#define D 50
#define E 0
#define K 51
#define G 0
#define H 52
#define I 0
#define J 0

//pin mapping
#define p0 10
#define p1 16
#define p2 14
#define p3 15
#define p4 A0
#define p5 A1
#define p6 A2
#define p7 A3
#define p8 9
#define p9 8
#define p10 7
#define p11 6
#define p12 5

void setup() { // initialize the buttons' inputs:
  //Serial.begin(9600);
  // initialize mouse control:
	Keyboard.begin();
}

//polls thru each button in sections
void poll() {
	//hook
	pinMode(p11, INPUT_PULLUP);
	pinMode(p12, OUTPUT);

	digitalWrite(p12, LOW);

	if (digitalRead(p11) == LOW) {
		Keyboard.press(Hook);
	}
	else { Keyboard.release(Hook); }

	//top group
	pinMode(p10, INPUT_PULLUP);
	pinMode(p9, INPUT_PULLUP);
	pinMode(p8, INPUT_PULLUP);
	pinMode(p7, INPUT_PULLUP);
	pinMode(p6, INPUT);
	pinMode(p5, INPUT_PULLUP);
	pinMode(p4, INPUT_PULLUP);
	pinMode(p3, INPUT);
	pinMode(p2, INPUT);
	pinMode(p1, INPUT);
	pinMode(p0, OUTPUT);

	digitalWrite(p0, LOW);

	//Tone
	if (digitalRead(p10) == LOW) {
		Keyboard.press(Tone);
	}
	else { Keyboard.release(Tone); }

	//Pause
	if (digitalRead(p9) == LOW) {
		Keyboard.press(Pause);
	}
	else { Keyboard.release(Pause); }

	//Store
	if (digitalRead(p8) == LOW) {
		Keyboard.press(Store);
	}
	else { Keyboard.release(Store); }

	//Redial
	if (digitalRead(p7) == LOW) {
		Keyboard.press(Redial);
	}
	else { Keyboard.release(Redial); }

	//Clear
	if (digitalRead(p5) == LOW) {
		Keyboard.press(Clear);
	}
	else { Keyboard.release(Clear); }

	//Recall
	if (digitalRead(p4) == LOW) {
		Keyboard.press(Recall);
	}
	else { Keyboard.release(Recall); }

	//middle group
	pinMode(p10, INPUT_PULLUP);
	pinMode(p9, INPUT_PULLUP);
	pinMode(p8, INPUT_PULLUP);
	pinMode(p7, INPUT_PULLUP);
	pinMode(p6, INPUT);
	pinMode(p5, INPUT);
	pinMode(p4, INPUT);
	pinMode(p3, INPUT);
	pinMode(p2, INPUT);
	pinMode(p1, INPUT);
	pinMode(p0, INPUT);

	// group 3
	pinMode(p3, OUTPUT);
	digitalWrite(p3, LOW);

	//One
	if (digitalRead(p7) == LOW) {
		Keyboard.press(One);
	}
	else { Keyboard.release(One); }

	//Four
	if (digitalRead(p8) == LOW) {
		Keyboard.press(Four);
	}
	else { Keyboard.release(Four); }

	//Seven
	if (digitalRead(p9) == LOW) {
		Keyboard.press(Seven);
	}
	else { Keyboard.release(Seven); }

	//Asterisk
	if (digitalRead(p10) == LOW) {
		Keyboard.press(Asterisk);
	}
	else { Keyboard.release(Asterisk); }


	// group 2
	pinMode(p3, INPUT);
	pinMode(p2, OUTPUT);

	digitalWrite(p2, LOW);

	//Two
	if (digitalRead(p7) == LOW) {
		Keyboard.press(Two);
	}
	else { Keyboard.release(Two); }

	//Five
	if (digitalRead(p8) == LOW) {
		Keyboard.press(Five);
	}
	else { Keyboard.release(Five); }

	//Eight
	if (digitalRead(p9) == LOW) {
		Keyboard.press(Eight);
	}
	else { Keyboard.release(Eight); }

	//Zero
	if (digitalRead(p10) == LOW) {
		Keyboard.press(Zero);
	}
	else { Keyboard.release(Zero); }

	// group 1
	pinMode(p2, INPUT);
	pinMode(p1, OUTPUT);

	digitalWrite(p1, LOW);
	//Three
	if (digitalRead(p7) == LOW) {
		Keyboard.press(Three);
	}
	else { Keyboard.release(Three); }

	//Six
	if (digitalRead(p8) == LOW) {
		Keyboard.press(Six);
	}
	else { Keyboard.release(Six); }

	//Nine
	if (digitalRead(p9) == LOW) {
		Keyboard.press(Nine);
	}
	else { Keyboard.release(Nine); }

	//Hash
	if (digitalRead(p10) == LOW) {
		Keyboard.press(Hash);
	}
	else { Keyboard.release(Hash); }



	//bottom group
	pinMode(p10, INPUT);
	pinMode(p9, INPUT);
	pinMode(p8, INPUT);
	pinMode(p7, INPUT);
	pinMode(p6, INPUT);
	pinMode(p5, INPUT);
	pinMode(p4, INPUT);
	pinMode(p3, INPUT_PULLUP);
	pinMode(p2, INPUT_PULLUP);
	pinMode(p1, INPUT_PULLUP);
	pinMode(p0, INPUT_PULLUP);

	//group 5
	pinMode(p5, OUTPUT);
	digitalWrite(p5, LOW);

	//A
	if (digitalRead(p1) == LOW) {
		Keyboard.press(A);
	}
	else { Keyboard.release(A); }

	//B
	if (digitalRead(p2) == LOW) {
		Keyboard.press(B);
	}
	else { Keyboard.release(B); }

	//C
	if (digitalRead(p3) == LOW) {
		Keyboard.press(C);
	}
	else { Keyboard.release(C); }

	// group 6
	pinMode(p5, INPUT);
	pinMode(p6, OUTPUT);

	digitalWrite(p6, LOW);
	//F
	if (digitalRead(p0) == LOW) {
		Keyboard.press(K);
	}
	else { Keyboard.release(K); }

	//G
	if (digitalRead(p1) == LOW) {
		Keyboard.press(G);
	}
	else { Keyboard.release(G); }

	//D
	if (digitalRead(p2) == LOW) {
		Keyboard.press(D);
	}
	else { Keyboard.release(D); }

	//E
	if (digitalRead(p3) == LOW) {
		Keyboard.press(E);
	}
	else { Keyboard.release(E); }

	// group 4
	pinMode(p4, OUTPUT);
	pinMode(p6, INPUT);

	digitalWrite(p4, LOW);

	//J
	if (digitalRead(p1) == LOW) {
		Keyboard.press(J);
	}
	else { Keyboard.release(J); }

	//I
	if (digitalRead(p2) == LOW) {
		Keyboard.press(I);
	}
	else { Keyboard.release(I); }

	//H
	if (digitalRead(p3) == LOW) {
		Keyboard.press(H);
	}
	else { Keyboard.release(H); }
}

void loop() {
	poll();
}
