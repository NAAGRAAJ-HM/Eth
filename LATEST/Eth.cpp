/******************************************************************************/
/* File   : Eth.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "CfgEth.hpp"
#include "Eth_core.hpp"
#include "infEth.hpp"

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
      ETH_CORE_FUNCTIONALITIES
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
   if(E_OK != IsInitDone){
#endif
      if(NULL_PTR != lptrCfgModule){
         if(STD_LOW){
            // check lptrCfgModule for memory faults
            lptrCfg = lptrCfgModule;
         }
         else{
            // use PBcfgCanIf as back-up configuration
            lptrCfg = &PBcfgEth;
         }
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
         ,  0 //TBD: IdError
      );
#endif
   }
#endif
}

FUNC(void, ETH_CODE) module_Eth::DeInitFunction(void){
#if(STD_ON == Eth_InitCheck)
   if(E_OK == IsInitDone){
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
         ,  0 //TBD: IdError
      );
#endif
   }
#endif
}

FUNC(void, ETH_CODE) module_Eth::MainFunction(void){
#if(STD_ON == Eth_InitCheck)
   if(E_OK == IsInitDone){
#endif
#if(STD_ON == Eth_InitCheck)
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
#endif
}

FUNC(void, ETH_CODE) module_Eth::GetControllerMode(void){
}

FUNC(void, ETH_CODE) module_Eth::SetControllerMode(void){
}

FUNC(void, ETH_CODE) module_Eth::GetPhysAddr(void){
}

FUNC(void, ETH_CODE) module_Eth::SetPhysAddr(void){
}

FUNC(void, ETH_CODE) module_Eth::UpdatePhysAddrFilter(void){
}

FUNC(void, ETH_CODE) module_Eth::ReadMii(void){
}

FUNC(void, ETH_CODE) module_Eth::WriteMii(void){
}

FUNC(void, ETH_CODE) module_Eth::GetCounterValues(void){
}

FUNC(void, ETH_CODE) module_Eth::GetRxStatus(void){
}

FUNC(void, ETH_CODE) module_Eth::GetTxStatus(void){
}

FUNC(void, ETH_CODE) module_Eth::GetTxErrorCounterValues(void){
}

FUNC(void, ETH_CODE) module_Eth::GetCurrentTime(void){
}

FUNC(void, ETH_CODE) module_Eth::EnableEgressTimeStamp(void){
}

FUNC(void, ETH_CODE) module_Eth::GetEgressTimeStamp(void){
}

FUNC(void, ETH_CODE) module_Eth::GetIngressTimeStamp(void){
}

FUNC(void, ETH_CODE) module_Eth::ProvideTxBuffer(void){
}

FUNC(void, ETH_CODE) module_Eth::Transit(void){
}

FUNC(void, ETH_CODE) module_Eth::Recive(void){
}

FUNC(void, ETH_CODE) module_Eth::TxConfirmation(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

