/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/chandrabhushan/coding/cs224_labs/lab_10/alu.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};
static int ng5[] = {4, 0};
static int ng6[] = {5, 0};
static int ng7[] = {6, 0};
static int ng8[] = {15, 0};
static int ng9[] = {7, 0};



static void Always_24_0(char *t0)
{
    char t10[8];
    char t40[8];
    char t41[8];
    char t47[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t48;

LAB0:    t1 = (t0 + 2680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 3000);
    *((int *)t2) = 1;
    t3 = (t0 + 2712);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(25, ng0);

LAB5:    xsi_set_current_line(26, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t6 == 1)
        goto LAB21;

LAB22:
LAB24:
LAB23:    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);

LAB25:    goto LAB2;

LAB7:    xsi_set_current_line(27, ng0);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    t7 = (t0 + 1208U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 16, t8, 16, t9, 16);
    t7 = (t0 + 1768);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 16);
    goto LAB25;

LAB9:    xsi_set_current_line(28, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 16, t4, 16, t7, 16);
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 16);
    goto LAB25;

LAB11:    xsi_set_current_line(29, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB26;

LAB27:
LAB28:    t35 = (t0 + 1768);
    xsi_vlogvar_assign_value(t35, t10, 0, 0, 16);
    goto LAB25;

LAB13:    xsi_set_current_line(30, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 & t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB29;

LAB30:
LAB31:    t35 = (t0 + 1768);
    xsi_vlogvar_assign_value(t35, t10, 0, 0, 16);
    goto LAB25;

LAB15:    xsi_set_current_line(31, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_lshift(t10, 16, t4, 16, t3, 32);
    t7 = (t0 + 1768);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 16);
    goto LAB25;

LAB17:    xsi_set_current_line(32, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_rshift(t10, 16, t4, 16, t3, 32);
    t7 = (t0 + 1768);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 16);
    goto LAB25;

LAB19:    xsi_set_current_line(33, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_lshift(t10, 16, t4, 16, t3, 32);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    t7 = (t0 + 1008U);
    t9 = (t7 + 72U);
    t21 = *((char **)t9);
    t22 = ((char*)((ng8)));
    xsi_vlog_generic_get_index_select_value(t40, 16, t8, t21, 2, t22, 32, 1);
    t11 = *((unsigned int *)t10);
    t12 = *((unsigned int *)t40);
    t13 = (t11 | t12);
    *((unsigned int *)t41) = t13;
    t35 = (t10 + 4);
    t42 = (t40 + 4);
    t43 = (t41 + 4);
    t14 = *((unsigned int *)t35);
    t15 = *((unsigned int *)t42);
    t16 = (t14 | t15);
    *((unsigned int *)t43) = t16;
    t17 = *((unsigned int *)t43);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB32;

LAB33:
LAB34:    t46 = (t0 + 1768);
    xsi_vlogvar_assign_value(t46, t41, 0, 0, 16);
    goto LAB25;

LAB21:    xsi_set_current_line(34, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_rshift(t10, 16, t4, 16, t3, 32);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    t7 = (t0 + 1008U);
    t9 = (t7 + 72U);
    t21 = *((char **)t9);
    t22 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t40, 16, t8, t21, 2, t22, 32, 1);
    t35 = ((char*)((ng8)));
    memset(t41, 0, 8);
    xsi_vlog_unsigned_lshift(t41, 16, t40, 16, t35, 32);
    t11 = *((unsigned int *)t10);
    t12 = *((unsigned int *)t41);
    t13 = (t11 | t12);
    *((unsigned int *)t47) = t13;
    t42 = (t10 + 4);
    t43 = (t41 + 4);
    t44 = (t47 + 4);
    t14 = *((unsigned int *)t42);
    t15 = *((unsigned int *)t43);
    t16 = (t14 | t15);
    *((unsigned int *)t44) = t16;
    t17 = *((unsigned int *)t44);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB35;

LAB36:
LAB37:    t48 = (t0 + 1768);
    xsi_vlogvar_assign_value(t48, t47, 0, 0, 16);
    goto LAB25;

LAB26:    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t19 | t20);
    t21 = (t4 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = *((unsigned int *)t22);
    t28 = (~(t27));
    t29 = *((unsigned int *)t7);
    t30 = (t29 & t28);
    t31 = (~(t26));
    t32 = (~(t30));
    t33 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t33 & t31);
    t34 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t34 & t32);
    goto LAB28;

LAB29:    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t19 | t20);
    t21 = (t4 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t4);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t27 = (~(t25));
    t28 = *((unsigned int *)t7);
    t29 = (~(t28));
    t31 = *((unsigned int *)t22);
    t32 = (~(t31));
    t26 = (t24 & t27);
    t30 = (t29 & t32);
    t33 = (~(t26));
    t34 = (~(t30));
    t36 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t36 & t33);
    t37 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t37 & t34);
    t38 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t38 & t33);
    t39 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t39 & t34);
    goto LAB31;

LAB32:    t19 = *((unsigned int *)t41);
    t20 = *((unsigned int *)t43);
    *((unsigned int *)t41) = (t19 | t20);
    t44 = (t10 + 4);
    t45 = (t40 + 4);
    t23 = *((unsigned int *)t44);
    t24 = (~(t23));
    t25 = *((unsigned int *)t10);
    t26 = (t25 & t24);
    t27 = *((unsigned int *)t45);
    t28 = (~(t27));
    t29 = *((unsigned int *)t40);
    t30 = (t29 & t28);
    t31 = (~(t26));
    t32 = (~(t30));
    t33 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t33 & t31);
    t34 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t34 & t32);
    goto LAB34;

LAB35:    t19 = *((unsigned int *)t47);
    t20 = *((unsigned int *)t44);
    *((unsigned int *)t47) = (t19 | t20);
    t45 = (t10 + 4);
    t46 = (t41 + 4);
    t23 = *((unsigned int *)t45);
    t24 = (~(t23));
    t25 = *((unsigned int *)t10);
    t26 = (t25 & t24);
    t27 = *((unsigned int *)t46);
    t28 = (~(t27));
    t29 = *((unsigned int *)t41);
    t30 = (t29 & t28);
    t31 = (~(t26));
    t32 = (~(t30));
    t33 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t33 & t31);
    t34 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t34 & t32);
    goto LAB37;

}


extern void work_m_15571303106304174388_2725559894_init()
{
	static char *pe[] = {(void *)Always_24_0};
	xsi_register_didat("work_m_15571303106304174388_2725559894", "isim/test_04_isim_beh.exe.sim/work/m_15571303106304174388_2725559894.didat");
	xsi_register_executes(pe);
}
