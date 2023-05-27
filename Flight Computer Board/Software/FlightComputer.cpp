#include "StaticVariables.h"

//Variables
FlightStates FlightState = UNARMED;
bool AbleToFly = true;

//SensorData - needs to store data from the following sensors:
//    - accelerometer
//    - gyroscope
//    - magnetometer
//    - barometer



//HealthCheck
bool HealthCheck(){
    return true;
}
//Initialization
void Init(){
    RetrieveData();
    if(HealthCheck() == PASSED){
        MainLoop();
    }
}

void RetrieveData(){

}

void Unarmed(){

}

void Ground_Idle(){

}

void Powered_Flight(){

}

void Unopowered_Flight(){

}

void Balistic_Decent(){

}

void Main_Chute(){

}

void Land_safe(){

}
//state machine

void StateMachine(){
    switch (FlightState)
    {
    case UNARMED:
        Unarmed();
        break;
    case GROUND_IDLE:
        Ground_Idle();
        break;
    case POWERED_FLIGHT:
        Powered_Flight();
        break;
    case UNPOWERED_FLIGHT:
        Unopowered_Flight();
        break;
    case BALISTIC_DECENT:
        Balistic_Decent();
        break;
    case MAIN_CHUTE:
        Main_Chute();
        break;
    case LAND_SAFE:
        Land_safe();
        break;
    default:
        break;
    }
}

//Main
void MainLoop(){

    while (AbleToFly)
    {
        RetrieveData();
        StateMachine();
    }
    
}