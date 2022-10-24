/******************************************************************************/
/* File   : McalEth.cpp                                                       */
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
#define MCALETH_AR_RELEASE_VERSION_MAJOR                                       4
#define MCALETH_AR_RELEASE_VERSION_MINOR                                       3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(MCALETH_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible MCALETH_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(MCALETH_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible MCALETH_AR_RELEASE_VERSION_MINOR!"
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
VAR(module_McalEth, MCALETH_VAR) McalEth;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, MCALETH_CODE) module_McalEth::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, MCALETH_CONST,       MCALETH_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   MCALETH_CONFIG_DATA, MCALETH_APPL_CONST) lptrCfgModule
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
         ,  MCALETH_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, MCALETH_CODE) module_McalEth::DeInitFunction(
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
         ,  MCALETH_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, MCALETH_CODE) module_McalEth::MainFunction(
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
         ,  MCALETH_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, MCALETH_CODE) module_McalEth::GetControllerMode(
   void
){
}

FUNC(void, MCALETH_CODE) module_McalEth::SetControllerMode(
   void
){
}

FUNC(void, MCALETH_CODE) module_McalEth::GetPhysAddr(
   void
){
}

FUNC(void, MCALETH_CODE) module_McalEth::SetPhysAddr(
   void
){
}

FUNC(void, MCALETH_CODE) module_McalEth::UpdatePhysAddrFilter(
   void
){
}

FUNC(void, MCALETH_CODE) module_McalEth::ReadMii(
   void
){
}

FUNC(void, MCALETH_CODE) module_McalEth::WriteMii(
   void
){
}

FUNC(void, MCALETH_CODE) module_McalEth::GetCounterValues(
   void
){
}

FUNC(void, MCALETH_CODE) module_McalEth::GetRxStatus(
   void
){
}

FUNC(void, MCALETH_CODE) module_McalEth::GetTxStatus(
   void
){
}

FUNC(void, MCALETH_CODE) module_McalEth::GetTxErrorCounterValues(
   void
){
}

FUNC(void, MCALETH_CODE) module_McalEth::GetCurrentTime(
   void
){
}

FUNC(void, MCALETH_CODE) module_McalEth::EnableEgressTimeStamp(
   void
){
}

FUNC(void, MCALETH_CODE) module_McalEth::GetEgressTimeStamp(
   void
){
}

FUNC(void, MCALETH_CODE) module_McalEth::GetIngressTimeStamp(
   void
){
}

FUNC(void, MCALETH_CODE) module_McalEth::ProvideTxBuffer(
   void
){
}

FUNC(void, MCALETH_CODE) module_McalEth::Transit(
   void
){
}

FUNC(void, MCALETH_CODE) module_McalEth::Recive(
   void
){
}

FUNC(void, MCALETH_CODE) module_McalEth::TxConfirmation(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

