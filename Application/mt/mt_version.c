/******************************************************************************
  Filename:     MT_VERSION.c
  Revised:      $Date: 2014-11-19 13:29:24 -0800 (Wed, 19 Nov 2014) $
  Revision:     $Revision: 41175 $

  Description:  Provides the version identification numbers

  Copyright 2007-2014 Texas Instruments Incorporated. All rights reserved.

  IMPORTANT: Your use of this Software is limited to those specific rights
  granted under the terms of a software license agreement between the user
  who downloaded the software, his/her employer (which must be your employer)
  and Texas Instruments Incorporated (the "License"). You may not use this
  Software unless you agree to abide by the terms of the License. The License
  limits your use, and you acknowledge, that the Software may not be modified,
  copied or distributed unless embedded on a Texas Instruments microcontroller
  or used solely and exclusively in conjunction with a Texas Instruments radio
  frequency transceiver, which is integrated into your product. Other than for
  the foregoing purpose, you may not use, reproduce, copy, prepare derivative
  works of, modify, distribute, perform, display or sell this Software and/or
  its documentation for any purpose.

  YOU FURTHER ACKNOWLEDGE AND AGREE THAT THE SOFTWARE AND DOCUMENTATION ARE
  PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND, EITHER EXPRESS OR IMPLIED,
  INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF MERCHANTABILITY, TITLE,
  NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT SHALL
  TEXAS INSTRUMENTS OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER CONTRACT,
  NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR OTHER
  LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
  INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE
  OR CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT
  OF SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
  (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

  Should you have any questions regarding your right to use this Software,
  contact Texas Instruments Incorporated at www.TI.com.

******************************************************************************/

/******************************************************************************
 * INCLUDES
 *****************************************************************************/
#include "zcomdef.h"
#include "mt_version.h"

#if defined( INCLUDE_REVISION_INFORMATION )
// The following include file, revision_info.h, shall be an auto-generated file.
// It shall include a single #define line, defining CODE_REVISION_NUMBER to the
// actual revision of the code. It should be generated by a script, that will
// query the revision number from the source control system in use, e.g. svn.
// This script shall be executed as a pre-build action in IAR, e.g. as follows:
// $PROJ_DIR$\..\..\Tools\Common\update_revision_info.bat $PROJ_DIR$
#include "revision_info.h"
#if !defined( CODE_REVISION_NUMBER )
#error CODE_REVISION_NUMBER not defined!
#endif
#if defined( MAKE_CRC_SHDW )
#define BOOTLOADER_BUILD_TYPE 1 //built as bin (bootloadable image)
#elif defined( FAKE_CRC_SHDW )
#define BOOTLOADER_BUILD_TYPE 2 //built as hex, including a bootloader image
#else
#define BOOTLOADER_BUILD_TYPE 0 //non-bootloader build
#endif
#endif


/******************************************************************************
 * CONSTANTS
 *****************************************************************************/
const uint8_t MTVersionString[] = {
                                   2,  /* Transport protocol revision */
                                   1,  /* Product ID */
                                   2,  /* Software major release number */
                                   7,  /* Software minor release number */
                                   1,  /* Software maintenance release number */
#if defined( INCLUDE_REVISION_INFORMATION )
                                   ((CODE_REVISION_NUMBER >> 0)  & 0xFF),
                                   ((CODE_REVISION_NUMBER >> 8)  & 0xFF),
                                   ((CODE_REVISION_NUMBER >> 16) & 0xFF),
                                   ((CODE_REVISION_NUMBER >> 24) & 0xFF),
                                   BOOTLOADER_BUILD_TYPE
#endif
                                 };

/******************************************************************************
 */
