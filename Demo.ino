#include <SD.h>
#include <TMRpcm.h>
#include <SPI.h>

#define SD_ChipSelectPin 4
TMRpcm audio;

void setup(){
audio.speakerPin = 9;
Serial.begin(9600);
if (!SD.begin(SD_ChipSelectPin)) {
Serial.println("SD fail");
return;
}

audio.setVolume(5);
audio.play("2.wav");
}

void loop(){  }
