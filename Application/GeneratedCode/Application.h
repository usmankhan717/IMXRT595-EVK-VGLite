/*******************************************************************************
*
* E M B E D D E D   W I Z A R D   P R O J E C T
*
*                                                Copyright (c) TARA Systems GmbH
*                                    written by Paul Banach and Manfred Schweyer
*
********************************************************************************
*
* This file was generated automatically by Embedded Wizard Studio.
*
* Please do not make any modifications of this file! The modifications are lost
* when the file is generated again by Embedded Wizard Studio!
*
* The template of this heading text can be found in the file 'head.ewt' in the
* directory 'Platforms' of your Embedded Wizard installation directory. If you
* wish to adapt this text, please copy the template file 'head.ewt' into your
* project directory and edit the copy only. Please avoid any modifications of
* the original template file!
*
* Version  : 12.03
* Profile  : iMX_RT
* Platform : NXP.iMX_RT_VGLite.RGB565
*
*******************************************************************************/

#ifndef Application_H
#define Application_H

#ifdef __cplusplus
  extern "C"
  {
#endif

#include "ewrte.h"
#if ( EW_RTE_VERSION >> 16 ) != 12
  #error Wrong version of Embedded Wizard Runtime Environment.
#endif

#include "ewgfx.h"
#if ( EW_GFX_VERSION >> 16 ) != 12
  #error Wrong version of Embedded Wizard Graphics Engine.
#endif

#include "_ApplicationApplication.h"

/* Font resource for large font - used for the caption text items. */
EW_DECLARE_FONT_RES( ApplicationFontLarge )

/* Bitmap resource for the Embedded Wizard logo. */
EW_DECLARE_BITMAP_RES( ApplicationLogo )

/* Font resource for small font - used for the description text items. */
EW_DECLARE_FONT_RES( ApplicationFontSmall )

#ifdef __cplusplus
  }
#endif

#endif /* Application_H */

/* Embedded Wizard */
