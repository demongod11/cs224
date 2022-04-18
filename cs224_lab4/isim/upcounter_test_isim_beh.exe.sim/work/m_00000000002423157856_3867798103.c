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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/cs221_lab/cs224_lab4/upcounter.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};



static void Always_23_0(char *t0)
{
    char t13[8];
    char t26[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t27;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 3328);
    *((int *)t2) = 1;
    t3 = (t0 + 3040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(24, ng0);

LAB5:    xsi_set_current_line(25, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(33, ng0);

LAB18:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(42, ng0);

LAB31:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB32;

LAB33:
LAB34:
LAB21:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(26, ng0);

LAB9:    xsi_set_current_line(27, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2088);
    t14 = (t0 + 2088);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t13, t16, 2, t17, 32, 1);
    t18 = (t13 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    if (t20 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    t4 = (t0 + 2088);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t14 = (t13 + 4);
    t6 = *((unsigned int *)t14);
    t20 = (!(t6));
    if (t20 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(29, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    t4 = (t0 + 2088);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t14 = (t13 + 4);
    t6 = *((unsigned int *)t14);
    t20 = (!(t6));
    if (t20 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    t4 = (t0 + 2088);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t14 = (t13 + 4);
    t6 = *((unsigned int *)t14);
    t20 = (!(t6));
    if (t20 == 1)
        goto LAB16;

LAB17:    goto LAB8;

LAB10:    xsi_vlogvar_wait_assign_value(t12, t11, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB11;

LAB12:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB13;

LAB14:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB15;

LAB16:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB17;

LAB19:    xsi_set_current_line(35, ng0);

LAB22:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    t4 = (t13 + 4);
    t11 = (t5 + 4);
    t19 = *((unsigned int *)t5);
    t21 = (t19 >> 0);
    t22 = (t21 & 1);
    *((unsigned int *)t13) = t22;
    t23 = *((unsigned int *)t11);
    t24 = (t23 >> 0);
    t25 = (t24 & 1);
    *((unsigned int *)t4) = t25;
    t12 = (t0 + 2088);
    t14 = (t0 + 2088);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t26, t16, 2, t17, 32, 1);
    t18 = (t26 + 4);
    t27 = *((unsigned int *)t18);
    t20 = (!(t27));
    if (t20 == 1)
        goto LAB23;

LAB24:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 1);
    t19 = (t10 & 1);
    *((unsigned int *)t2) = t19;
    t5 = (t0 + 2088);
    t11 = (t0 + 2088);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t15 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t26, t14, 2, t15, 32, 1);
    t16 = (t26 + 4);
    t21 = *((unsigned int *)t16);
    t20 = (!(t21));
    if (t20 == 1)
        goto LAB25;

LAB26:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 2);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 2);
    t19 = (t10 & 1);
    *((unsigned int *)t2) = t19;
    t5 = (t0 + 2088);
    t11 = (t0 + 2088);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t15 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t26, t14, 2, t15, 32, 1);
    t16 = (t26 + 4);
    t21 = *((unsigned int *)t16);
    t20 = (!(t21));
    if (t20 == 1)
        goto LAB27;

LAB28:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 3);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 3);
    t19 = (t10 & 1);
    *((unsigned int *)t2) = t19;
    t5 = (t0 + 2088);
    t11 = (t0 + 2088);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t15 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t26, t14, 2, t15, 32, 1);
    t16 = (t26 + 4);
    t21 = *((unsigned int *)t16);
    t20 = (!(t21));
    if (t20 == 1)
        goto LAB29;

LAB30:    goto LAB21;

LAB23:    xsi_vlogvar_wait_assign_value(t12, t13, 0, *((unsigned int *)t26), 1, 0LL);
    goto LAB24;

LAB25:    xsi_vlogvar_wait_assign_value(t5, t13, 0, *((unsigned int *)t26), 1, 0LL);
    goto LAB26;

LAB27:    xsi_vlogvar_wait_assign_value(t5, t13, 0, *((unsigned int *)t26), 1, 0LL);
    goto LAB28;

LAB29:    xsi_vlogvar_wait_assign_value(t5, t13, 0, *((unsigned int *)t26), 1, 0LL);
    goto LAB30;

LAB32:    xsi_set_current_line(44, ng0);

LAB35:    xsi_set_current_line(45, ng0);
    t4 = (t0 + 2088);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t11, 4, t12, 32);
    t14 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 4, 0LL);
    goto LAB34;

}


extern void work_m_00000000002423157856_3867798103_init()
{
	static char *pe[] = {(void *)Always_23_0};
	xsi_register_didat("work_m_00000000002423157856_3867798103", "isim/upcounter_test_isim_beh.exe.sim/work/m_00000000002423157856_3867798103.didat");
	xsi_register_executes(pe);
}
