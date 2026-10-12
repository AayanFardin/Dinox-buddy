void display_temp_humi(){
    oled.print("Temperature: ");
  oled.println(temp);
  oled.print("Humidity: ");
  oled.println(humi);
  oled.display;

}