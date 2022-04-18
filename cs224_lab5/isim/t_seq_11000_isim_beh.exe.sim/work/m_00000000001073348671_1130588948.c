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
static const char *ng0 = "C:/cs221_lab/cs224_lab5/seq_11000.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};



static void Always_33_0(char *t0)
{
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

LAB0:    t1 = (t0 + 3824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 4640);
    *((int *)t2) = 1;
    t3 = (t0 + 3856);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(34, ng0);

LAB5:    xsi_set_current_line(35, ng0);
    t4 = (t0 + 2184U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 2744);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2904);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(35, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2904);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    goto LAB8;

}

static void Always_40_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 4656);
    *((int *)t2) = 1;
    t3 = (t0 + 4104);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(41, ng0);
    t4 = (t0 + 2904);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB5:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB16;

LAB17:
LAB18:    goto LAB2;

LAB6:    xsi_set_current_line(42, ng0);

LAB19:    xsi_set_current_line(43, ng0);
    t9 = (t0 + 1864U);
    t10 = *((char **)t9);
    t9 = (t10 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB22:    goto LAB18;

LAB8:    xsi_set_current_line(46, ng0);

LAB23:    xsi_set_current_line(47, ng0);
    t3 = (t0 + 1864U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB26:    goto LAB18;

LAB10:    xsi_set_current_line(50, ng0);

LAB27:    xsi_set_current_line(51, ng0);
    t3 = (t0 + 1864U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB30:    goto LAB18;

LAB12:    xsi_set_current_line(54, ng0);

LAB31:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 1864U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB34:    goto LAB18;

LAB14:    xsi_set_current_line(58, ng0);

LAB35:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 1864U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB38:    goto LAB18;

LAB16:    xsi_set_current_line(62, ng0);

LAB39:    xsi_set_current_line(63, ng0);
    t3 = (t0 + 1864U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB42:    goto LAB18;

LAB20:    xsi_set_current_line(43, ng0);
    t16 = ((char*)((ng2)));
    t17 = (t0 + 2744);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 3);
    goto LAB22;

LAB24:    xsi_set_current_line(47, ng0);
    t5 = ((char*)((ng3)));
    t7 = (t0 + 2744);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 3);
    goto LAB26;

LAB28:    xsi_set_current_line(51, ng0);
    t5 = ((char*)((ng2)));
    t7 = (t0 + 2744);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 3);
    goto LAB30;

LAB32:    xsi_set_current_line(55, ng0);
    t5 = ((char*)((ng2)));
    t7 = (t0 + 2744);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 3);
    goto LAB34;

LAB36:    xsi_set_current_line(59, ng0);
    t5 = ((char*)((ng2)));
    t7 = (t0 + 2744);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 3);
    goto LAB38;

LAB40:    xsi_set_current_line(63, ng0);
    t5 = ((char*)((ng2)));
    t7 = (t0 + 2744);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 3);
    goto LAB42;

}

static void Always_68_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    int t11;
    int t12;
    int t13;
    int t14;

LAB0:    t1 = (t0 + 4320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 4672);
    *((int *)t2) = 1;
    t3 = (t0 + 4352);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(69, ng0);
    t4 = (t0 + 2904);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB5:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB8;

LAB9:    t3 = ((char*)((ng3)));
    t11 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 3);
    if (t11 == 1)
        goto LAB10;

LAB11:    t4 = ((char*)((ng4)));
    t12 = xsi_vlog_unsigned_case_compare(t6, 3, t4, 3);
    if (t12 == 1)
        goto LAB12;

LAB13:    t5 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t6, 3, t5, 3);
    if (t13 == 1)
        goto LAB14;

LAB15:    t7 = ((char*)((ng6)));
    t14 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t14 == 1)
        goto LAB16;

LAB17:
LAB18:    goto LAB2;

LAB6:    xsi_set_current_line(70, ng0);
    t9 = ((char*)((ng1)));
    t10 = (t0 + 2584);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 1, 0LL);
    goto LAB18;

LAB8:    goto LAB6;

LAB10:    goto LAB6;

LAB12:    goto LAB6;

LAB14:    goto LAB6;

LAB16:    xsi_set_current_line(71, ng0);
    t9 = ((char*)((ng2)));
    t10 = (t0 + 2584);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 1, 0LL);
    goto LAB18;

}


extern void work_m_00000000001073348671_1130588948_init()
{
	static char *pe[] = {(void *)Always_33_0,(void *)Always_40_1,(void *)Always_68_2};
	xsi_register_didat("work_m_00000000001073348671_1130588948", "isim/t_seq_11000_isim_beh.exe.sim/work/m_00000000001073348671_1130588948.didat");
	xsi_register_executes(pe);
}
