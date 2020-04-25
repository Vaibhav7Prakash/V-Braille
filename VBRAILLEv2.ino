void setup() {  
    pinMode(2, OUTPUT);  
    pinMode(3, OUTPUT);  
    pinMode(4, OUTPUT);  
    pinMode(5, OUTPUT);  
    pinMode(6, OUTPUT);  
    pinMode(7, OUTPUT);  
    Serial.begin(9600);  
}  

void loop() {  
  if (Serial.available() > 0) 
  { 
   char data = Serial.read(); 
    Serial.print(" I received:");
Serial.println(data);
    if (data == 'a')
    {
        //for letter a
        digitalWrite(2, HIGH);  
        analogWrite(3, LOW);  
        digitalWrite(4, LOW);  
        digitalWrite(5, LOW);  
        digitalWrite(6, LOW);  
        digitalWrite(7, LOW);  
        delay(2000);  
        digitalWrite(2, LOW);  
        analogWrite(3, LOW);  
        digitalWrite(4, LOW);  
        digitalWrite(5, LOW);  
        digitalWrite(6, LOW);  
        digitalWrite(7, LOW); 
    } 
        
     if (data =='b')
     {
        //for letter b  
        digitalWrite(2, HIGH);  
        digitalWrite(3, LOW);  
        digitalWrite(4, HIGH);  
        digitalWrite(5, LOW);  
        digitalWrite(6, LOW);  
        digitalWrite(7, LOW);  
        delay(2000);  
        digitalWrite(2, LOW);  
        digitalWrite(3, LOW);  
        digitalWrite(4, LOW);  
        digitalWrite(5, LOW);  
        digitalWrite(6, LOW);  
        digitalWrite(7, LOW);  
     }
      if (data == 'c')
      {
        //for letter c  
        digitalWrite(2, HIGH);  
        digitalWrite(3, HIGH);  
        digitalWrite(4, LOW);  
        digitalWrite(5, LOW);  
        digitalWrite(6, LOW);  
        digitalWrite(7, LOW);  
        delay(2000);  
        digitalWrite(2, LOW);  
        digitalWrite(3, LOW);  
        digitalWrite(4, LOW);  
        digitalWrite(5, LOW);  
        digitalWrite(6, LOW);  
        digitalWrite(7, LOW);  
      }

      if (data == 'd')
      {
        //for letter D  
        digitalWrite(2, HIGH);  
        digitalWrite(3, HIGH);  
        digitalWrite(4, LOW);  
        digitalWrite(5, HIGH);  
        digitalWrite(6, LOW);  
        digitalWrite(7, LOW);  
        delay(2000);  
        digitalWrite(2, LOW);  
        digitalWrite(3, LOW);  
        digitalWrite(4, LOW);  
        digitalWrite(5, LOW);  
        digitalWrite(6, LOW);  
        digitalWrite(7, LOW);  
      }

        if (data == 'e')
      {
        //for letter E  
        digitalWrite(2, HIGH);  
        digitalWrite(3, LOW);  
        digitalWrite(4, LOW);  
        digitalWrite(5, HIGH);  
        digitalWrite(6, LOW);  
        digitalWrite(7, LOW);  
        delay(2000);  
        digitalWrite(2, LOW);  
        digitalWrite(3, LOW);  
        digitalWrite(4, LOW);  
        digitalWrite(5, LOW);  
        digitalWrite(6, LOW);  
        digitalWrite(7, LOW);  
      }
      if (data == 'f')
      {
        //for letter f  
        digitalWrite(2, HIGH);  
        digitalWrite(3, HIGH);  
        digitalWrite(4, HIGH);  
        digitalWrite(5, LOW);  
        digitalWrite(6, LOW);  
        digitalWrite(7, LOW);  
        delay(2000);  
        digitalWrite(2, LOW);  
        digitalWrite(3, LOW);  
        digitalWrite(4, LOW);  
        digitalWrite(5, LOW);  
        digitalWrite(6, LOW);  
        digitalWrite(7, LOW);  
      }
      if (data == 'g')
      {
        //for letter g  
        digitalWrite(2, HIGH);  
        digitalWrite(3, HIGH);  
        digitalWrite(4, HIGH);  
        digitalWrite(5, HIGH);  
        digitalWrite(6, LOW);  
        digitalWrite(7, LOW);  
        delay(2000);  
        digitalWrite(2, LOW);  
        digitalWrite(3, LOW);  
        digitalWrite(4, LOW);  
        digitalWrite(5, LOW);  
        digitalWrite(6, LOW);  
        digitalWrite(7, LOW);  
      }
      if (data == 'h')
      {
        //for letter h  
        digitalWrite(2, HIGH);  
        digitalWrite(3, LOW);  
        digitalWrite(4, HIGH);  
        digitalWrite(5, HIGH);  
        digitalWrite(6, LOW);  
        digitalWrite(7, LOW);  
        delay(2000);  
        digitalWrite(2, LOW);  
        digitalWrite(3, LOW);  
        digitalWrite(4, LOW);  
        digitalWrite(5, LOW);  
        digitalWrite(6, LOW);  
        digitalWrite(7, LOW);  
      }
      if (data == 'i')
      {
        //for letter i  
        digitalWrite(2, LOW);  
        digitalWrite(3, HIGH);  
        digitalWrite(4, HIGH);  
        digitalWrite(5, LOW);  
        digitalWrite(6, LOW);  
        digitalWrite(7, LOW);  
        delay(2000);  
        digitalWrite(2, LOW);  
        digitalWrite(3, LOW);  
        digitalWrite(4, LOW);  
        digitalWrite(5, LOW);  
        digitalWrite(6, LOW);  
        digitalWrite(7, LOW);  
      } 
      if (data == 'j')
      {
        //for letter j  
        digitalWrite(2, LOW);  
        digitalWrite(3, HIGH);  
        digitalWrite(4, HIGH);  
        digitalWrite(5, HIGH);  
        digitalWrite(6, LOW);  
        digitalWrite(7, LOW);  
        delay(2000);  
        digitalWrite(2, LOW);  
        digitalWrite(3, LOW);  
        digitalWrite(4, LOW);  
        digitalWrite(5, LOW);  
        digitalWrite(6, LOW);  
        digitalWrite(7, LOW);  
      }
      if (data == 'k')
      {
        //for letter k 
        digitalWrite(2, HIGH);  
        digitalWrite(3, LOW);  
        digitalWrite(4, LOW);  
        digitalWrite(5, LOW);  
        digitalWrite(6, HIGH);  
        digitalWrite(7, LOW);  
        delay(2000);  
        digitalWrite(2, LOW);  
        digitalWrite(3, LOW);  
        digitalWrite(4, LOW);  
        digitalWrite(5, LOW);  
        digitalWrite(6, LOW);  
        digitalWrite(7, LOW);  
      }
      if (data == 'l')
      {
        //for letter l 
        digitalWrite(2, HIGH);  
        digitalWrite(3, LOW);  
        digitalWrite(4, HIGH);  
        digitalWrite(5, LOW);  
        digitalWrite(6, HIGH);  
        digitalWrite(7, LOW);  
        delay(2000);  
        digitalWrite(2, LOW);  
        digitalWrite(3, LOW);  
        digitalWrite(4, LOW);  
        digitalWrite(5, LOW);  
        digitalWrite(6, LOW);  
        digitalWrite(7, LOW);  
      }
      if (data == 'm')
      {
        //for letter m 
        digitalWrite(2, HIGH);  
        digitalWrite(3, HIGH);  
        digitalWrite(4, LOW);  
        digitalWrite(5, LOW);  
        digitalWrite(6, HIGH);  
        digitalWrite(7, LOW);  
        delay(2000);  
        digitalWrite(2, LOW);  
        digitalWrite(3, LOW);  
        digitalWrite(4, LOW);  
        digitalWrite(5, LOW);  
        digitalWrite(6, LOW);  
        digitalWrite(7, LOW);  
      }
       if (data == 'n')
      {
        //for letter j  
        digitalWrite(2, HIGH);  
        digitalWrite(3, HIGH);  
        digitalWrite(4, LOW);  
        digitalWrite(5, HIGH);  
        digitalWrite(6, HIGH);  
        digitalWrite(7, LOW);  
        delay(2000);  
        digitalWrite(2, LOW);  
        digitalWrite(3, LOW);  
        digitalWrite(4, LOW);  
        digitalWrite(5, LOW);  
        digitalWrite(6, LOW);  
        digitalWrite(7, LOW);  
      }
       if (data == 'o')
      {
        //for letter o  
        digitalWrite(2, HIGH);  
        digitalWrite(3, LOW);  
        digitalWrite(4, LOW);  
        digitalWrite(5, HIGH);  
        digitalWrite(6, HIGH);  
        digitalWrite(7, LOW);  
        delay(2000);  
        digitalWrite(2, LOW);  
        digitalWrite(3, LOW);  
        digitalWrite(4, LOW);  
        digitalWrite(5, LOW);  
        digitalWrite(6, LOW);  
        digitalWrite(7, LOW);  
      }
      if (data == 'p')
      {
        //for letter p 
        digitalWrite(2, HIGH);  
        digitalWrite(3, HIGH);  
        digitalWrite(4, HIGH);  
        digitalWrite(5, LOW);  
        digitalWrite(6, HIGH);  
        digitalWrite(7, LOW);  
        delay(2000);  
        digitalWrite(2, LOW);  
        digitalWrite(3, LOW);  
        digitalWrite(4, LOW);  
        digitalWrite(5, LOW);  
        digitalWrite(6, LOW);  
        digitalWrite(7, LOW);  
      }
      if (data == 'q')
      {
        //for letter q 
        digitalWrite(2, HIGH);  
        digitalWrite(3, HIGH);  
        digitalWrite(4, HIGH);  
        digitalWrite(5, HIGH);  
        digitalWrite(6, HIGH);  
        digitalWrite(7, LOW);  
        delay(2000);  
        digitalWrite(2, LOW);  
        digitalWrite(3, LOW);  
        digitalWrite(4, LOW);  
        digitalWrite(5, LOW);  
        digitalWrite(6, LOW);  
        digitalWrite(7, LOW);  
      }
      if (data == 'r')
      {
        //for letter r
        digitalWrite(2, HIGH);  
        digitalWrite(3, LOW);  
        digitalWrite(4, HIGH);  
        digitalWrite(5, HIGH);  
        digitalWrite(6, HIGH);  
        digitalWrite(7, LOW);  
        delay(2000);  
        digitalWrite(2, LOW);  
        digitalWrite(3, LOW);  
        digitalWrite(4, LOW);  
        digitalWrite(5, LOW);  
        digitalWrite(6, LOW);  
        digitalWrite(7, LOW);  
      }
      if (data == 's')
      {
        //for letter s
        digitalWrite(2, LOW);  
        digitalWrite(3, HIGH);  
        digitalWrite(4, HIGH);  
        digitalWrite(5, LOW);  
        digitalWrite(6, HIGH);  
        digitalWrite(7, LOW);  
        delay(2000);  
        digitalWrite(2, LOW);  
        digitalWrite(3, LOW);  
        digitalWrite(4, LOW);  
        digitalWrite(5, LOW);  
        digitalWrite(6, LOW);  
        digitalWrite(7, LOW);  
      }
      if (data == 't')
      {
        //for letter t
        digitalWrite(2, LOW);  
        digitalWrite(3, HIGH);  
        digitalWrite(4, HIGH);  
        digitalWrite(5, HIGH);  
        digitalWrite(6, HIGH);  
        digitalWrite(7, LOW);  
        delay(2000);  
        digitalWrite(2, LOW);  
        digitalWrite(3, LOW);  
        digitalWrite(4, LOW);  
        digitalWrite(5, LOW);  
        digitalWrite(6, LOW);  
        digitalWrite(7, LOW);  
      }
      if (data == 'u')
      {
        //for letter u
        digitalWrite(2, HIGH);  
        digitalWrite(3, LOW);  
        digitalWrite(4, LOW);  
        digitalWrite(5, LOW);  
        digitalWrite(6, HIGH);  
        digitalWrite(7, HIGH);  
        delay(2000);  
        digitalWrite(2, LOW);  
        digitalWrite(3, LOW);  
        digitalWrite(4, LOW);  
        digitalWrite(5, LOW);  
        digitalWrite(6, LOW);  
        digitalWrite(7, LOW);  
      }
      if (data == 'v')
      {
        //for letter v
        digitalWrite(2, HIGH);  
        digitalWrite(3, LOW);  
        digitalWrite(4, HIGH);  
        digitalWrite(5, LOW);  
        digitalWrite(6, HIGH);  
        digitalWrite(7, HIGH);  
        delay(2000);  
        digitalWrite(2, LOW);  
        digitalWrite(3, LOW);  
        digitalWrite(4, LOW);  
        digitalWrite(5, LOW);  
        digitalWrite(6, LOW);  
        digitalWrite(7, LOW);  
      }
      if (data == 'w')
      {
        //for letter w
        digitalWrite(2, LOW);  
        digitalWrite(3, HIGH);  
        digitalWrite(4, HIGH);  
        digitalWrite(5, HIGH);  
        digitalWrite(6, LOW);  
        digitalWrite(7, HIGH);  
        delay(2000);  
        digitalWrite(2, LOW);  
        digitalWrite(3, LOW);  
        digitalWrite(4, LOW);  
        digitalWrite(5, LOW);  
        digitalWrite(6, LOW);  
        digitalWrite(7, LOW);  
      }
      if (data == 'x')
      {
        //for letter x
        digitalWrite(2, HIGH);  
        digitalWrite(3, HIGH);  
        digitalWrite(4, LOW);  
        digitalWrite(5, LOW);  
        digitalWrite(6, HIGH);  
        digitalWrite(7, HIGH);  
        delay(2000);  
        digitalWrite(2, LOW);  
        digitalWrite(3, LOW);  
        digitalWrite(4, LOW);  
        digitalWrite(5, LOW);  
        digitalWrite(6, LOW);  
        digitalWrite(7, LOW);  
      }
      if (data == 'y')
      {
        //for letter y
        digitalWrite(2, HIGH);  
        digitalWrite(3, HIGH);  
        digitalWrite(4, LOW);  
        digitalWrite(5, HIGH);  
        digitalWrite(6, HIGH);  
        digitalWrite(7, HIGH);  
        delay(2000);  
        digitalWrite(2, LOW);  
        digitalWrite(3, LOW);  
        digitalWrite(4, LOW);  
        digitalWrite(5, LOW);  
        digitalWrite(6, LOW);  
        digitalWrite(7, LOW);  
      }
      if (data == 'z')
      {
        //for letter z
        digitalWrite(2, HIGH);  
        digitalWrite(3, LOW);  
        digitalWrite(4, LOW);  
        digitalWrite(5, HIGH);  
        digitalWrite(6, HIGH);  
        digitalWrite(7, HIGH);  
        delay(2000);  
        digitalWrite(2, LOW);  
        digitalWrite(3, LOW);  
        digitalWrite(4, LOW);  
        digitalWrite(5, LOW);  
        digitalWrite(6, LOW);  
        digitalWrite(7, LOW);  
      }
      if (data == ' ')
      {
        //for SPACE
        digitalWrite(2, LOW);  
        digitalWrite(3, LOW);  
        digitalWrite(4, LOW);  
        digitalWrite(5, LOW);  
        digitalWrite(6, LOW);  
        digitalWrite(7, LOW);  
        delay(2000);  
        digitalWrite(2, LOW);  
        digitalWrite(3, LOW);  
        digitalWrite(4, LOW);  
        digitalWrite(5, LOW);  
        digitalWrite(6, LOW);  
        digitalWrite(7, LOW);  
      }      
        //the same way use all the 26 patterns and control the pins to get braille patterns for all the 26 letters.  
    }  
}  
