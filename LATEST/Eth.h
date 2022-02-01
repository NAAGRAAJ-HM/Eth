#pragma once
/*****************************************************/
/* File   : Eth.h                                  */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "Std_Types.h"
#include "Compiler_Cfg_Eth.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class class_Eth{
   public:
/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
      FUNC(void, ETH_CODE) InitFunction            (void);
      FUNC(void, ETH_CODE) GetControllerMode       (void);
      FUNC(void, ETH_CODE) SetControllerMode       (void);
      FUNC(void, ETH_CODE) GetPhysAddr             (void);
      FUNC(void, ETH_CODE) SetPhysAddr             (void);
      FUNC(void, ETH_CODE) UpdatePhysAddrFilter    (void);
      FUNC(void, ETH_CODE) ReadMii                 (void);
      FUNC(void, ETH_CODE) WriteMii                (void);
      FUNC(void, ETH_CODE) GetCounterValues        (void);
      FUNC(void, ETH_CODE) GetRxStatus             (void);
      FUNC(void, ETH_CODE) GetTxStatus             (void);
      FUNC(void, ETH_CODE) GetTxErrorCounterValues (void);
      FUNC(void, ETH_CODE) GetCurrentTime          (void);
      FUNC(void, ETH_CODE) EnableEgressTimeStamp   (void);
      FUNC(void, ETH_CODE) GetEgressTimeStamp      (void);
      FUNC(void, ETH_CODE) GetIngressTimeStamp     (void);
      FUNC(void, ETH_CODE) ProvideTxBuffer         (void);
      FUNC(void, ETH_CODE) Transit                 (void);
      FUNC(void, ETH_CODE) Recive                  (void);
      FUNC(void, ETH_CODE) TxConfirmation          (void);
      FUNC(void, ETH_CODE) GetVersionInfo          (void);
      FUNC(void, ETH_CODE) MainFunction            (void);
};

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
extern class_Eth Eth;

/*****************************************************/
/* EOF                                               */
/*****************************************************/

