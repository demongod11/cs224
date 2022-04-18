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
static const char *ng0 = "C:/cs221_lab/cs224_lab_8/mem_controller.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {5U, 0U};
static int ng9[] = {31, 0};



static void Initial_42_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(42, ng0);

LAB2:    xsi_set_current_line(43, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2744);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 5);
    xsi_set_current_line(44, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2904);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);

LAB1:    return;
}

static void Cont_49_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;

LAB0:    t1 = (t0 + 5032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 3864);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_signed_equal(t8, 32, t6, 32, t7, 32);
    memset(t4, 0, 8);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t9) != 0)
        goto LAB6;

LAB7:    t16 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t16);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB8;

LAB9:    t21 = *((unsigned int *)t4);
    t22 = (~(t21));
    t23 = *((unsigned int *)t16);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t16) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t25, 8);

LAB16:    t26 = (t0 + 6224);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memset(t30, 0, 8);
    t31 = 1U;
    t32 = t31;
    t33 = (t3 + 4);
    t34 = *((unsigned int *)t3);
    t31 = (t31 & t34);
    t35 = *((unsigned int *)t33);
    t32 = (t32 & t35);
    t36 = (t30 + 4);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t37 | t31);
    t38 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t38 | t32);
    xsi_driver_vfirst_trans(t26, 0, 0);
    t39 = (t0 + 6096);
    *((int *)t39) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t15 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB7;

LAB8:    t20 = ((char*)((ng2)));
    goto LAB9;

LAB10:    t25 = ((char*)((ng1)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t20, 32, t25, 32);
    goto LAB16;

LAB14:    memcpy(t3, t20, 8);
    goto LAB16;

}

static void Always_51_2(char *t0)
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

LAB0:    t1 = (t0 + 5280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 6112);
    *((int *)t2) = 1;
    t3 = (t0 + 5312);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(52, ng0);

LAB5:    xsi_set_current_line(53, ng0);
    t4 = (t0 + 2024U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3544);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(53, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 3544);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 3);
    goto LAB8;

}

static void Always_57_3(char *t0)
{
    char t9[8];
    char t10[8];
    char t13[8];
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
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
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
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;

LAB0:    t1 = (t0 + 5528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 6128);
    *((int *)t2) = 1;
    t3 = (t0 + 5560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(58, ng0);

LAB5:    xsi_set_current_line(59, ng0);
    t4 = (t0 + 3544);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(60, ng0);

LAB20:    xsi_set_current_line(60, ng0);
    t11 = (t0 + 2184U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t14 = (t12 + 4);
    t15 = (t11 + 4);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t11);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t15);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t14);
    t24 = *((unsigned int *)t15);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB24;

LAB21:    if (t25 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t13) = 1;

LAB24:    memset(t10, 0, 8);
    t29 = (t13 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t29) != 0)
        goto LAB27;

LAB28:    t36 = (t10 + 4);
    t37 = *((unsigned int *)t10);
    t38 = *((unsigned int *)t36);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB29;

LAB30:    t41 = *((unsigned int *)t10);
    t42 = (~(t41));
    t43 = *((unsigned int *)t36);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t36) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t10) > 0)
        goto LAB35;

LAB36:    memcpy(t9, t45, 8);

LAB37:    t46 = (t0 + 3704);
    xsi_vlogvar_assign_value(t46, t9, 0, 0, 3);
    goto LAB19;

LAB9:    xsi_set_current_line(61, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 3704);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB19;

LAB11:    xsi_set_current_line(62, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 3704);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB19;

LAB13:    xsi_set_current_line(63, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 3704);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB19;

LAB15:    xsi_set_current_line(64, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 3704);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB19;

LAB17:    xsi_set_current_line(65, ng0);

LAB38:    xsi_set_current_line(65, ng0);
    t3 = (t0 + 2344U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t3);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t7);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t5);
    t24 = *((unsigned int *)t7);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB42;

