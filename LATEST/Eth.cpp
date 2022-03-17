/******************************************************************************/
/* File   : Eth.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "infEth_Version.h"

#include "module.h"
#include "infEth_EcuM.h"
#include "infEth_Dcm.h"
#include "infEth_SchM.h"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_Eth:
      public abstract_module
{
   public:
      FUNC(void, ETH_CODE) InitFunction   (void);
      FUNC(void, ETH_CODE) DeInitFunction (void);
      FUNC(void, ETH_CODE) GetVersionInfo (void);
      FUNC(void, ETH_CODE) MainFunction   (void);
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/


/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
VAR(module_Eth, ETH_VAR) Eth;
CONSTP2VAR(infEcuMClient, ETH_VAR, ETH_CONST) gptrinfEcuMClient_Eth = &Eth;
CONSTP2VAR(infDcmClient,  ETH_VAR, ETH_CONST) gptrinfDcmClient_Eth  = &Eth;
CONSTP2VAR(infSchMClient, ETH_VAR, ETH_CONST) gptrinfSchMClient_Eth = &Eth;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, ETH_CODE) module_Eth::InitFunction(void){
}

FUNC(void, ETH_CODE) module_Eth::DeInitFunction(void){
}

FUNC(void, ETH_CODE) module_Eth::GetVersionInfo(void){
}

FUNC(void, ETH_CODE) module_Eth::MainFunction(void){
}

#include "Eth_Unused.h"

FUNC(void, ETH_CODE) class_Eth_Unused::GetControllerMode(void){
}

FUNC(void, ETH_CODE) class_Eth_Unused::SetControllerMode(void){
}

FUNC(void, ETH_CODE) class_Eth_Unused::GetPhysAddr(void){
}

FUNC(void, ETH_CODE) class_Eth_Unused::SetPhysAddr(void){
}

FUNC(void, ETH_CODE) class_Eth_Unused::UpdatePhysAddrFilter(void){
}

FUNC(void, ETH_CODE) class_Eth_Unused::ReadMii(void){
}

FUNC(void, ETH_CODE) class_Eth_Unused::WriteMii(void){
}

FUNC(void, ETH_CODE) class_Eth_Unused::GetCounterValues(void){
}

FUNC(void, ETH_CODE) class_Eth_Unused::GetRxStatus(void){
}

FUNC(void, ETH_CODE) class_Eth_Unused::GetTxStatus(void){
}

FUNC(void, ETH_CODE) class_Eth_Unused::GetTxErrorCounterValues(void){
}

FUNC(void, ETH_CODE) class_Eth_Unused::GetCurrentTime(void){
}

FUNC(void, ETH_CODE) class_Eth_Unused::EnableEgressTimeStamp(void){
}

FUNC(void, ETH_CODE) class_Eth_Unused::GetEgressTimeStamp(void){
}

FUNC(void, ETH_CODE) class_Eth_Unused::GetIngressTimeStamp(void){
}

FUNC(void, ETH_CODE) class_Eth_Unused::ProvideTxBuffer(void){
}

FUNC(void, ETH_CODE) class_Eth_Unused::Transit(void){
}

FUNC(void, ETH_CODE) class_Eth_Unused::Recive(void){
}

FUNC(void, ETH_CODE) class_Eth_Unused::TxConfirmation(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

