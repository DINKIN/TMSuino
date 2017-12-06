

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
#define BUZZER (2)

const int outpins[6] = { O1, O2, O3, O4, O5, O6 };
const int inpins[6] = { I1, I2, I3, I4, I5, I6 };
int value = 0;
const int threshold = 1020;
int ledState = 0;
int cnt = 2;

void beep() {
digitalWrite(BUZZER, HIGH);
delay(60);
digitalWrite(BUZZER, LOW);
delay(100);
}

void beeeep() {
digitalWrite(BUZZER, HIGH);
delay(300);
digitalWrite(BUZZER, LOW);
delay(150);
}

void toggleLED() {
    ledState = 1 - ledState;
    digitalWrite(LED, ledState);
}

void error() {
    digitalWrite(BUZZER, HIGH);
    //endless loop toggling LED
    while (true) {
        toggleLED();
        delay(100);  
    }
}

//argument is 1..6, *not* 0..5
void deactivate(int coil) {
    digitalWrite(outpins[coil-1], LOW);
}

//argument is 1..6, *not* 0..5
void activate(int coil) {
    digitalWrite(outpins[coil-1], HIGH);
}

//argument is 1..6, *not* 0..5
void writeAndCheckInput(int coil) {
    activate(coil);
    delay(50); //wait for the inpin to pull up
    value = analogRead(inpins[coil-1]);
    //Serial.println(value);
    if (value < threshold) error();
    value = analogRead(A0);
    //Serial.println(value);
    if (value < threshold) error();
    value = analogRead(A5);
    //Serial.println(value);
    if (value < threshold) error();
}

void setup() {
  //Serial.begin(9600);
  pinMode(LED, OUTPUT);
  digitalWrite(LED, LOW);
  pinMode(BUZZER, OUTPUT);
  digitalWrite(BUZZER, LOW);
  
  for (int i=0; i < 6; i++) {
      pinMode(outpins[i], OUTPUT);
      pinMode(inpins[i], INPUT);
      digitalWrite(outpins[i], LOW);
  }
  
  activate(1);
  activate(6);
  digitalWrite(LED, HIGH);
  beeeep(); beep(); beeeep();
}

void loop() {
  deactivate(cnt);
  cnt = cnt + 1;
  if (cnt >= 6) cnt=2;
  writeAndCheckInput(cnt);
  delay(200); //overall delay should be close to 250ms
}

