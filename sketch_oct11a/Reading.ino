void reading(){
  float temp = dht.readtemperature();
   float humi = dht.readhumidity();

  int switch1 = digitalRead(switch1pin);
  int switch2 = digitalRead(switch2pin);
}