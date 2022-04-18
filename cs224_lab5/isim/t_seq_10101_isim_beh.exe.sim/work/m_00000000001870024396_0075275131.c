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
static const char *ng0 = "C:/cs221_lab/cs224_lab5/t_seq_10101.v";
static const char *ng1 = "dump.vcd";
static int ng2[] = {0, 0};
static const char *ng3 = "M2";
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {1U, 0U};
static const char *ng6 = "";
static const char *ng7 = " ";
static const char *ng8 = "%b   %b";
static int ng9[] = {25, 0};



static void Initial_31_0(char *t0)
{
    char *t1;

LAB0:    xsi_set_current_line(31, ng0);

LAB2:    xsi_set_current_line(32, ng0);
    xsi_vcd_dumpfile(ng1);
    xsi_set_current_line(33, ng0);
    t1 = ((char*)((ng2)));
    xsi_vcd_dumpvars_args(*((unsigned int *)t1), t0, (char)115, ng3, (char)101);

LAB1:    return;
}

static void Initial_36_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(36, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 1608);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_37_2(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 3184U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2992);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 1608);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t0 + 1608);
    xsi_vlogvar_assign_value(t14, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

}

static void Initial_39_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);

LAB4:    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 3240);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(41, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB1;

}

static void Initial_44_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 3680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);

LAB4:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 3488);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(45, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 3488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(46, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 3488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(47, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 3488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(48, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 3488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(49, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 3488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(50, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 3488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(51, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 3488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(52, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 3488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(53, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 3488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(54, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 3488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB15:    xsi_set_current_line(55, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 3488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB16:    xsi_set_current_line(56, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB17:    xsi_set_current_line(57, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 3488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB18:    xsi_set_current_line(58, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 3488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB19:    xsi_set_current_line(59, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB20:    xsi_set_current_line(60, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 3488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB21:    xsi_set_current_line(61, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB22:    xsi_set_current_line(62, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB23:    xsi_set_current_line(63, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 3488);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB24:    xsi_set_current_line(64, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}

static void Initial_67_5(char *t0)
{
    char t3[16];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 3928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(67, ng0);

LAB4:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3736);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(68, ng0);
    t4 = xsi_vlog_time(t3, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(0, 0, 0, ng6, 2, t0, (char)118, t3, 64);
    xsi_vlogfile_write(0, 0, 0, ng7, 1, t0);
    t5 = (t0 + 1448);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 1048U);
    t9 = *((char **)t8);
    xsi_vlogfile_write(1, 0, 0, ng8, 3, t0, (char)118, t7, 1, (char)118, t9, 1);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng9)));
    t4 = (t2 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (~(t10));
    t12 = *((unsigned int *)t2);
    t13 = (t12 & t11);
    t5 = (t0 + 5884);
    *((int *)t5) = t13;

LAB6:    t6 = (t0 + 5884);
    if (*((int *)t6) > 0)
        goto LAB7;

LAB8:    goto LAB1;

LAB7:    xsi_set_current_line(69, ng0);

LAB9:    xsi_set_current_line(70, ng0);
    t7 = (t0 + 3736);
    xsi_process_wait(t7, 10000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(70, ng0);
    t8 = xsi_vlog_time(t3, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(0, 0, 0, ng6, 2, t0, (char)118, t3, 64);
    xsi_vlogfile_write(0, 0, 0, ng7, 1, t0);
    t9 = (t0 + 1448);
    t14 = (t9 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 1048U);
    t17 = *((char **)t16);
    xsi_vlogfile_write(1, 0, 0, ng8, 3, t0, (char)118, t15, 1, (char)118, t17, 1);
    t2 = (t0 + 5884);
    t13 = *((int *)t2);
    *((int *)t2) = (t13 - 1);
    goto LAB6;

}


extern void work_m_00000000001870024396_0075275131_init()
{
	static char *pe[] = {(void *)Initial_31_0,(void *)Initial_36_1,(void *)Always_37_2,(void *)Initial_39_3,(void *)Initial_44_4,(void *)Initial_67_5};
	xsi_register_didat("work_m_00000000001870024396_0075275131", "isim/t_seq_10101_isim_beh.exe.sim/work/m_00000000001870024396_0075275131.didat");
	xsi_register_executes(pe);
}
