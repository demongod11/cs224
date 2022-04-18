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
static const char *ng0 = "/home/chandrabhushan/coding/cs224_labs/lab_10/mem_controller.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static int ng6[] = {6, 0};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {7U, 0U};
static unsigned int ng10[] = {8U, 0U};
static unsigned int ng11[] = {9U, 0U};
static unsigned int ng12[] = {10U, 0U};
static int ng13[] = {0, 0};
static int ng14[] = {2, 0};
static unsigned int ng15[] = {11U, 0U};
static int ng16[] = {1, 0};
static unsigned int ng17[] = {12U, 0U};
static unsigned int ng18[] = {13U, 0U};
static int ng19[] = {4, 0};



static void Always_83_0(char *t0)
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

LAB0:    t1 = (t0 + 9384U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 10200);
    *((int *)t2) = 1;
    t3 = (t0 + 9416);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(84, ng0);

LAB5:    xsi_set_current_line(85, ng0);
    t4 = (t0 + 2952U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 5752);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4152);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(86, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 4152);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 4);
    goto LAB8;

}

static void Always_91_1(char *t0)
{
    char t9[8];
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;

LAB0:    t1 = (t0 + 9632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 10216);
    *((int *)t2) = 1;
    t3 = (t0 + 9664);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(92, ng0);

LAB5:    xsi_set_current_line(93, ng0);
    t4 = (t0 + 4152);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t7, 4);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng12)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng15)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng17)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng18)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB33;

LAB34:
LAB35:    goto LAB2;

LAB7:    xsi_set_current_line(94, ng0);
    t11 = (t0 + 3272U);
    t12 = *((char **)t11);
    memset(t10, 0, 8);
    t11 = (t12 + 4);
    t13 = *((unsigned int *)t11);
    t14 = (~(t13));
    t15 = *((unsigned int *)t12);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t11) != 0)
        goto LAB38;

LAB39:    t19 = (t10 + 4);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t19);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB40;

LAB41:    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t19);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t19) > 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t10) > 0)
        goto LAB46;

LAB47:    memcpy(t9, t28, 8);

LAB48:    t29 = (t0 + 5752);
    xsi_vlogvar_assign_value(t29, t9, 0, 0, 4);
    goto LAB35;

LAB9:    xsi_set_current_line(95, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 5752);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB35;

LAB11:    xsi_set_current_line(96, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 5752);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB35;

LAB13:    xsi_set_current_line(97, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 5752);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB35;

LAB15:    xsi_set_current_line(99, ng0);

LAB49:    xsi_set_current_line(100, ng0);
    t3 = (t0 + 5592);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng6)));
    memset(t9, 0, 8);
    t11 = (t5 + 4);
    t12 = (t7 + 4);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t20 = (t16 ^ t17);
    t21 = (t15 | t20);
    t22 = *((unsigned int *)t11);
    t24 = *((unsigned int *)t12);
    t25 = (t22 | t24);
    t26 = (~(t25));
    t27 = (t21 & t26);
    if (t27 != 0)
        goto LAB53;

LAB50:    if (t25 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t9) = 1;

LAB53:    t19 = (t9 + 4);
    t30 = *((unsigned int *)t19);
    t31 = (~(t30));
    t32 = *((unsigned int *)t9);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5752);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB56:    goto LAB35;

LAB17:    xsi_set_current_line(103, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 5752);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB35;

LAB19:    xsi_set_current_line(104, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 5752);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB35;

LAB21:    xsi_set_current_line(105, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 5752);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB35;

LAB23:    xsi_set_current_line(106, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 5752);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB35;

LAB25:    xsi_set_current_line(107, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 5752);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB35;

LAB27:    xsi_set_current_line(109, ng0);

LAB57:    xsi_set_current_line(110, ng0);
    t3 = (t0 + 7832);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng13)));
    memset(t9, 0, 8);
    t11 = (t5 + 4);
    t12 = (t7 + 4);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t20 = (t16 ^ t17);
    t21 = (t15 | t20);
    t22 = *((unsigned int *)t11);
    t24 = *((unsigned int *)t12);
    t25 = (t22 | t24);
    t26 = (~(t25));
    t27 = (t21 & t26);
    if (t27 != 0)
        goto LAB61;

LAB58:    if (t25 != 0)
        goto LAB60;

LAB59:    *((unsigned int *)t9) = 1;

LAB61:    t19 = (t9 + 4);
    t30 = *((unsigned int *)t19);
    t31 = (~(t30));
    t32 = *((unsigned int *)t9);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB62;

