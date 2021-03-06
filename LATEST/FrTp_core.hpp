#pragma once
/******************************************************************************/
/* File   : FrTp_core.hpp                                                     */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_FrTp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define FRTP_CORE_FUNCTIONALITIES                                              \
              FUNC(void, FRTP_CODE) dummy                          (void);     \

#define FRTP_CORE_FUNCTIONALITIES_VIRTUAL                                      \
      virtual FUNC(void, FRTP_CODE) dummy                          (void) = 0; \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_FrTp_Functionality{
   public:
      FRTP_CORE_FUNCTIONALITIES_VIRTUAL
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

