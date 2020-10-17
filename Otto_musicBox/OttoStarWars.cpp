
#include "OttoStarWars.h"
#include "Arduino.h"

void OttoStarWars::play() {

  //tone(pin, note, duration)
    tone(13,LA3,Q); 
    delay(1+Q); //delay duration should always be 1 ms more than the note in order to separate them.
    tone(13,LA3,Q);
    delay(1+Q);
    tone(13,LA3,Q);
    delay(1+Q);
    tone(13,F3,E+S);
    delay(1+E+S);
    tone(13,C4,S);
    delay(1+S);
    
    tone(13,LA3,Q);
    delay(1+Q);
    tone(13,F3,E+S);
    delay(1+E+S);
    tone(13,C4,S);
    delay(1+S);
    tone(13,LA3,H);
    delay(1+H);
    
    tone(13,E4,Q); 
    delay(1+Q); 
    tone(13,E4,Q);
    delay(1+Q);
    tone(13,E4,Q);
    delay(1+Q);
    tone(13,F4,E+S);
    delay(1+E+S);
    tone(13,C4,S);
    delay(1+S);
    
    tone(13,Ab3,Q);
    delay(1+Q);
    tone(13,F3,E+S);
    delay(1+E+S);
    tone(13,C4,S);
    delay(1+S);
    tone(13,LA3,H);
    delay(1+H);
    
    tone(13,LA4,Q);
    delay(1+Q);
    tone(13,LA3,E+S);
    delay(1+E+S);
    tone(13,LA3,S);
    delay(1+S);
    tone(13,LA4,Q);
    delay(1+Q);
    tone(13,Ab4,E+S);
    delay(1+E+S);
    tone(13,G4,S);
    delay(1+S);
    
    tone(13,Gb4,S);
    delay(1+S);
    tone(13,E4,S);
    delay(1+S);
    tone(13,F4,E);
    delay(1+E);
    delay(1+E);//PAUSE
    tone(13,Bb3,E);
    delay(1+E);
    tone(13,Eb4,Q);
    delay(1+Q);
    tone(13,D4,E+S);
    delay(1+E+S);
    tone(13,Db4,S);
    delay(1+S);
    
    tone(13,C4,S);
    delay(1+S);
    tone(13,B3,S);
    delay(1+S);
    tone(13,C4,E);
    delay(1+E);
    delay(1+E);//PAUSE QUASI FINE RIGA
    tone(13,F3,E);
    delay(1+E);
    tone(13,Ab3,Q);
    delay(1+Q);
    tone(13,F3,E+S);
    delay(1+E+S);
    tone(13,LA3,S);
    delay(1+S);
    
    tone(13,C4,Q);
    delay(1+Q);
     tone(13,LA3,E+S);
    delay(1+E+S);
    tone(13,C4,S);
    delay(1+S);
    tone(13,E4,H);
    delay(1+H);
    
     tone(13,LA4,Q);
    delay(1+Q);
    tone(13,LA3,E+S);
    delay(1+E+S);
    tone(13,LA3,S);
    delay(1+S);
    tone(13,LA4,Q);
    delay(1+Q);
    tone(13,Ab4,E+S);
    delay(1+E+S);
    tone(13,G4,S);
    delay(1+S);
    
    tone(13,Gb4,S);
    delay(1+S);
    tone(13,E4,S);
    delay(1+S);
    tone(13,F4,E);
    delay(1+E);
    delay(1+E);//PAUSE
    tone(13,Bb3,E);
    delay(1+E);
    tone(13,Eb4,Q);
    delay(1+Q);
    tone(13,D4,E+S);
    delay(1+E+S);
    tone(13,Db4,S);
    delay(1+S);
    
    tone(13,C4,S);
    delay(1+S);
    tone(13,B3,S);
    delay(1+S);
    tone(13,C4,E);
    delay(1+E);
    delay(1+E);//PAUSE QUASI FINE RIGA
    tone(13,F3,E);
    delay(1+E);
    tone(13,Ab3,Q);
    delay(1+Q);
    tone(13,F3,E+S);
    delay(1+E+S);
    tone(13,C4,S);
    delay(1+S);
    
    tone(13,LA3,Q);
    delay(1+Q);
     tone(13,F3,E+S);
    delay(1+E+S);
    tone(13,C4,S);
    delay(1+S);
    tone(13,LA3,H);
    delay(1+H);
    
    delay(2*H);   
}
