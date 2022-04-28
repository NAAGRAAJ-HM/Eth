/******************************************************************************/
/* File   : Eth.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "Eth_core.hpp"
#include "infEth_EcuM.hpp"
#include "infEth_Dcm.hpp"
#include "infEth_SchM.hpp"

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
class module_Eth:
      public abstract_module
   ,  public class_Eth_Functionality
{
   public:
      module_Eth(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, ETH_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, ETH_CONFIG_DATA, ETH_APPL_CONST) lptrCfgModule
      );
      FUNC(void, ETH_CODE) DeInitFunction (void);
      FUNC(void, ETH_CODE) MainFunction   (void);
};

extern VAR(module_Eth, ETH_VAR) Eth;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
CONSTP2VAR(infEcuMClient, ETH_VAR, ETH_CONST) gptrinfEcuMClient_Eth = &Eth;
CONSTP2VAR(infDcmClient,  ETH_VAR, ETH_CONST) gptrinfDcmClient_Eth  = &Eth;
CONSTP2VAR(infSchMClient, ETH_VAR, ETH_CONST) gptrinfSchMClient_Eth = &Eth;

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/
#include "CfgEth.hpp"

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_Eth, ETH_VAR) Eth(
   {
         ETH_AR_RELEASE_VERSION_MAJOR
      ,  ETH_AR_RELEASE_VERSION_MINOR
      ,  0x00
      ,  0xFF
      ,  0x01
      ,  '0'
      ,  '1'
      ,  '0'
   }
);

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, ETH_CODE) module_Eth::InitFunction(
   CONSTP2CONST(CfgModule_TypeAbstract, ETH_CONFIG_DATA, ETH_APPL_CONST) lptrCfgModule
){
#if(STD_ON == Eth_InitCheck)
   if(E_OK == IsInitDone){
#if(STD_ON == Eth_DevErrorDetect)
      Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
      );
#endif
   }
   else{
#endif
      if(NULL_PTR == lptrCfgModule){
#if(STD_ON == Eth_DevErrorDetect)
         Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
         );
#endif
      }
      else{
         if(STD_LOW){
// check lptrCfgModule for memory faults
            lptrCfg = lptrCfgModule;
         }
         else{
// use PBcfgCanIf as back-up configuration
            lptrCfg = &PBcfgEth;
         }
      }
      IsInitDone = E_OK;
#if(STD_ON == Eth_InitCheck)
   }
#endif
}

FUNC(void, ETH_CODE) module_Eth::DeInitFunction(void){
#if(STD_ON == Eth_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == Eth_DevErrorDetect)
      Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
      );
#endif
   }
   else{
#endif
      IsInitDone = E_NOT_OK;
#if(STD_ON == Eth_InitCheck)
   }
#endif
}

FUNC(void, ETH_CODE) module_Eth::MainFunction(void){
#if(STD_ON == Eth_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == Eth_DevErrorDetect)
      Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
      );
#endif
   }
   else{
#endif
#if(STD_ON == Eth_InitCheck)
   }
#endif
}

FUNC(void, ETH_CODE) class_Eth_Functionality::GetControllerMode(void){
}

FUNC(void, ETH_CODE) class_Eth_Functionality::SetControllerMode(void){
}

FUNC(void, ETH_CODE) class_Eth_Functionality::GetPhysAddr(void){
}

FUNC(void, ETH_CODE) class_Eth_Functionality::SetPhysAddr(void){
}

FUNC(void, ETH_CODE) class_Eth_Functionality::UpdatePhysAddrFilter(void){
}

FUNC(void, ETH_CODE) class_Eth_Functionality::ReadMii(void){
}

FUNC(void, ETH_CODE) class_Eth_Functionality::WriteMii(void){
}

FUNC(void, ETH_CODE) class_Eth_Functionality::GetCounterValues(void){
}

FUNC(void, ETH_CODE) class_Eth_Functionality::GetRxStatus(void){
}

FUNC(void, ETH_CODE) class_Eth_Functionality::GetTxStatus(void){
}

FUNC(void, ETH_CODE) class_Eth_Functionality::GetTxErrorCounterValues(void){
}

FUNC(void, ETH_CODE) class_Eth_Functionality::GetCurrentTime(void){
}

FUNC(void, ETH_CODE) class_Eth_Functionality::EnableEgressTimeStamp(void){
}

FUNC(void, ETH_CODE) class_Eth_Functionality::GetEgressTimeStamp(void){
}

FUNC(void, ETH_CODE) class_Eth_Functionality::GetIngressTimeStamp(void){
}

FUNC(void, ETH_CODE) class_Eth_Functionality::ProvideTxBuffer(void){
}

FUNC(void, ETH_CODE) class_Eth_Functionality::Transit(void){
}

FUNC(void, ETH_CODE) class_Eth_Functionality::Recive(void){
}

FUNC(void, ETH_CODE) class_Eth_Functionality::TxConfirmation(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