LAB63:    xsi_set_current_line(116, ng0);

LAB69:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 7672);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng16)));
    memset(t9, 0, 8);
    xsi_vlog_signed_equal(t9, 32, t4, 32, t5, 32);
    t7 = (t9 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (~(t13));
    t15 = *((unsigned int *)t9);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB70;

LAB71:    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 5752);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB72:
LAB64:    goto LAB35;

LAB29:    xsi_set_current_line(121, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 5752);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB35;

LAB31:    xsi_set_current_line(122, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 5752);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB35;

LAB33:    xsi_set_current_line(124, ng0);

LAB73:    xsi_set_current_line(125, ng0);
    t3 = (t0 + 7352);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng19)));
    memset(t9, 0, 8);
    xsi_vlog_signed_equal(t9, 32, t5, 32, t7, 32);
    t11 = (t9 + 4);
    t13 = *((unsigned int *)t11);
    t14 = (~(t13));
    t15 = *((unsigned int *)t9);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB74;

LAB75:    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 5752);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB76:    goto LAB35;

LAB36:    *((unsigned int *)t10) = 1;
    goto LAB39;

LAB38:    t18 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB39;

LAB40:    t23 = ((char*)((ng2)));
    goto LAB41;

LAB42:    t28 = ((char*)((ng1)));
    goto LAB43;

LAB44:    xsi_vlog_unsigned_bit_combine(t9, 4, t23, 4, t28, 4);
    goto LAB48;

LAB46:    memcpy(t9, t23, 8);
    goto LAB48;

LAB52:    t18 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB53;

LAB54:    xsi_set_current_line(100, ng0);
    t23 = ((char*)((ng7)));
    t28 = (t0 + 5752);
    xsi_vlogvar_assign_value(t28, t23, 0, 0, 4);
    goto LAB56;

LAB60:    t18 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB61;

LAB62:    xsi_set_current_line(111, ng0);

LAB65:    xsi_set_current_line(112, ng0);
    t23 = (t0 + 7512);
    t28 = (t23 + 56U);
    t29 = *((char **)t28);
    t35 = ((char*)((ng14)));
    memset(t10, 0, 8);
    xsi_vlog_signed_equal(t10, 32, t29, 32, t35, 32);
    t36 = (t10 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (~(t37));
    t39 = *((unsigned int *)t10);
    t40 = (t39 & t38);
    t41 = (t40 != 0);
    if (t41 > 0)
        goto LAB66;

LAB67:    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 5752);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB68:    goto LAB64;

LAB66:    xsi_set_current_line(112, ng0);
    t42 = ((char*)((ng15)));
    t43 = (t0 + 5752);
    xsi_vlogvar_assign_value(t43, t42, 0, 0, 4);
    goto LAB68;

LAB70:    xsi_set_current_line(117, ng0);
    t11 = ((char*)((ng15)));
    t12 = (t0 + 5752);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 4);
    goto LAB72;

LAB74:    xsi_set_current_line(125, ng0);
    t12 = ((char*)((ng1)));
    t18 = (t0 + 5752);
    xsi_vlogvar_assign_value(t18, t12, 0, 0, 4);
    goto LAB76;

}

static void Always_131_2(char *t0)
{
    char t11[8];
    char t34[8];
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
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;

LAB0:    t1 = (t0 + 9880U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(131, ng0);
    t2 = (t0 + 10232);
    *((int *)t2) = 1;
    t3 = (t0 + 9912);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(132, ng0);

LAB5:    xsi_set_current_line(133, ng0);
    t4 = (t0 + 4152);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t7, 4);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng15)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng17)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB27;

LAB28:
LAB29:    goto LAB2;

LAB7:    xsi_set_current_line(135, ng0);

LAB30:    xsi_set_current_line(136, ng0);
    t9 = ((char*)((ng13)));
    t10 = (t0 + 5912);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 5);
    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 6712);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 5592);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB29;

LAB9:    xsi_set_current_line(141, ng0);

LAB31:    xsi_set_current_line(142, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 6552);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 6232);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 6392);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB29;

LAB11:    xsi_set_current_line(146, ng0);

LAB32:    xsi_set_current_line(147, ng0);
    t3 = (t0 + 3432U);
    t4 = *((char **)t3);
    t3 = (t0 + 4312);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 16);
    xsi_set_current_line(148, ng0);
    t2 = (t0 + 4312);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6872);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 16);
    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 7032);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB29;

LAB13:    xsi_set_current_line(153, ng0);

