#define T_C 523.2511
#define T_D 587.3295
#define T_E 659.2551
#define T_F 698.4565
#define T_G 783.9909
#define T_A 880.0000
#define T_B 987.7666
#define T_C2 1046.502

#define PERIOD(f) 1000000/f
#define PERIOD_2(f) PERIOD(f)/2

const int C = 2;
const int D = 3;
const int E = 4;
const int F = 5;
const int G = 6;
const int A = 7;
const int B = 8;
const int C2 =9;
const int SPK = 10;
const int LED =11;

void Tone(int period_2){
  digitalWrite(LED, HIGH);
  digitalWrite(SPK, HIGH);
  delayMicroseconds(period_2);
  digitalWrite(SPK, LOW);
  digitalWrite(LED, LOW);
  delayMicroseconds(period_2); 
}


void setup() {
  Serial.begin(115200);
  pinMode(LED, OUTPUT);
  digitalWrite(LED, LOW);
  pinMode(SPK, OUTPUT);
  digitalWrite(SPK, LOW); 
  pinMode(C, INPUT_PULLUP);
  pinMode(D, INPUT_PULLUP);
  pinMode(E, INPUT_PULLUP);
  pinMode(F, INPUT_PULLUP);
  pinMode(G, INPUT_PULLUP);
  pinMode(A, INPUT_PULLUP);
  pinMode(B, INPUT_PULLUP);
  pinMode(C2, INPUT_PULLUP);
}

void loop() {
  if(digitalRead(C)==LOW){
    Tone(PERIOD_2(T_C));
  }
  else if(digitalRead(D)==LOW){
    Tone(PERIOD_2(T_D));
  }
  else if(digitalRead(E)==LOW){
    Tone(PERIOD_2(T_E));
  }
  else if(digitalRead(F)==LOW){
    Tone(PERIOD_2(T_F));
  }
  else if(digitalRead(G)==LOW){
    Tone(PERIOD_2(T_G));
  }
   else if(digitalRead(A)==LOW){
    Tone(PERIOD_2(T_A));
  }
  else if(digitalRead(B)==LOW){
    Tone(PERIOD_2(T_B));
  }
  else if(digitalRead(C2)==LOW){
    Tone(PERIOD_2(T_C2));
  }
}