LAB39:    if (t25 != 0)
        goto LAB41;

LAB40:    *((unsigned int *)t13) = 1;

LAB42:    memset(t10, 0, 8);
    t12 = (t13 + 4);
    t30 = *((unsigned int *)t12);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t12) != 0)
        goto LAB45;

LAB46:    t15 = (t10 + 4);
    t37 = *((unsigned int *)t10);
    t38 = *((unsigned int *)t15);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB47;

LAB48:    t41 = *((unsigned int *)t10);
    t42 = (~(t41));
    t43 = *((unsigned int *)t15);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t15) > 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t10) > 0)
        goto LAB53;

LAB54:    memcpy(t9, t29, 8);

LAB55:    t35 = (t0 + 3704);
    xsi_vlogvar_assign_value(t35, t9, 0, 0, 3);
    goto LAB19;

LAB23:    t28 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t10) = 1;
    goto LAB28;

LAB27:    t35 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB28;

LAB29:    t40 = ((char*)((ng3)));
    goto LAB30;

LAB31:    t45 = ((char*)((ng4)));
    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t9, 3, t40, 3, t45, 3);
    goto LAB37;

LAB35:    memcpy(t9, t40, 8);
    goto LAB37;

LAB41:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB42;

LAB43:    *((unsigned int *)t10) = 1;
    goto LAB46;

LAB45:    t14 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB46;

LAB47:    t28 = ((char*)((ng4)));
    goto LAB48;

LAB49:    t29 = ((char*)((ng3)));
    goto LAB50;

LAB51:    xsi_vlog_unsigned_bit_combine(t9, 3, t28, 3, t29, 3);
    goto LAB55;

LAB53:    memcpy(t9, t28, 8);
    goto LAB55;

}

static void Always_69_4(char *t0)
{
    char t11[8];
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
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 5776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 6144);
    *((int *)t2) = 1;
    t3 = (t0 + 5808);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(70, ng0);

LAB5:    xsi_set_current_line(71, ng0);
    t4 = (t0 + 3544);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(72, ng0);
    t9 = ((char*)((ng1)));
    t10 = (t0 + 2744);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 5);
    goto LAB17;

LAB9:    xsi_set_current_line(73, ng0);

LAB18:    xsi_set_current_line(74, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3064);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3224);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3384);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB17;

LAB11:    xsi_set_current_line(76, ng0);
    t3 = (t0 + 2904);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng2)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t5, 8, t7, 32);
    t9 = (t0 + 2904);
    xsi_vlogvar_assign_value(t9, t11, 0, 0, 8);
    goto LAB17;

LAB13:    xsi_set_current_line(77, ng0);

LAB19:    xsi_set_current_line(78, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3064);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3224);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3384);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB17;

LAB15:    xsi_set_current_line(80, ng0);

LAB20:    xsi_set_current_line(81, ng0);
    t3 = (t0 + 2744);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng9)));
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
        goto LAB24;

LAB21:    if (t21 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t11) = 1;

LAB24:    t25 = (t11 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t11);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(86, ng0);

LAB29:    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB27:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2744);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t4, 5, t5, 32);
    t7 = (t0 + 2744);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 5);
    goto LAB17;

LAB23:    t24 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(82, ng0);

LAB28:    xsi_set_current_line(83, ng0);
    t31 = ((char*)((ng2)));
    t32 = (t0 + 3864);
    xsi_vlogvar_assign_value(t32, t31, 0, 0, 32);
    goto LAB27;

}


extern void work_m_00000000004170692284_0295930199_init()
{
	static char *pe[] = {(void *)Initial_42_0,(void *)Cont_49_1,(void *)Always_51_2,(void *)Always_57_3,(void *)Always_69_4};
	xsi_register_didat("work_m_00000000004170692284_0295930199", "isim/mem_controller_test_isim_beh.exe.sim/work/m_00000000004170692284_0295930199.didat");
	xsi_register_executes(pe);
}