LAB33:    xsi_set_current_line(154, ng0);
    t3 = (t0 + 5592);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng16)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t5, 4, t7, 32);
    t9 = (t0 + 5592);
    xsi_vlogvar_assign_value(t9, t11, 0, 0, 4);
    xsi_set_current_line(155, ng0);
    t2 = (t0 + 5912);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng16)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t4, 5, t5, 32);
    t7 = (t0 + 5912);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 5);
    xsi_set_current_line(156, ng0);
    t2 = (t0 + 6712);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng16)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t4, 4, t5, 32);
    t7 = (t0 + 6712);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 4);
    xsi_set_current_line(157, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 7352);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB29;

LAB15:    xsi_set_current_line(161, ng0);

LAB34:    xsi_set_current_line(162, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 6552);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(162, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 6232);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(162, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 6392);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB29;

LAB17:    xsi_set_current_line(166, ng0);

LAB35:    xsi_set_current_line(167, ng0);
    t3 = (t0 + 3432U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t11 + 4);
    t5 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 15);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 15);
    *((unsigned int *)t3) = t15;
    t16 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t16 & 1U);
    t17 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t17 & 1U);
    t7 = (t0 + 7832);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 1);
    xsi_set_current_line(167, ng0);
    t2 = (t0 + 3432U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (t12 >> 12);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 12);
    *((unsigned int *)t2) = t15;
    t16 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t16 & 7U);
    t17 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t17 & 7U);
    t5 = (t0 + 4472);
    xsi_vlogvar_assign_value(t5, t11, 0, 0, 3);
    xsi_set_current_line(167, ng0);
    t2 = (t0 + 3432U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (t12 >> 8);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 8);
    *((unsigned int *)t2) = t15;
    t16 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t16 & 15U);
    t17 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t17 & 15U);
    t5 = (t0 + 4632);
    xsi_vlogvar_assign_value(t5, t11, 0, 0, 4);
    xsi_set_current_line(167, ng0);
    t2 = (t0 + 3432U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (t12 >> 4);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 4);
    *((unsigned int *)t2) = t15;
    t16 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t16 & 15U);
    t17 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t17 & 15U);
    t5 = (t0 + 4792);
    xsi_vlogvar_assign_value(t5, t11, 0, 0, 4);
    xsi_set_current_line(167, ng0);
    t2 = (t0 + 3432U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (t12 >> 0);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 0);
    *((unsigned int *)t2) = t15;
    t16 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t16 & 15U);
    t17 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t17 & 15U);
    t5 = (t0 + 4952);
    xsi_vlogvar_assign_value(t5, t11, 0, 0, 4);
    xsi_set_current_line(168, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 7512);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(168, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 7672);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(168, ng0);
    t2 = (t0 + 5912);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng16)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t4, 5, t5, 32);
    t7 = (t0 + 5912);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 5);
    xsi_set_current_line(168, ng0);
    t2 = (t0 + 5592);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng16)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t4, 4, t5, 32);
    t7 = (t0 + 5592);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 4);
    goto LAB29;

LAB19:    xsi_set_current_line(172, ng0);

LAB36:    xsi_set_current_line(173, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 7032);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(174, ng0);
    t2 = (t0 + 7832);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng13)));
    memset(t11, 0, 8);
    t7 = (t4 + 4);
    t9 = (t5 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t9);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t9);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB40;

LAB37:    if (t21 != 0)
        goto LAB39;

LAB38:    *((unsigned int *)t11) = 1;

LAB40:    t24 = (t11 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t11);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB41;

LAB42:    xsi_set_current_line(180, ng0);

LAB51:    xsi_set_current_line(181, ng0);
    t2 = (t0 + 7672);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng13)));
    memset(t11, 0, 8);
    xsi_vlog_signed_equal(t11, 32, t4, 32, t5, 32);
    t7 = (t11 + 4);
    t12 = *((unsigned int *)t7);
    t13 = (~(t12));
    t14 = *((unsigned int *)t11);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB52;

LAB53:
LAB54:
LAB43:    goto LAB29;

LAB21:    xsi_set_current_line(186, ng0);

LAB55:    xsi_set_current_line(187, ng0);
    t3 = (t0 + 7832);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng13)));
    memset(t11, 0, 8);
    t9 = (t5 + 4);
    t10 = (t7 + 4);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t9);
    t16 = *((unsigned int *)t10);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t9);
    t20 = *((unsigned int *)t10);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB59;

LAB56:    if (t21 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t11) = 1;

