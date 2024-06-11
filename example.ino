String mode="on\n";
String data=" ";

void setup() {
  Serial.begin(9600);
  delay(500);
  pinMode(13, OUTPUT);
}


void loop() {
  if(Serial.available()>0){
    delay(10);
    data = Serial.readString();
  }

  if(mode.indexOf(data)>= 0 ){      //nếu data có trong mode thì bật //return != -1
    digitalWrite(13, HIGH);
  }
  else{                             //data không thuộc mode thì tắt //return -1
    digitalWrite(13, LOW);
  }
  
}
