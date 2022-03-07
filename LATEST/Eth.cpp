/*****************************************************/
/* File   : Eth.cpp                                  */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "module.h"
#include "Eth_EcuM.h"
#include "Eth_SchM.h"
#include "Eth_Unused.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class module_Eth:
      public abstract_module
{
   public:
      FUNC(void, ETH_CODE) InitFunction   (void);
      FUNC(void, ETH_CODE) DeInitFunction (void);
      FUNC(void, ETH_CODE) MainFunction   (void);
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
module_Eth     Eth;
infEcuMClient* gptrinfEcuMClient_Eth = &Eth;
infSchMClient* gptrinfSchMClient_Eth = &Eth;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, ETH_CODE) module_Eth::InitFunction(void){
}

FUNC(void, ETH_CODE) module_Eth::DeInitFunction(void){
}

FUNC(void, ETH_CODE) module_Eth::MainFunction(void){
}

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

FUNC(void, ETH_CODE) class_Eth_Unused::GetVersionInfo(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