LAB59:    t30 = (t11 + 4);
    t25 = *((unsigned int *)t30);
    t26 = (~(t25));
    t27 = *((unsigned int *)t11);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(193, ng0);

LAB70:    xsi_set_current_line(194, ng0);
    t2 = (t0 + 7672);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng13)));
    memset(t11, 0, 8);
    xsi_vlog_signed_equal(t11, 32, t4, 32, t5, 32);
    t7 = (t11 + 4);
    t12 = *((unsigned int *)t7);
    t13 = (~(t12));
    t14 = *((unsigned int *)t11);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB71;

LAB72:
LAB73:
LAB62:    goto LAB29;

LAB23:    xsi_set_current_line(199, ng0);

LAB74:    xsi_set_current_line(200, ng0);
    t3 = (t0 + 7832);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng13)));
    memset(t11, 0, 8);
    t9 = (t5 + 4);
    t10 = (t7 + 4);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t9);
    t16 = *((unsigned int *)t10);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t9);
    t20 = *((unsigned int *)t10);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB78;

LAB75:    if (t21 != 0)
        goto LAB77;

LAB76:    *((unsigned int *)t11) = 1;

LAB78:    t30 = (t11 + 4);
    t25 = *((unsigned int *)t30);
    t26 = (~(t25));
    t27 = *((unsigned int *)t11);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB79;

LAB80:    xsi_set_current_line(201, ng0);
    t2 = (t0 + 7672);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng16)));
    memset(t11, 0, 8);
    xsi_vlog_signed_add(t11, 32, t4, 32, t5, 32);
    t7 = (t0 + 7672);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 32);

LAB81:    goto LAB29;

LAB25:    xsi_set_current_line(204, ng0);

LAB82:    xsi_set_current_line(205, ng0);
    t3 = (t0 + 7832);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng13)));
    memset(t11, 0, 8);
    t9 = (t5 + 4);
    t10 = (t7 + 4);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t9);
    t16 = *((unsigned int *)t10);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t9);
    t20 = *((unsigned int *)t10);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB86;

LAB83:    if (t21 != 0)
        goto LAB85;

LAB84:    *((unsigned int *)t11) = 1;

LAB86:    t30 = (t11 + 4);
    t25 = *((unsigned int *)t30);
    t26 = (~(t25));
    t27 = *((unsigned int *)t11);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB87;

LAB88:    xsi_set_current_line(210, ng0);

LAB91:    xsi_set_current_line(211, ng0);
    t2 = (t0 + 8312);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t11, t4, 8);
    t5 = (t0 + 5112);
    xsi_vlogvar_assign_value(t5, t11, 0, 0, 16);
    xsi_set_current_line(211, ng0);
    t2 = (t0 + 4952);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t11, t4, 8);
    t5 = (t0 + 5272);
    xsi_vlogvar_assign_value(t5, t11, 0, 0, 16);
    xsi_set_current_line(211, ng0);
    t2 = (t0 + 4472);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7192);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);

LAB89:    goto LAB29;

LAB27:    xsi_set_current_line(216, ng0);

LAB92:    xsi_set_current_line(217, ng0);
    t3 = (t0 + 3752U);
    t4 = *((char **)t3);
    t3 = (t0 + 5432);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 16);
    xsi_set_current_line(217, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 7032);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(217, ng0);
    t2 = (t0 + 5432);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6872);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 16);
    xsi_set_current_line(218, ng0);
    t2 = (t0 + 4632);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6712);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(218, ng0);
    t2 = (t0 + 7352);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng16)));
    memset(t11, 0, 8);
    xsi_vlog_signed_add(t11, 32, t4, 32, t5, 32);
    t7 = (t0 + 7352);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 32);
    goto LAB29;

LAB39:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB40;

LAB41:    xsi_set_current_line(175, ng0);

LAB44:    xsi_set_current_line(176, ng0);
    t30 = (t0 + 7512);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng13)));
    memset(t34, 0, 8);
    xsi_vlog_signed_equal(t34, 32, t32, 32, t33, 32);
    t35 = (t34 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (~(t36));
    t38 = *((unsigned int *)t34);
    t39 = (t38 & t37);
    t40 = (t39 != 0);
    if (t40 > 0)
        goto LAB45;

LAB46:    xsi_set_current_line(177, ng0);
    t2 = (t0 + 7512);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng16)));
    memset(t11, 0, 8);
    xsi_vlog_signed_equal(t11, 32, t4, 32, t5, 32);
    t7 = (t11 + 4);
    t12 = *((unsigned int *)t7);
    t13 = (~(t12));
    t14 = *((unsigned int *)t11);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB48;

