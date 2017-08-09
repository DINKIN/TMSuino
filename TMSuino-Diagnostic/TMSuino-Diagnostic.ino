#define O1 (11)
#define O2 (10)
#define O3 (9)
#define O4 (8)
#define O5 (7)
#define O6 (6)

#define I1 (A0)
#define I2 (A1)
#define I3 (A2)
#define I4 (A3)
#define I5 (A4)
#define I6 (A5)

#define LED (13)

const int outpins[6] = { O1, O2, O3, O4, O5, O6 };
const int inpins[13] = { I1, I2, I3, I4, I5, I6, 0, 1, 2, 3, 4, 5, 12 };
int values[6] = { 0,0,0,0,0,0 };
int value = 0;
const int threshold = 1020;
const int offthd = 10;

void printNameOfPin(int p) {
    switch(p) {
        case A0 : Serial.print("A0"); break;
        case A1 : Serial.print("A1"); break;
        case A2 : Serial.print("A2"); break;
        case A3 : Serial.print("A3"); break;
        case A4 : Serial.print("A4"); break;
        case A5 : Serial.print("A5"); break;
        default : Serial.print(p); break;
    }
}

void checkAllOff() {
    Serial.println("All outputs switched off, now checking inputs...");
    for (int i=0; i < 13; i++) {
        value = analogRead(inpins[i]);
        if (value > 5) {
            Serial.print("  There is incoming voltage on pin ");
            Serial.print(inpins[i]);
            Serial.println(" but all outputs have been turned off. This is wrong!");
        }
    }
    Serial.println("...done");
    Serial.println();
}

//argument is 1..6 !!!
void checkCoil(int coil) {
    Serial.print("  Testing coil ");
    Serial.print(coil);
    Serial.print(" on output pin ");
    Serial.println(outpins[coil-1]);
    Serial.print("    Expecting incoming voltage on input pin ");
    printNameOfPin(inpins[coil-1]); Serial.println();
    digitalWrite(outpins[coil-1],HIGH);
    delay(240);
    for (int i=0; i < 6; i++) values[i] = analogRead(inpins[i]);
    
    delay(40);
    for (int i=0; i < 6; i++) {
        value = values[i];
        Serial.print("      Incoming voltage on pin ");
        printNameOfPin(inpins[i]);
        //Serial.print(inpins[i]);
        Serial.print(" is ");
        Serial.print(value);

        if ((i == coil-1) && (value > threshold)) Serial.println(" as expected");
        if ((i == coil-1) && (value < 5)) Serial.println(" this is wrong!");
        if ((i == coil-1) && (value >= 5) && (value <= threshold)) {
            Serial.println(" this is a high resistance! Watch out for loose jumpers and defective cables!");
            Serial.println("      If this problem persists, your coil might create a field that is too strong. Did you use the specified coils ?");
        }
        if ((i != coil-1) && (value > offthd )) Serial.println(" this is wrong!");
        if ((i != coil-1) && (value <= offthd)) Serial.println(" as expected");
    }
    Serial.println();
    digitalWrite(outpins[coil-1], LOW);
    delay(200);
}

void test() {
    digitalWrite(LED, LOW);
    //checkAllOff();
    Serial.println("Activating each coil in turn and checking for inputs...");
    for (int i=0; i < 6; i++) checkCoil(i+1);
    Serial.println("...done");
    digitalWrite(LED, HIGH); 
    Serial.println("This test will be repeated in 60 seconds...");
}

void setup() {
    Serial.begin(9600);
  
    pinMode(LED, OUTPUT);
    digitalWrite(LED, LOW);
    
    for (int i=0; i < 6; i++) {
        pinMode(outpins[i], OUTPUT);
        pinMode(inpins[i], INPUT);
        digitalWrite(outpins[i], LOW);
    }
}

void loop() {
    test();
    delay(60000);
}
