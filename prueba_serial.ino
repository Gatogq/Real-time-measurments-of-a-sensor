int valor1;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  valor1= analogRead(A0);
  Serial.println(valor1);


}

  
