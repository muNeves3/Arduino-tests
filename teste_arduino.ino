// Nome das saidas
#define azul  2
#define verde 3
#define rosa  4
#define botao 5
#define buzzer 6

#define g 13
#define f 12
#define a 11
#define b 10
#define e 9
#define d 8
#define c 1
#define dp 0



void acendeA();// Funçao que controla o acendimento do led Azul
void acendeV();// Funçao que controla o acendimento do led verde
void acendeR();// Função que controla o acendimento de led que tá sobrando
void espera(); // Funçao delay

unsigned long tempoA = 0; // Variavel para armazenar o tempo do LED AZUL
unsigned long tempoV = 0; // Variavel para armazenar o tempo do LED VERDE
unsigned long tempoR = 0; // Variavel para armazenar o tempo do LED VERDE

bool comutarA = false;
bool comutarV = false;
bool comutarR = false;

void setup() {
  pinMode(azul, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(rosa, OUTPUT);
  pinMode(botao, INPUT_PULLUP);
  pinMode(buzzer, OUTPUT);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(dp, OUTPUT);
}

void loop() {
  acendeA();
  acendeV();
  acendeR();
  espera();
  acendebuzzer();
  acenderled();
}

void acendeA() {
  if (comutarA) {
    digitalWrite(azul, !digitalRead(azul)); // Comando que comuta o estado do pino, se era alto vira baixo e vice-versa
    tempoA = millis();
    comutarA = false;
  }
}

void acendeV() {
  if (comutarV) {
    digitalWrite(verde, !digitalRead(verde)); // Comando que comuta o estado do pino, se era alto vira baixo e vice-versa
    tempoV = millis();
    comutarV = false;
  }
}

void acendeR() {
  if (comutarR) {
    digitalWrite(rosa, !digitalRead(rosa));
    tempoR = millis();
    comutarR = false;
  }
}

void espera() {
  //-------LED Azul
  if (!comutarA && millis() - tempoA >= 500) {
    comutarA = true;
  }
  //-------LED Verde
  if (!comutarV && millis() - tempoV >= 100) {
    comutarV = true;
  }

  if (!comutarR && millis() - tempoR >= 1000)
    comutarR = true;
}

void acendebuzzer() {
   if (digitalRead(botao) == LOW) {
    digitalWrite(buzzer, HIGH);
  }
  else {
   digitalWrite(buzzer, LOW);
  }
}

void acenderled() {
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(c, HIGH);

 

 digitalWrite(a,HIGH); //acende osHIGHeds que representam o número 2
digitalWrite(b,HIGH);
digitalWrite(c, LOW);
digitalWrite(d,HIGH);
digitalWrite(e,HIGH);
digitalWrite(f, LOW);
digitalWrite(g,HIGH);

 
digitalWrite(a,HIGH); //acende osHIGHeds que representam o número 3
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e, LOW);
digitalWrite(f, LOW);
digitalWrite(g,HIGH);

  
digitalWrite(a, LOW); //acende osHIGHeds que representam o número 4
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d, LOW);
digitalWrite(e, LOW);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);


digitalWrite(a,HIGH); //acende osHIGHeds que representam o número 5
digitalWrite(b, LOW);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e, LOW);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
 

digitalWrite(a, LOW); //acende osHIGHeds que representam o número 6
digitalWrite(b, LOW);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e,HIGH);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
 

digitalWrite(a,HIGH); //acende osHIGHeds que representam o número 7
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d, LOW);
digitalWrite(e, LOW);
digitalWrite(f, LOW);


digitalWrite(a,HIGH); //acende osHIGHeds que representam o número 8
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e,HIGH);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
 

digitalWrite(a,HIGH); //acende osHIGHeds que representam o número 9
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d, LOW);
digitalWrite(e, LOW);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
 
}