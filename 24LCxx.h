#include "24LCxx.c"

void TWIInit(void);
void TWIStart(void);
void TWIStop(void);
void TWIWrite(uint8_t data);

uint8_t TWIReadNACK(void);
uint8_t TWIReadACK(void);
uint8_t TWIReadStatus(void);


//ID: adress of Part
//adress: data adress in EEpprom
//data: data to store
//*data: variable to store read data into
//Function output: error code
//======================================================================
uint8_t TWI_EEWrite8(uint8_t ID, uint16_t adress, uint8_t data);
uint8_t TWI_EERead8(uint8_t ID, uint16_t adress, uint8_t *data);

uint8_t TWI_EEWrite16(uint8_t ID, uint16_t adress, uint16_t data);
uint8_t TWI_EERead16(uint8_t ID, uint16_t adress, uint16_t *data);
//======================================================================
