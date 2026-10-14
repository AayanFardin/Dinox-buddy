# Dinox-buddy
Dinox Buddy is a little robot I'm building to explore robotics, electronics, and programming and for the Half-Life program by Hack Club. The reason itz name is dino cuz you can literary PLAY THAT DINO GAME IN THIS SMALL DISPLAY. Through this project, I learnt the use of OLED, and MPU6050(motion sensor) especially and make my robotics passion more!!!

This is just a progress and am excited to take it to a next level.

<img width="992" height="851" alt="image" src="https://github.com/user-attachments/assets/e30f9291-5e82-4232-a9ff-bf151efd2b06" />


# Features
- Shows animated eyes with different expressions.
- Reacts when the robot is shaken.
- Measures the temperature and humidity around it and displays it always
- Lets you play a dinosaur game on the OLED screen.
  
IN total this Dinox buddy displays the robot's expressions, sensor readings, and game.

# Schametic
- **ESP32:** Controls the whole robot.
- **OLED Display:** Shows the eyes, sensor readings, and game.
- **MPU6050:** Detects shaking and movement.
- **DHT11:** Measures temperature and humidity.
- **Push Buttons (×2):** Control the dinosaur game.
- **Jumper Wires:** Connect all the components.

  Below is the schematic pic SO THAT YOU can have a LOOK in advance
- <img width="1233" height="691" alt="image" src="https://github.com/user-attachments/assets/a7a2f5f8-a72a-49e4-8f29-9e770d7d020a" />

# Things to download
Try downloading the following things to view:
- **Arduino IDE:** Download it to view and upload the robot's code.
- **EasyEDA:** Download the PCB design files to explore the circuit board, or view the design directly in your **web browser**.

🔗 **Arduino IDE Download Link** (https://support.arduino.cc/hc/en-us/articles/360019833020-Download-and-install-Arduino-IDE)

# Routing
NOW here comes to routingg. 
The PCB has two layers for connecting the components using copper lines called traces. The red lines are on the top side of the board, and the blue lines are on the bottom side. These lines carry electrical signals between the components. You can view as 3D the PCB design to see how the lines connect everything together on both sides of the board. THis allows to not having problem of overlapping.

<img width="1231" height="852" alt="image" src="https://github.com/user-attachments/assets/139451ae-c401-40da-b6fa-3ceb3d62228e" />          <img width="1092" height="830" alt="image" src="https://github.com/user-attachments/assets/12a7e70b-b81b-4391-856c-a4aae93737d3" />

[You can see the routing]

# Customization
Some customization include from the actual Starbie(A robot inspired from Half-Life):
- Used FluxGarage_RoboEyes.h library instead of manual bitmap
- Used ESP 32
- Included a new feature- Dino Game

# Bill of Materials

Week,Tier,Parts funding
Week 1,Tier 1,$30.00

Component,Price (CAD),Link / Status
0.96-inch OLED Display,$3.74,https://www.aliexpress.com/item/1005012756789824.html
ESP32,$0.00,Already have
DHT11 Sensor,$0.00,Already have
MPU6050 Sensor,$3.59,https://www.aliexpress.com/item/1005013053600100.html
Buttons,$0.00,Already have
Custom PCB,$9.90,JLCPCB
Shipping,$8.27,JLCPCB
Total Cost,$25.50 CAD,
Remaining Funding,$4.50 CAD,

# Conclusion
In total this project was really a amazing experience. Although on harsh truth I made everything in ONE DAY. But enjoyed it making. And literary got a lot experience with PCB design. Juts like it..
