int button1 = 1 ;
int button2 = 2 ;
int button3 = 3 ;
int button4 = 4 ;
int button5 = 5 ;

int Led13 = 13 ;
int Led7 = 7 ;
int Led6 = 6 ;
int Led12 = 12 ;
int Led11 = 11 ;
int Led9 = 9 ;
int Led10 = 10 ;
int Led8 = 8 ;

/*int button1 = 18;
int button2 = 19;
int LED1 = 26;
LED2 int = 28;
*/

int buttonPushCounter = 0;   // counter for the number of button presses
int buttonState = 0;         // current state of the button
int lastButtonState = 0;     // previous state of the button

int buttonState2 = 0;
int lastButtonState2 = 0; 

int buttonState3 = 0;
int lastButtonState3 = 0; 

int buttonState4 = 0;
int lastButtonState4 = 0;

 int buttonState5 = 0;
int lastButtonState5 = 0; 

void setup () {
   pinMode (button1, INPUT);
   pinMode (button2, INPUT);
   pinMode (button3, INPUT);
   pinMode (button4, INPUT);
   pinMode (button5, INPUT);

   pinMode(Led13, OUTPUT) ;
   pinMode(Led7, OUTPUT) ;
   pinMode(Led6, OUTPUT) ;
   pinMode(Led12, OUTPUT) ;
   pinMode(Led11, OUTPUT) ;
   pinMode(Led9, OUTPUT) ;
   pinMode(Led10, OUTPUT) ;
   pinMode(Led8, OUTPUT) ;

    digitalWrite(Led13, HIGH) ;
    digitalWrite(Led7, HIGH) ;
    digitalWrite(Led12, HIGH) ;
    digitalWrite(Led6, HIGH) ;
    digitalWrite(Led11, HIGH) ;
    digitalWrite(Led9, HIGH) ;
    digitalWrite(Led8, HIGH) ;
    digitalWrite(Led10, HIGH) ;

    digitalWrite(button1, HIGH);
    digitalWrite(button2, HIGH);
    digitalWrite(button3, HIGH);
    digitalWrite(button4, HIGH);
    digitalWrite(button5, HIGH);

}

