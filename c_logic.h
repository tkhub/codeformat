/**
*********************************************************************************
*********************************************************************************
*********************************************************************************
@file c_logic.h
@version version_num
@author author_and_updater
@date auth_and_update_date
@brief Explanation of the file
@details Detailed_Explanation
@warning Warning_Message
@note Memo
*********************************************************************************
*********************************************************************************
*********************************************************************************
*/

/** @def __C_LOGIC_H__
 * Flag for PreProcessed Onetime
 */
#ifndef __C_LOGIC_H__
#define __C_LOGIC_H__

/******************************************************************************/
/*    INCLUDE                                                                 */
/******************************************************************************/
#include <stdio.h>

/******************************************************************************/
/*    TYPDE DEFINE                                                            */
/******************************************************************************/
/** @typedef  newint
 *  @brief    original int
 */
typedef int newint;

/******************************************************************************/
/*    ENUM DEFINE                                                             */
/******************************************************************************/
/** @enum   EN_TEST
 *  @brief  This is test of enum.
 */
typedef enum {
    EN_TEST_NG,
    EN_TEST_OK
}ENG_TEST;

/******************************************************************************/
/*    STRUCT DEFINE                                                           */
/******************************************************************************/
/** @struct stg_test_type
 *  @brief  This is test struct.
 */
typedef struct stg_teststruct_tag{
    int foo;
    char var;
}stg_test_type;

/******************************************************************************/
/*    MACRO DEFINE                                                            */
/******************************************************************************/
/** @def    ORG_ABS(x)
 *  @brief  This is original absolute macro
 */
#define ORG_ABS(x)  ((x) < 0 ? -(x) : (x))

/******************************************************************************/
/*  Declaration and Definition Switcher                                       */
/******************************************************************************/
/** @def    __GLOBAL_DEFINE__
 *  @brief  Flag of Global define
 */
#ifdef      __GLOBAL_DEFINE__
/** @def    __GLOBAL
 *  @brief  Empty when "__GLOBAL_DEFINE__" is defined. Use for Declaration.
 */
#define     __GLOBAL
#else       /* __GLOBAL_DEFINE__ */
/** @def    __GLOBAL
 *  @brief  "extern" when "__GLOBAL_DEFINE__" is not defined. Use for Definition.
 */
#define     __GLOBAL    extern
#endif      /* __GLOBAL_DEFINE__ */

/******************************************************************************/
/*    GLOBAL VARIABLE PROTOTYPE DEFINE                                        */
/******************************************************************************/
/** @var    test_var
 *  @brief  global variable.
 */
__GLOBAL int test_var;

/******************************************************************************/
/*    GLOBAL FUNCTION PROTOTYPE DEFINE                                        */
/******************************************************************************/
/** @fn         int test_func(int x, int y)
 *  @brief      This is test_func.
 *  @param x    This is x.
 *  @param y    This is y.
 *  @return     This is return value
 *  @details    This is details of test_func.
 */
__GLOBAL int test_func(int x, int y);


#undef   __GLOBAL    
#endif  /* __C_LOGIC_H__*/
