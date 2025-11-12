const int o1 = 2; 
const int o2 = 3;
const int o3 = 4;
const int o4 = 5;    // Pin que detecta si el circuito está abierto o cerrado
const int led1 = 10;
const int led2 = 11;
const int led3 = 12;
const int led4 = 13;       // LED indicador

void setup() {
  pinMode(o1, INPUT_PULLUP);
  pinMode(o2, INPUT_PULLUP);
  pinMode(o3, INPUT_PULLUP);
  pinMode(o4, INPUT_PULLUP); // Activamos resistencia pull-up interna
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int estado1 = digitalRead(o1);
  int estado2 = digitalRead(o2);
  int estado3 = digitalRead(o3);
  int estado4= digitalRead(o4);

  
if (estado1 == HIGH) { 
    // Circuito abierto
    digitalWrite(led1, LOW);
  } else { 
    // Circuito cerrado
    digitalWrite(led1, HIGH);
    Serial.print("se desconecto!");
  }
 
if (estado2 == HIGH) { 
    // Circuito abierto
    digitalWrite(led2, LOW);
  } else { 
    // Circuito cerrado
    digitalWrite(led2, HIGH);
    Serial.print("se desconecto!");
  } 
  if (estado3 == LOW) { 
    // Circuito abierto
    digitalWrite(led3, HIGH);
  } else { 
    // Circuito cerrado
    digitalWrite(led3, LOW);
    Serial.print("se desconecto!");
  }
  if (estado4 == HIGH) { 
    // Circuito abierto
    digitalWrite(led4, LOW);
  } else { 
    // Circuito cerrado
    digitalWrite(led4, HIGH);
    Serial.print("se desconecto!");
  }
}
