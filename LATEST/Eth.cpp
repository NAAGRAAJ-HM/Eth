/******************************************************************************/
/* File   : Eth.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "Eth.hpp"
#include "infEth_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define ETH_AR_RELEASE_VERSION_MAJOR                                           4
#define ETH_AR_RELEASE_VERSION_MINOR                                           3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(ETH_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible ETH_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(ETH_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible ETH_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_Eth, ETH_VAR) Eth;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, ETH_CODE) module_Eth::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, ETH_CONST,       ETH_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   ETH_CONFIG_DATA, ETH_APPL_CONST) lptrCfgModule
){
#if(STD_ON == Eth_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrConstModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrConst = (const ConstEth_Type*)lptrConstModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == Eth_DevErrorDetect)
         Det_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == Eth_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == Eth_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  ETH_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, ETH_CODE) module_Eth::DeInitFunction(
   void
){
#if(STD_ON == Eth_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == Eth_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == Eth_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  ETH_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, ETH_CODE) module_Eth::MainFunction(
   void
){
#if(STD_ON == Eth_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == Eth_InitCheck)
   }
   else{
#if(STD_ON == Eth_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  ETH_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, ETH_CODE) module_Eth::GetControllerMode(
   void
){
}

FUNC(void, ETH_CODE) module_Eth::SetControllerMode(
   void
){
}

FUNC(void, ETH_CODE) module_Eth::GetPhysAddr(
   void
){
}

FUNC(void, ETH_CODE) module_Eth::SetPhysAddr(
   void
){
}

FUNC(void, ETH_CODE) module_Eth::UpdatePhysAddrFilter(
   void
){
}

FUNC(void, ETH_CODE) module_Eth::ReadMii(
   void
){
}

FUNC(void, ETH_CODE) module_Eth::WriteMii(
   void
){
}

FUNC(void, ETH_CODE) module_Eth::GetCounterValues(
   void
){
}

FUNC(void, ETH_CODE) module_Eth::GetRxStatus(
   void
){
}

FUNC(void, ETH_CODE) module_Eth::GetTxStatus(
   void
){
}

FUNC(void, ETH_CODE) module_Eth::GetTxErrorCounterValues(
   void
){
}

FUNC(void, ETH_CODE) module_Eth::GetCurrentTime(
   void
){
}

FUNC(void, ETH_CODE) module_Eth::EnableEgressTimeStamp(
   void
){
}

FUNC(void, ETH_CODE) module_Eth::GetEgressTimeStamp(
   void
){
}

FUNC(void, ETH_CODE) module_Eth::GetIngressTimeStamp(
   void
){
}

FUNC(void, ETH_CODE) module_Eth::ProvideTxBuffer(
   void
){
}

FUNC(void, ETH_CODE) module_Eth::Transit(
   void
){
}

FUNC(void, ETH_CODE) module_Eth::Recive(
   void
){
}

FUNC(void, ETH_CODE) module_Eth::TxConfirmation(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

