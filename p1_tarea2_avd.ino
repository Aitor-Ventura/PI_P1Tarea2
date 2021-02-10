/* Programa que haga parpadear los digitos de manera
 *  unidades -> decenas -> centenas -> uds. millar
 */
void setup() {
  DDRA=B11111111;
  // Activamos los LEDS
  pinMode(49,OUTPUT);
  pinMode(48,OUTPUT);
  pinMode(47,OUTPUT);
  pinMode(46,OUTPUT);

  // Apagados inicialmente
  pinMode(49,LOW);
  pinMode(48,LOW);
  pinMode(47,LOW);
  pinMode(46,LOW);
}

void loop() {
  PORTA=0xFF;
  // Encendemos
  pinMode(49,HIGH);
  // Que emita tono
  tone(200,200,200);
  // Esperamos
  delay(1000);
  // Apagamos
  pinMode(49,LOW);

  // Así con cada uno
  pinMode(48,HIGH);
  tone(200,200,200);
  delay(1000);
  pinMode(48,LOW);
  
  pinMode(47,HIGH);
  tone(200,200,200);
  delay(1000);
  pinMode(47,LOW);
  
  pinMode(46,HIGH);
  tone(200,200,200);
  delay(1000);
  pinMode(46,LOW);
}
