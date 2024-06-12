#pragma once
/******************************************************************************/
/* File   : McalEth_core.hpp                                                      */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_McalEth.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define MCALETH_CORE_FUNCTIONALITIES                                               \
              FUNC(void, MCALETH_CODE) GetControllerMode       (void);             \
              FUNC(void, MCALETH_CODE) SetControllerMode       (void);             \
              FUNC(void, MCALETH_CODE) GetPhysAddr             (void);             \
              FUNC(void, MCALETH_CODE) SetPhysAddr             (void);             \
              FUNC(void, MCALETH_CODE) UpdatePhysAddrFilter    (void);             \
              FUNC(void, MCALETH_CODE) ReadMii                 (void);             \
              FUNC(void, MCALETH_CODE) WriteMii                (void);             \
              FUNC(void, MCALETH_CODE) GetCounterValues        (void);             \
              FUNC(void, MCALETH_CODE) GetRxStatus             (void);             \
              FUNC(void, MCALETH_CODE) GetTxStatus             (void);             \
              FUNC(void, MCALETH_CODE) GetTxErrorCounterValues (void);             \
              FUNC(void, MCALETH_CODE) GetCurrentTime          (void);             \
              FUNC(void, MCALETH_CODE) EnableEgressTimeStamp   (void);             \
              FUNC(void, MCALETH_CODE) GetEgressTimeStamp      (void);             \
              FUNC(void, MCALETH_CODE) GetIngressTimeStamp     (void);             \
              FUNC(void, MCALETH_CODE) ProvideTxBuffer         (void);             \
              FUNC(void, MCALETH_CODE) Transit                 (void);             \
              FUNC(void, MCALETH_CODE) Recive                  (void);             \
              FUNC(void, MCALETH_CODE) TxConfirmation          (void);             \

#define MCALETH_CORE_FUNCTIONALITIES_VIRTUAL                                       \
      virtual FUNC(void, MCALETH_CODE) GetControllerMode       (void) = 0;         \
      virtual FUNC(void, MCALETH_CODE) SetControllerMode       (void) = 0;         \
      virtual FUNC(void, MCALETH_CODE) GetPhysAddr             (void) = 0;         \
      virtual FUNC(void, MCALETH_CODE) SetPhysAddr             (void) = 0;         \
      virtual FUNC(void, MCALETH_CODE) UpdatePhysAddrFilter    (void) = 0;         \
      virtual FUNC(void, MCALETH_CODE) ReadMii                 (void) = 0;         \
      virtual FUNC(void, MCALETH_CODE) WriteMii                (void) = 0;         \
      virtual FUNC(void, MCALETH_CODE) GetCounterValues        (void) = 0;         \
      virtual FUNC(void, MCALETH_CODE) GetRxStatus             (void) = 0;         \
      virtual FUNC(void, MCALETH_CODE) GetTxStatus             (void) = 0;         \
      virtual FUNC(void, MCALETH_CODE) GetTxErrorCounterValues (void) = 0;         \
      virtual FUNC(void, MCALETH_CODE) GetCurrentTime          (void) = 0;         \
      virtual FUNC(void, MCALETH_CODE) EnableEgressTimeStamp   (void) = 0;         \
      virtual FUNC(void, MCALETH_CODE) GetEgressTimeStamp      (void) = 0;         \
      virtual FUNC(void, MCALETH_CODE) GetIngressTimeStamp     (void) = 0;         \
      virtual FUNC(void, MCALETH_CODE) ProvideTxBuffer         (void) = 0;         \
      virtual FUNC(void, MCALETH_CODE) Transit                 (void) = 0;         \
      virtual FUNC(void, MCALETH_CODE) Recive                  (void) = 0;         \
      virtual FUNC(void, MCALETH_CODE) TxConfirmation          (void) = 0;         \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_McalEth_Functionality{
   public:
      MCALETH_CORE_FUNCTIONALITIES_VIRTUAL
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

