/*****************************************************/
/* File   : Eth.cpp                                  */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "Eth.h"

#include "Eth_EcuM.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
class_Eth_EcuM Eth_EcuM;
class_EcuM_Client *EcuM_Client_ptr_Eth = &Eth_EcuM;
class_Eth Eth;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, ETH_CODE) class_Eth_EcuM::InitFunction(void){
}

FUNC(void, ETH_CODE) class_Eth::GetControllerMode(void){
}

FUNC(void, ETH_CODE) class_Eth::SetControllerMode(void){
}

FUNC(void, ETH_CODE) class_Eth::GetPhysAddr(void){
}

FUNC(void, ETH_CODE) class_Eth::SetPhysAddr(void){
}

FUNC(void, ETH_CODE) class_Eth::UpdatePhysAddrFilter(void){
}

FUNC(void, ETH_CODE) class_Eth::ReadMii(void){
}

FUNC(void, ETH_CODE) class_Eth::WriteMii(void){
}

FUNC(void, ETH_CODE) class_Eth::GetCounterValues(void){
}

FUNC(void, ETH_CODE) class_Eth::GetRxStatus(void){
}

FUNC(void, ETH_CODE) class_Eth::GetTxStatus(void){
}

FUNC(void, ETH_CODE) class_Eth::GetTxErrorCounterValues(void){
}

FUNC(void, ETH_CODE) class_Eth::GetCurrentTime(void){
}

FUNC(void, ETH_CODE) class_Eth::EnableEgressTimeStamp(void){
}

FUNC(void, ETH_CODE) class_Eth::GetEgressTimeStamp(void){
}

FUNC(void, ETH_CODE) class_Eth::GetIngressTimeStamp(void){
}

FUNC(void, ETH_CODE) class_Eth::ProvideTxBuffer(void){
}

FUNC(void, ETH_CODE) class_Eth::Transit(void){
}

FUNC(void, ETH_CODE) class_Eth::Recive(void){
}

FUNC(void, ETH_CODE) class_Eth::TxConfirmation(void){
}

FUNC(void, ETH_CODE) class_Eth::GetVersionInfo(void){
}

FUNC(void, ETH_CODE) class_Eth::MainFunction(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

