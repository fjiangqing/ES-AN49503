/******************************************************************************
*
* Freescale Semiconductor Inc.
* (c) Copyright 2013 Freescale Semiconductor, Inc.
* ALL RIGHTS RESERVED.
*
***************************************************************************
*
* THIS SOFTWARE IS PROVIDED BY FREESCALE "AS IS" AND ANY EXPRESSED OR
* IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
* OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
* IN NO EVENT SHALL FREESCALE OR ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
* INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
* (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
* SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
* HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
* STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
* IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
* THE POSSIBILITY OF SUCH DAMAGE.
*
***************************************************************************//*!
*
* @file isr.h
*
* @author Freescale
*
* @version 0.0.1
*
* @date Jun. 25, 2013
*
* @brief define interrupt service routines referenced by the vector table. 
*
* Note: Only "vectors.c" should include this header file.
*
*******************************************************************************
******************************************************************************/

#ifndef __ISR_H
#define __ISR_H


/* Example */
/*
#undef  VECTOR_036
#define VECTOR_036 RTC_Isr

// ISR(s) are defined in your project directory.
extern void RTC_Isr(void);
*/

/*!
 * @brief define interrupt service routine for different vectors.
 *
 */
#undef  VECTOR_036
#define VECTOR_036      RTC_Isr          /*!< Vector 36 points to RTC interrupt service routine */ 

#undef  VECTOR_002
#define VECTOR_002      NMI_Isr  /*!< Vector 2 points to NMI interrupt service routine */

#undef  VECTOR_040
#define VECTOR_040 KBI0_Isr

#if 1
#undef  VECTOR_046
#define VECTOR_046      MSCAN_RxIsr          /*!< Vector 36 points to RTC interrupt service routine */ 
#undef  VECTOR_047
#define VECTOR_047      MSCAN_TxIsr          /*!< Vector 36 points to RTC interrupt service routine */
#endif

extern void RTC_Isr(void);
extern void NMI_Isr(void);
extern void KBI0_Isr(void);
extern void MSCAN_RxIsr( void );
extern void MSCAN_TxIsr( void );

#endif  //__ISR_H

/* End of "isr.h" */
