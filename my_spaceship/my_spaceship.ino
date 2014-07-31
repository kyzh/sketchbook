int switchState = 0 ;

void setup (){
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(2,INPUT);
}

void loop () {
  switchState = digitalRead(2);
  
  if (switchState == LOW) {
    // Button not pressed
    
    digitalWrite(3, HIGH); // Green on 
    digitalWrite(4, LOW);  // Red #1 off
    digitalWrite(4, LOW);  // Red #2 off
  }
  else {
    // Button _is_ pressed
    digitalWrite(3, LOW);  // Green off
    digitalWrite(4, LOW);  // Red #1 off
    digitalWrite(5, HIGH); // Red #2 on
    
    delay(250); // wait 1/4 of a sec
    // Toggle the LEDs
    digitalWrite(4, HIGH); // Red #1 on
    digitalWrite(5, LOW);  // Red #2 off
    delay (250);
  }
}