void loop () {
  
  
 
 buttonState = digitalRead(button1);

    

if (buttonState != lastButtonState) {
    // if the state has changed, increment the counter
    if (buttonState == LOW) {
      // if the current state is HIGH then the button went from off to on:
      buttonPushCounter++;
      Serial.println("on");
      Serial.print("number of button pushes: ");
      Serial.println(buttonPushCounter);

    digitalWrite(Led13, LOW) ;
    digitalWrite(Led7, LOW) ;
    digitalWrite(Led12, LOW) ;
    digitalWrite(Led6, LOW) ;
    digitalWrite(Led11, HIGH) ;
    digitalWrite(Led9, HIGH) ;
    digitalWrite(Led8, HIGH) ;
    digitalWrite(Led10, HIGH) ;   
    } else {
      // if the current state is LOW then the button went from on to off:
      Serial.println("off");

      digitalWrite(Led13, HIGH) ;
    digitalWrite(Led7, HIGH) ;
    digitalWrite(Led12, HIGH) ;
    digitalWrite(Led6, HIGH) ;
    digitalWrite(Led11, HIGH) ;
    digitalWrite(Led9, HIGH) ;
    digitalWrite(Led8, HIGH) ;
    digitalWrite(Led10, HIGH) ;
    }
    // Delay a little bit to avoid bouncing
    delay(50);
  }
  // save the current state as the last state, for next time through the loop
  lastButtonState = buttonState;

////////////////////////////////////

 buttonState2 = digitalRead(button2);
 
if (buttonState2 != lastButtonState2) {
    // if the state has changed, increment the counter
    if (buttonState2 == LOW) {
      // if the current state is HIGH then the button went from off to on:
      buttonPushCounter++;
      Serial.println("on");
      Serial.print("number of button pushes: ");
      Serial.println(buttonPushCounter);

    digitalWrite(Led13, LOW) ;
    digitalWrite(Led7, LOW) ;
    digitalWrite(Led12, HIGH) ;
    digitalWrite(Led6, HIGH) ;
    digitalWrite(Led11, HIGH) ;
    digitalWrite(Led9, HIGH) ;
    digitalWrite(Led8, LOW) ;
    digitalWrite(Led10, LOW) ;
    } else {
      // if the current state is LOW then the button went from on to off:
      Serial.println("off");

    digitalWrite(Led13, HIGH) ;
    digitalWrite(Led7, HIGH) ;
    digitalWrite(Led12, HIGH) ;
    digitalWrite(Led6, HIGH) ;
    digitalWrite(Led11, HIGH) ;
    digitalWrite(Led9, HIGH) ;
    digitalWrite(Led8, HIGH) ;
    digitalWrite(Led10, HIGH) ;
    }
    // Delay a little bit to avoid bouncing
    delay(50);
  }
  // save the current state as the last state, for next time through the loop
  lastButtonState2 = buttonState2;


/////////////////////////

buttonState3 = digitalRead(button3);
 
if (buttonState3 != lastButtonState3) {
    // if the state has changed, increment the counter
    if (buttonState3 == LOW) {
      // if the current state is HIGH then the button went from off to on:
      buttonPushCounter++;
      Serial.println("on");
      Serial.print("number of button pushes: ");
      Serial.println(buttonPushCounter);

    digitalWrite(Led13, HIGH) ;
    digitalWrite(Led7, HIGH) ;
    digitalWrite(Led12, LOW) ;
    digitalWrite(Led6, LOW) ;
    digitalWrite(Led11, HIGH) ;
    digitalWrite(Led9, HIGH) ;
    digitalWrite(Led8, LOW) ;
    digitalWrite(Led10, LOW) ;
    
    } else {
      // if the current state is LOW then the button went from on to off:
      Serial.println("off");

    digitalWrite(Led13, HIGH) ;
    digitalWrite(Led7, HIGH) ;
    digitalWrite(Led12, HIGH) ;
    digitalWrite(Led6, HIGH) ;
    digitalWrite(Led11, HIGH) ;
    digitalWrite(Led9, HIGH) ;
    digitalWrite(Led8, HIGH) ;
    digitalWrite(Led10, HIGH) ;
    }
    // Delay a little bit to avoid bouncing
    delay(50);
  }
  // save the current state as the last state, for next time through the loop
  lastButtonState3 = buttonState3;

/////////////////////////

buttonState4 = digitalRead(button4);
 
if (buttonState4 != lastButtonState4) {
    // if the state has changed, increment the counter
    if (buttonState4 == LOW) {
      // if the current state is HIGH then the button went from off to on:
      buttonPushCounter++;
      Serial.println("on");
      Serial.print("number of button pushes: ");
      Serial.println(buttonPushCounter);

    digitalWrite(Led13, HIGH) ;
    digitalWrite(Led7, HIGH) ;
    digitalWrite(Led12, LOW) ;
    digitalWrite(Led6, HIGH) ;
    digitalWrite(Led11, HIGH) ;
    digitalWrite(Led9, HIGH) ;
    digitalWrite(Led8, HIGH) ;
    digitalWrite(Led10, LOW) ;
    
    } else {
      // if the current state is LOW then the button went from on to off:
      Serial.println("off");

    digitalWrite(Led13, HIGH) ;
    digitalWrite(Led7, HIGH) ;
    digitalWrite(Led12, HIGH) ;
    digitalWrite(Led6, HIGH) ;
    digitalWrite(Led11, HIGH) ;
    digitalWrite(Led9, HIGH) ;
    digitalWrite(Led8, HIGH) ;
    digitalWrite(Led10, HIGH) ;
    }
    // Delay a little bit to avoid bouncing
    delay(50);
  }
  // save the current state as the last state, for next time through the loop
  lastButtonState4 = buttonState4;


/////////////////////////

buttonState5 = digitalRead(button5);
 
if (buttonState5 != lastButtonState5) {
    // if the state has changed, increment the counter
    if (buttonState5 == LOW) {
      // if the current state is HIGH then the button went from off to on:
      buttonPushCounter++;
      Serial.println("on");
      Serial.print("number of button pushes: ");
      Serial.println(buttonPushCounter);

    digitalWrite(Led13, HIGH) ;
    digitalWrite(Led7, HIGH) ;
    digitalWrite(Led12, HIGH) ;
    digitalWrite(Led6, LOW) ;
    digitalWrite(Led11, HIGH) ;
    digitalWrite(Led9, HIGH) ;
    digitalWrite(Led8, LOW) ;
    digitalWrite(Led10, HIGH) ;
    
    } else {
      // if the current state is LOW then the button went from on to off:
      Serial.println("off");

    digitalWrite(Led13, HIGH) ;
    digitalWrite(Led7, HIGH) ;
    digitalWrite(Led12, HIGH) ;
    digitalWrite(Led6, HIGH) ;
    digitalWrite(Led11, HIGH) ;
    digitalWrite(Led9, HIGH) ;
    digitalWrite(Led8, HIGH) ;
    digitalWrite(Led10, HIGH) ;
    }
    // Delay a little bit to avoid bouncing
    delay(50);
  }
  // save the current state as the last state, for next time through the loop
  lastButtonState5 = buttonState5;


  
   
}




    
   

   

  
 
