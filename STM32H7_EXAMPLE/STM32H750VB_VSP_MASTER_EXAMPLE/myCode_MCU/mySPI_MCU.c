/*============= REVISION HISTORY ===============================================
 20231026   maxmklam
 --------   --------------
            File Creation

==============================================================================*/
/*==============================================================================
 @FILE: mySPI_MCU.c
 @AUTHOR: maxmklam
 @OWNER: maxmklam
 @DESCRIBE: 
 Copyright (c) 2024 maxmklam 
==============================================================================*/

/************** INCLUDES ******************************************************/

#include <string.h> //memcpy()
#include "mySPI_MCU.h"
#include "mySPI_STM32H7.h"



/************** DEFINITIONS ***************************************************/ 

u8 gSPI2TxBuff[SPI2_BUFF_SIZE];
u8 gSPI2RxBuff[SPI2_BUFF_SIZE];

struct _DevSPI gDevSPIvsp =
{
	.SPIx = SPI2,
	.txBuffPt = gSPI2TxBuff,
	.rxBuffPt = gSPI2RxBuff,
	.devXferState = DEVXFERST_IDLE,
};


//for test
u64 testTime64stSPI2;
u64 testTime64EndSPI2;
u64 testTimeDiff64SPI2 = 0;


/************** LOCAL FUNCTION PROTOTYPES *************************************/



/************** FUNCTION DEFINITIONS ******************************************/


/*=========================== END OF FILE ====================================*/