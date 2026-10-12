void dino(){

 
 if (lastSwitch1 == HIGH && s1 == LOW) {
    if (!gameStarted || gameOver) {
      gameStarted = true;
      gameOver = false;
      dinoY = 45;
      velocity = 0;
      cactusX = 128;
      score = 0;
      jumping = false;
    }
  }
  lastSwitch1 = s1;

  // SWITCH 2: Jump and detect double press
  if (lastSwitch2 == HIGH && s2 == LOW && gameStarted) {
    unsigned long now = millis();

    if (now - lastPressTime < 350) {
      pressCount++;

      if (pressCount >= 2) {
        gameStarted = false;
        gameOver = false;
        pressCount = 0;
        lastPressTime = 0;
      }
    } else {
      pressCount = 1;
    }

    lastPressTime = now;

    if (!jumping && !gameOver) {
      velocity = -8;
      jumping = true;
    }
  }
  lastSwitch2 = s2;

  // Wait briefly to see whether the press is a double press
  if (pressCount == 1 &&
      millis() - lastPressTime > 350) {
    pressCount = 0;
  }

  // START SCREEN
  if (!gameStarted) {
    display.clearDisplay();
    display.setTextColor(SSD1306_WHITE);

    display.setTextSize(2);
    display.setCursor(15, 10);
    display.print("DINO GAME");

    display.setTextSize(1);
    display.setCursor(12, 40);
    display.print("Switch 1: Start");

    display.display();
    delay(20);
    return;
  }

  // GAME OVER SCREEN
  if (gameOver) {
    display.clearDisplay();
    display.setTextColor(SSD1306_WHITE);

    display.setTextSize(2);
    display.setCursor(10, 15);
    display.print("GAME OVER");

    display.setTextSize(1);
    display.setCursor(35, 40);
    display.print("Score: ");
    display.print(score);

    display.display();
    delay(20);
    return;
  }

  // DINO JUMP PHYSICS
  dinoY += velocity;
  velocity++;

  if (dinoY >= 45) {
    dinoY = 45;
    velocity = 0;
    jumping = false;
  }

  // MOVE CACTUS
  cactusX -= 3;

  if (cactusX < -8) {
    cactusX = 128;
    score++;
  }

  // COLLISION
  if (cactusX < 25 && cactusX > 5 && dinoY > 34) {
    gameOver = true;
  }

  // DRAW SCREEN
  display.clearDisplay();

  // Ground
  display.drawLine(0, 57, 127, 57, SSD1306_WHITE);

  // Dinosaur
  display.fillRect(12, dinoY, 12, 10, SSD1306_WHITE);
  display.fillRect(19, dinoY - 7, 9, 9, SSD1306_WHITE);
  display.drawPixel(25, dinoY - 4, SSD1306_BLACK);

  // Legs
  display.drawLine(15, dinoY + 10, 13, dinoY + 12,
                   SSD1306_WHITE);
  display.drawLine(21, dinoY + 10, 23, dinoY + 12,
                   SSD1306_WHITE);

  // Cactus
  display.fillRect(cactusX, 43, 5, 14, SSD1306_WHITE);
  display.fillRect(cactusX - 3, 48, 3, 4, SSD1306_WHITE);
  display.fillRect(cactusX + 5, 46, 3, 4, SSD1306_WHITE);

  // Score
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(90, 5);
  display.print("S:");
  display.print(score);

  display.display();
  delay(35);
}