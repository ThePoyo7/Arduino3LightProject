const int led_1 = 13;
const int led_2 = 12;
const int led_3 = 7;
const int Buttonpin = 8;
int buttonstate = 0;
void setup () {
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
  pinMode(led_3, OUTPUT);
  pinMode(Buttonpin, INPUT);
}
//blinks light 1, 2 and 3
void loop () {
  buttonstate = digitalRead(Buttonpin);
    if (buttonstate == HIGH) {
      delay(1);
      digitalWrite(led_1, HIGH);
      delay(1000);
      digitalWrite(led_1, LOW);
      digitalWrite(led_2, HIGH);
      delay(1000);
      digitalWrite(led_2, LOW);
      digitalWrite(led_3, HIGH);
      delay(1000);
      digitalWrite(led_3, LOW);
      //Waiting lights
    } else  {
      digitalWrite(led_1, HIGH);
      digitalWrite(led_2, HIGH);
      digitalWrite(led_3, HIGH);
      delay(1000);
      digitalWrite(led_1, LOW);
      digitalWrite(led_2, LOW);
      digitalWrite(led_3, LOW);
      delay(1000);
    }
  }
