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

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

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
      CONSTP2CONST(ConstModule_TypeAbstract, MCALETH_CONST,       MCALETH_APPL_CONST) lptrNvMBlocksRomModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   MCALETH_CONFIG_DATA, MCALETH_APPL_CONST) lptrCfgModule
){
#if(STD_ON == McalEth_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrNvMBlocksRomModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrNvMBlocksRom = lptrNvMBlocksRomModule;
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

