enum FlightStates{
    UNARMED,
    GROUND_IDLE,
    POWERED_FLIGHT,
    UNPOWERED_FLIGHT,
    BALISTIC_DECENT,
    MAIN_CHUTE,
    LAND_SAFE
};

bool PASSED = true;
bool FAILED = false;


//this varable should enable many of the testing/debugging elements of the code
static bool TESTMODE = true;
// this variable only applies if TESTMODE is true, it generates synthetic Data for all the sensors
static bool USE_SYNTHETIC_DATA = true;
