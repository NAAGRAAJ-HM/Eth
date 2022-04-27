#pragma once
/******************************************************************************/
/* File   : Eth_core.hpp                                                      */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_Eth_Functionality{
   public:
      FUNC(void, ETH_CODE) GetControllerMode       (void);
      FUNC(void, ETH_CODE) SetControllerMode       (void);
      FUNC(void, ETH_CODE) GetPhysAddr             (void);
      FUNC(void, ETH_CODE) SetPhysAddr             (void);
      FUNC(void, ETH_CODE) UpdatePhysAddrFilter    (void);
      FUNC(void, ETH_CODE) ReadMii                 (void);
      FUNC(void, ETH_CODE) WriteMii                (void);
      FUNC(void, ETH_CODE) GetCounterValues        (void);
      FUNC(void, ETH_CODE) GetRxStatus             (void);
      FUNC(void, ETH_CODE) GetTxStatus             (void);
      FUNC(void, ETH_CODE) GetTxErrorCounterValues (void);
      FUNC(void, ETH_CODE) GetCurrentTime          (void);
      FUNC(void, ETH_CODE) EnableEgressTimeStamp   (void);
      FUNC(void, ETH_CODE) GetEgressTimeStamp      (void);
      FUNC(void, ETH_CODE) GetIngressTimeStamp     (void);
      FUNC(void, ETH_CODE) ProvideTxBuffer         (void);
      FUNC(void, ETH_CODE) Transit                 (void);
      FUNC(void, ETH_CODE) Recive                  (void);
      FUNC(void, ETH_CODE) TxConfirmation          (void);
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