LAB49:
LAB50:
LAB47:    goto LAB43;

LAB45:    xsi_set_current_line(176, ng0);
    t41 = (t0 + 4792);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t0 + 6712);
    xsi_vlogvar_assign_value(t44, t43, 0, 0, 4);
    goto LAB47;

LAB48:    xsi_set_current_line(177, ng0);
    t9 = (t0 + 4952);
    t10 = (t9 + 56U);
    t24 = *((char **)t10);
    t30 = (t0 + 6712);
    xsi_vlogvar_assign_value(t30, t24, 0, 0, 4);
    goto LAB50;

LAB52:    xsi_set_current_line(181, ng0);
    t9 = (t0 + 4792);
    t10 = (t9 + 56U);
    t24 = *((char **)t10);
    t30 = (t0 + 6712);
    xsi_vlogvar_assign_value(t30, t24, 0, 0, 4);
    goto LAB54;

LAB58:    t24 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB59;

LAB60:    xsi_set_current_line(188, ng0);

LAB63:    xsi_set_current_line(189, ng0);
    t31 = (t0 + 7512);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t35 = ((char*)((ng13)));
    memset(t34, 0, 8);
    xsi_vlog_signed_equal(t34, 32, t33, 32, t35, 32);
    t41 = (t34 + 4);
    t36 = *((unsigned int *)t41);
    t37 = (~(t36));
    t38 = *((unsigned int *)t34);
    t39 = (t38 & t37);
    t40 = (t39 != 0);
    if (t40 > 0)
        goto LAB64;

LAB65:    xsi_set_current_line(190, ng0);
    t2 = (t0 + 7512);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng16)));
    memset(t11, 0, 8);
    xsi_vlog_signed_equal(t11, 32, t4, 32, t5, 32);
    t7 = (t11 + 4);
    t12 = *((unsigned int *)t7);
    t13 = (~(t12));
    t14 = *((unsigned int *)t11);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB67;

LAB68:
LAB69:
LAB66:    goto LAB62;

LAB64:    xsi_set_current_line(189, ng0);
    t42 = (t0 + 3592U);
    t43 = *((char **)t42);
    t42 = (t0 + 8312);
    xsi_vlogvar_assign_value(t42, t43, 0, 0, 4);
    goto LAB66;

LAB67:    xsi_set_current_line(190, ng0);
    t9 = (t0 + 3592U);
    t10 = *((char **)t9);
    t9 = (t0 + 8472);
    xsi_vlogvar_assign_value(t9, t10, 0, 0, 4);
    goto LAB69;

LAB71:    xsi_set_current_line(194, ng0);
    t9 = (t0 + 3592U);
    t10 = *((char **)t9);
    t9 = (t0 + 8312);
    xsi_vlogvar_assign_value(t9, t10, 0, 0, 4);
    goto LAB73;

LAB77:    t24 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB78;

LAB79:    xsi_set_current_line(200, ng0);
    t31 = (t0 + 7512);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t35 = ((char*)((ng16)));
    memset(t34, 0, 8);
    xsi_vlog_signed_add(t34, 32, t33, 32, t35, 32);
    t41 = (t0 + 7512);
    xsi_vlogvar_assign_value(t41, t34, 0, 0, 32);
    goto LAB81;

LAB85:    t24 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB86;

LAB87:    xsi_set_current_line(206, ng0);

LAB90:    xsi_set_current_line(207, ng0);
    t31 = (t0 + 8312);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memcpy(t34, t33, 8);
    t35 = (t0 + 5112);
    xsi_vlogvar_assign_value(t35, t34, 0, 0, 16);
    xsi_set_current_line(207, ng0);
    t2 = (t0 + 8472);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t11, t4, 8);
    t5 = (t0 + 5272);
    xsi_vlogvar_assign_value(t5, t11, 0, 0, 16);
    xsi_set_current_line(207, ng0);
    t2 = (t0 + 4472);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7192);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    goto LAB89;

}


extern void work_m_15213503431549883062_0295930199_init()
{
	static char *pe[] = {(void *)Always_83_0,(void *)Always_91_1,(void *)Always_131_2};
	xsi_register_didat("work_m_15213503431549883062_0295930199", "isim/mem_controller_test_isim_beh.exe.sim/work/m_15213503431549883062_0295930199.didat");
	xsi_register_executes(pe);
}
