void setup()
{
  lcdBegin(); // This will setup our pins, and initialize the LCD
  setContrast(40); // Good values range from 40-60
  clearDisplay(0);
  updateDisplay();
  digitalWrite(9, LOW);//BL trigger
}


void loop()
{
  println_animated("Hello! Let's check console capabilities:");
  println("");
  delay(1000);
  
  println_animated("> print()"); delay(500);
  print("One "); delay(500);
  print("Two "); delay(500);
  print("Three"); delay(1000);
  println(""); println("");
  
  println_animated("> println()"); delay(500); 
  println("One "); delay(500);
  println("Two "); delay(500);
  println("Three"); delay(1000);
  println("");

  println_animated("> print_animated()"); delay(1000);
  print_animated("One "); delay(500);
  print_animated("Two "); delay(500);
  print_animated("Three"); delay(1000);
  println(""); println("");

  println_animated("> println_animated()"); delay(1000);
  println_animated("One "); delay(500);
  println_animated("Two "); delay(500);
  println_animated("Three"); delay(1000);
  println(""); println("");

  println_animated("> print int"); delay(1000);
  print(228); print(" "); delay(500);
  print(1488); print(" "); delay(500);
  print(-42); print(" "); delay(500);
  println("");  println("");


  println_animated("> print float"); delay(1000);
  print(2.88f); print(" "); delay(500);
  print(1.488f); print(" "); delay(500);
  println(""); println("");


  println_animated("> print double"); delay(1000);
  print(2.88d); print(" "); delay(500);
  print(1.488d); print(" "); delay(500);
  println(""); println("");


  println_animated("> print bool"); delay(1000);
  print(true); print(" "); delay(500);
  print(false); print(" "); delay(500);
  println(""); println("");


  println_animated("> print all animated"); delay(1000);
  print_animated(true); print(" "); delay(500);
  print_animated(1488); print(" "); delay(500);
  print_animated(14.4f); print(" "); delay(500);
  print_animated(50.5d); print(" "); delay(500);
  println(""); println("");


  println_animated("> println all animated"); delay(1000);
  println_animated(true); delay(500);
  println_animated(1488); delay(500);
  println_animated(14.4f); delay(500);
  println_animated(50.5d); delay(500);
  println(""); println("");
  
  
  println_animated("Make fun!=)"); delay(5000);
}

