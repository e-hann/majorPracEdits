 #include "Player.h"
 #include <string>

 using namespace std;
 
 // default constructor
Player::Player(){
    this-> Location = "";
    Accusation = new string[3];

    //empty accusation array
    for (int i = 0; i < 3; i++){
        Accusation[i] = "";
    }

}


// getter function Location
string Player::getLocation(){
    return Location;
}
        
// getter function Current Accusation
string* Player::getAccusation(){
    return Accusation;
}

// destructor
/*
Player::~Player(){
    
}
*/