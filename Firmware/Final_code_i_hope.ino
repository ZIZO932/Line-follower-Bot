int ain1 = 9;
int ain2 = 6;
int bin1 = 5;
int bin2 = 3;

void setup() {
  pinMode(ain1, OUTPUT);
  pinMode(ain2, OUTPUT);
  pinMode(bin1, OUTPUT);
  pinMode(bin2, OUTPUT);
}

void loop() {
  // Test 1: Motor A forward
  analogWrite(ain1, 150);
  digitalWrite(ain2, LOW);
  digitalWrite(bin1, LOW);
  digitalWrite(bin2, LOW);
  delay(2000);

  // Stop
  digitalWrite(ain1, LOW);
  digitalWrite(ain2, LOW);
  digitalWrite(bin1, LOW);
  digitalWrite(bin2, LOW);
  delay(1000);

  // Test 2: Motor A backward
  digitalWrite(ain1, LOW);
  analogWrite(ain2, 150);
  digitalWrite(bin1, LOW);
  digitalWrite(bin2, LOW);
  delay(2000);

  // Stop
  digitalWrite(ain1, LOW);
  digitalWrite(ain2, LOW);
  digitalWrite(bin1, LOW);
  digitalWrite(bin2, LOW);
  delay(1000);

  // Test 3: Motor B forward
  digitalWrite(ain1, LOW);
  digitalWrite(ain2, LOW);
  analogWrite(bin1, 150);
  digitalWrite(bin2, LOW);
  delay(2000);

  // Stop
  digitalWrite(ain1, LOW);
  digitalWrite(ain2, LOW);
  digitalWrite(bin1, LOW);
  digitalWrite(bin2, LOW);
  delay(1000);

  // Test 4: Motor B backward
  digitalWrite(ain1, LOW);
  digitalWrite(ain2, LOW);
  digitalWrite(bin1, LOW);
  analogWrite(bin2, 150);
  delay(2000);

  // Stop
  digitalWrite(ain1, LOW);
  digitalWrite(ain2, LOW);
  digitalWrite(bin1, LOW);
  digitalWrite(bin2, LOW);
  delay(1000);
}