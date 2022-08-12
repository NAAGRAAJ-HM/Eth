/******************************************************************************/
/* File   : McalEth.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "McalEth.hpp"
#include "infMcalEth_Imp.hpp"

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
VAR(module_McalEth, ETH_VAR) McalEth;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, ETH_CODE) module_McalEth::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, ETH_CONST,       ETH_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   ETH_CONFIG_DATA, ETH_APPL_CONST) lptrCfgModule
){
#if(STD_ON == McalEth_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrConstModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrConst = (const ConstMcalEth_Type*)lptrConstModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == McalEth_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == McalEth_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == McalEth_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  ETH_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, ETH_CODE) module_McalEth::DeInitFunction(
   void
){
#if(STD_ON == McalEth_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == McalEth_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == McalEth_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  ETH_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, ETH_CODE) module_McalEth::MainFunction(
   void
){
#if(STD_ON == McalEth_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == McalEth_InitCheck)
   }
   else{
#if(STD_ON == McalEth_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  ETH_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, ETH_CODE) module_McalEth::GetControllerMode(
   void
){
}

FUNC(void, ETH_CODE) module_McalEth::SetControllerMode(
   void
){
}

FUNC(void, ETH_CODE) module_McalEth::GetPhysAddr(
   void
){
}

FUNC(void, ETH_CODE) module_McalEth::SetPhysAddr(
   void
){
}

FUNC(void, ETH_CODE) module_McalEth::UpdatePhysAddrFilter(
   void
){
}

FUNC(void, ETH_CODE) module_McalEth::ReadMii(
   void
){
}

FUNC(void, ETH_CODE) module_McalEth::WriteMii(
   void
){
}

FUNC(void, ETH_CODE) module_McalEth::GetCounterValues(
   void
){
}

FUNC(void, ETH_CODE) module_McalEth::GetRxStatus(
   void
){
}

FUNC(void, ETH_CODE) module_McalEth::GetTxStatus(
   void
){
}

FUNC(void, ETH_CODE) module_McalEth::GetTxErrorCounterValues(
   void
){
}

FUNC(void, ETH_CODE) module_McalEth::GetCurrentTime(
   void
){
}

FUNC(void, ETH_CODE) module_McalEth::EnableEgressTimeStamp(
   void
){
}

FUNC(void, ETH_CODE) module_McalEth::GetEgressTimeStamp(
   void
){
}

FUNC(void, ETH_CODE) module_McalEth::GetIngressTimeStamp(
   void
){
}

FUNC(void, ETH_CODE) module_McalEth::ProvideTxBuffer(
   void
){
}

FUNC(void, ETH_CODE) module_McalEth::Transit(
   void
){
}

FUNC(void, ETH_CODE) module_McalEth::Recive(
   void
){
}

FUNC(void, ETH_CODE) module_McalEth::TxConfirmation(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

