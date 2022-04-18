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
static const char *ng0 = "C:/cs221_lab/cs224_lab7/que2.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {2U, 0U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {3U, 0U};



static void Cont_45_0(char *t0)
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
    char *t10;
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
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;

LAB0:    t1 = (t0 + 5376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 3976);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB7;

LAB4:    if (t20 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t8) = 1;

LAB7:    memset(t4, 0, 8);
    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t24) != 0)
        goto LAB10;

LAB11:    t31 = (t4 + 4);
    t32 = *((unsigned int *)t4);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB12;

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t31) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t40, 8);

LAB20:    t41 = (t0 + 6568);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memset(t45, 0, 8);
    t46 = 1U;
    t47 = t46;
    t48 = (t3 + 4);
    t49 = *((unsigned int *)t3);
    t46 = (t46 & t49);
    t50 = *((unsigned int *)t48);
    t47 = (t47 & t50);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t52 | t46);
    t53 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t53 | t47);
    xsi_driver_vfirst_trans(t41, 0, 0);
    t54 = (t0 + 6440);
    *((int *)t54) = 1;

LAB1:    return;
LAB6:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t30 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB11;

LAB12:    t35 = ((char*)((ng2)));
    goto LAB13;

LAB14:    t40 = ((char*)((ng1)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t35, 32, t40, 32);
    goto LAB20;

LAB18:    memcpy(t3, t35, 8);
    goto LAB20;

}

static void Always_47_1(char *t0)
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

LAB0:    t1 = (t0 + 5624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 6456);
    *((int *)t2) = 1;
    t3 = (t0 + 5656);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(48, ng0);

LAB5:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 2296U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 3816);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3656);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(49, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 3656);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 3);
    goto LAB8;

}

static void Always_53_2(char *t0)
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

LAB0:    t1 = (t0 + 5872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 6472);
    *((int *)t2) = 1;
    t3 = (t0 + 5904);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(54, ng0);

LAB5:    xsi_set_current_line(55, ng0);
    t4 = (t0 + 3656);
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

LAB18:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB19;

LAB20:
LAB21:    goto LAB2;

LAB7:    xsi_set_current_line(56, ng0);

LAB22:    xsi_set_current_line(56, ng0);
    t11 = (t0 + 2456U);
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
        goto LAB26;

LAB23:    if (t25 != 0)
        goto LAB25;

LAB24:    *((unsigned int *)t13) = 1;

LAB26:    memset(t10, 0, 8);
    t29 = (t13 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t29) != 0)
        goto LAB29;

LAB30:    t36 = (t10 + 4);
    t37 = *((unsigned int *)t10);
    t38 = *((unsigned int *)t36);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB31;

LAB32:    t41 = *((unsigned int *)t10);
    t42 = (~(t41));
    t43 = *((unsigned int *)t36);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t36) > 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t10) > 0)
        goto LAB37;

LAB38:    memcpy(t9, t45, 8);

LAB39:    t46 = (t0 + 3816);
    xsi_vlogvar_assign_value(t46, t9, 0, 0, 3);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB21;

LAB9:    xsi_set_current_line(57, ng0);

LAB40:    xsi_set_current_line(57, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 3816);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB21;

LAB11:    xsi_set_current_line(58, ng0);

LAB41:    xsi_set_current_line(58, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 3816);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB21;

LAB13:    xsi_set_current_line(59, ng0);

LAB42:    xsi_set_current_line(59, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 3816);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB21;

LAB15:    xsi_set_current_line(60, ng0);

LAB43:    xsi_set_current_line(60, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 3816);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB21;

LAB17:    xsi_set_current_line(61, ng0);

LAB44:    xsi_set_current_line(61, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 3816);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB21;

LAB19:    xsi_set_current_line(62, ng0);

LAB45:    xsi_set_current_line(63, ng0);
    t3 = (t0 + 2936U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
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
        goto LAB49;

LAB46:    if (t25 != 0)
        goto LAB48;

LAB47:    *((unsigned int *)t13) = 1;

LAB49:    memset(t10, 0, 8);
    t12 = (t13 + 4);
    t30 = *((unsigned int *)t12);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t12) != 0)
        goto LAB52;

LAB53:    t15 = (t10 + 4);
    t37 = *((unsigned int *)t10);
    t38 = *((unsigned int *)t15);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB54;

LAB55:    t41 = *((unsigned int *)t10);
    t42 = (~(t41));
    t43 = *((unsigned int *)t15);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t15) > 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t10) > 0)
        goto LAB60;

LAB61:    memcpy(t9, t29, 8);

LAB62:    t35 = (t0 + 3816);
    xsi_vlogvar_assign_value(t35, t9, 0, 0, 3);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2936U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t9, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t2);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t5);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t4);
    t24 = *((unsigned int *)t5);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB66;

LAB63:    if (t25 != 0)
        goto LAB65;

LAB64:    *((unsigned int *)t9) = 1;

LAB66:    t11 = (t9 + 4);
    t30 = *((unsigned int *)t11);
    t31 = (~(t30));
    t32 = *((unsigned int *)t9);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB67;

LAB68:
LAB69:    goto LAB21;

LAB25:    t28 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB26;

LAB27:    *((unsigned int *)t10) = 1;
    goto LAB30;

LAB29:    t35 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB30;

LAB31:    t40 = ((char*)((ng3)));
    goto LAB32;

LAB33:    t45 = ((char*)((ng4)));
    goto LAB34;

LAB35:    xsi_vlog_unsigned_bit_combine(t9, 3, t40, 3, t45, 3);
    goto LAB39;

LAB37:    memcpy(t9, t40, 8);
    goto LAB39;

LAB48:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB49;

LAB50:    *((unsigned int *)t10) = 1;
    goto LAB53;

LAB52:    t14 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB53;

LAB54:    t28 = ((char*)((ng3)));
    goto LAB55;

LAB56:    t29 = ((char*)((ng7)));
    goto LAB57;

LAB58:    xsi_vlog_unsigned_bit_combine(t9, 3, t28, 3, t29, 3);
    goto LAB62;

LAB60:    memcpy(t9, t28, 8);
    goto LAB62;

LAB65:    t7 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB66;

LAB67:    xsi_set_current_line(64, ng0);
    t12 = ((char*)((ng2)));
    t14 = (t0 + 3496);
    xsi_vlogvar_assign_value(t14, t12, 0, 0, 1);
    goto LAB69;

}

static void Always_70_3(char *t0)
{
    char t11[8];
    char t33[8];
    char t45[8];
    char t54[8];
    char t86[8];
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
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    unsigned int t92;
    int t93;

LAB0:    t1 = (t0 + 6120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 6488);
    *((int *)t2) = 1;
    t3 = (t0 + 6152);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(71, ng0);

LAB5:    xsi_set_current_line(72, ng0);
    t4 = (t0 + 3656);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:
LAB13:    goto LAB2;

LAB7:    xsi_set_current_line(74, ng0);

LAB14:    xsi_set_current_line(75, ng0);
    t9 = (t0 + 2616U);
    t10 = *((char **)t9);
    t9 = (t0 + 4136);
    xsi_vlogvar_assign_value(t9, t10, 0, 0, 4);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2776U);
    t3 = *((char **)t2);
    t2 = (t0 + 4296);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1424);
    t3 = *((char **)t2);
    t2 = (t0 + 3976);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4456);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB13;

LAB9:    xsi_set_current_line(78, ng0);

LAB15:    xsi_set_current_line(79, ng0);
    t3 = (t0 + 3976);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng2)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_minus(t11, 32, t5, 3, t7, 32);
    t9 = (t0 + 3976);
    xsi_vlogvar_assign_value(t9, t11, 0, 0, 3);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 4456);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
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
        goto LAB19;

LAB16:    if (t21 != 0)
        goto LAB18;

LAB17:    *((unsigned int *)t11) = 1;

LAB19:    t24 = (t11 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t11);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 4136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t5 = (t11 + 4);
    t7 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t7);
    t16 = (t15 >> 0);
    t17 = (t16 & 1);
    *((unsigned int *)t5) = t17;
    t9 = (t0 + 4296);
    t10 = (t9 + 56U);
    t24 = *((char **)t10);
    memset(t33, 0, 8);
    t30 = (t33 + 4);
    t31 = (t24 + 4);
    t18 = *((unsigned int *)t24);
    t19 = (t18 >> 0);
    t20 = (t19 & 1);
    *((unsigned int *)t33) = t20;
    t21 = *((unsigned int *)t31);
    t22 = (t21 >> 0);
    t23 = (t22 & 1);
    *((unsigned int *)t30) = t23;
    t25 = *((unsigned int *)t11);
    t26 = *((unsigned int *)t33);
    t27 = (t25 | t26);
    *((unsigned int *)t45) = t27;
    t32 = (t11 + 4);
    t34 = (t33 + 4);
    t35 = (t45 + 4);
    t28 = *((unsigned int *)t32);
    t29 = *((unsigned int *)t34);
    t36 = (t28 | t29);
    *((unsigned int *)t35) = t36;
    t37 = *((unsigned int *)t35);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB28;

LAB29:
LAB30:    t44 = (t0 + 3336);
    t46 = (t0 + 3336);
    t47 = (t46 + 72U);
    t58 = *((char **)t47);
    t59 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t54, t58, 2, t59, 32, 1);
    t60 = (t54 + 4);
    t61 = *((unsigned int *)t60);
    t93 = (!(t61));
    if (t93 == 1)
        goto LAB31;

LAB32:
LAB22:    goto LAB13;

LAB11:    xsi_set_current_line(86, ng0);

LAB33:    xsi_set_current_line(87, ng0);
    t3 = (t0 + 3336);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t33, 0, 8);
    t7 = (t33 + 4);
    t9 = (t5 + 4);
    t12 = *((unsigned int *)t5);
    t13 = (t12 >> 1);
    *((unsigned int *)t33) = t13;
    t14 = *((unsigned int *)t9);
    t15 = (t14 >> 1);
    *((unsigned int *)t7) = t15;
    t16 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t16 & 7U);
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 7U);
    t10 = (t0 + 3336);
    t24 = (t10 + 56U);
    t30 = *((char **)t24);
    memset(t45, 0, 8);
    t31 = (t45 + 4);
    t32 = (t30 + 4);
    t18 = *((unsigned int *)t30);
    t19 = (t18 >> 0);
    t20 = (t19 & 1);
    *((unsigned int *)t45) = t20;
    t21 = *((unsigned int *)t32);
    t22 = (t21 >> 0);
    t23 = (t22 & 1);
    *((unsigned int *)t31) = t23;
    xsi_vlogtype_concat(t11, 4, 4, 2U, t45, 1, t33, 3);
    t34 = (t0 + 3336);
    xsi_vlogvar_assign_value(t34, t11, 0, 0, 4);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 4136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_rshift(t11, 4, t4, 4, t5, 32);
    t7 = (t0 + 4136);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 4);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 4296);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_rshift(t11, 4, t4, 4, t5, 32);
    t7 = (t0 + 4296);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 4);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 4456);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t12 = *((unsigned int *)t5);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB37;

LAB35:    if (*((unsigned int *)t5) == 0)
        goto LAB34;

LAB36:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;

LAB37:    t9 = (t11 + 4);
    t10 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = (~(t17));
    *((unsigned int *)t11) = t18;
    *((unsigned int *)t9) = 0;
    if (*((unsigned int *)t10) != 0)
        goto LAB39;

LAB38:    t23 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t23 & 1U);
    t25 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t25 & 1U);
    t24 = (t0 + 4456);
    xsi_vlogvar_assign_value(t24, t11, 0, 0, 1);
    goto LAB13;

LAB18:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB19;

LAB20:    xsi_set_current_line(81, ng0);
    t30 = (t0 + 4136);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memset(t33, 0, 8);
    t34 = (t33 + 4);
    t35 = (t32 + 4);
    t36 = *((unsigned int *)t32);
    t37 = (t36 >> 0);
    t38 = (t37 & 1);
    *((unsigned int *)t33) = t38;
    t39 = *((unsigned int *)t35);
    t40 = (t39 >> 0);
    t41 = (t40 & 1);
    *((unsigned int *)t34) = t41;
    t42 = (t0 + 4296);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    memset(t45, 0, 8);
    t46 = (t45 + 4);
    t47 = (t44 + 4);
    t48 = *((unsigned int *)t44);
    t49 = (t48 >> 0);
    t50 = (t49 & 1);
    *((unsigned int *)t45) = t50;
    t51 = *((unsigned int *)t47);
    t52 = (t51 >> 0);
    t53 = (t52 & 1);
    *((unsigned int *)t46) = t53;
    t55 = *((unsigned int *)t33);
    t56 = *((unsigned int *)t45);
    t57 = (t55 & t56);
    *((unsigned int *)t54) = t57;
    t58 = (t33 + 4);
    t59 = (t45 + 4);
    t60 = (t54 + 4);
    t61 = *((unsigned int *)t58);
    t62 = *((unsigned int *)t59);
    t63 = (t61 | t62);
    *((unsigned int *)t60) = t63;
    t64 = *((unsigned int *)t60);
    t65 = (t64 != 0);
    if (t65 == 1)
        goto LAB23;

LAB24:
LAB25:    t85 = (t0 + 3336);
    t87 = (t0 + 3336);
    t88 = (t87 + 72U);
    t89 = *((char **)t88);
    t90 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t86, t89, 2, t90, 32, 1);
    t91 = (t86 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (!(t92));
    if (t93 == 1)
        goto LAB26;

LAB27:    goto LAB22;

LAB23:    t66 = *((unsigned int *)t54);
    t67 = *((unsigned int *)t60);
    *((unsigned int *)t54) = (t66 | t67);
    t68 = (t33 + 4);
    t69 = (t45 + 4);
    t70 = *((unsigned int *)t33);
    t71 = (~(t70));
    t72 = *((unsigned int *)t68);
    t73 = (~(t72));
    t74 = *((unsigned int *)t45);
    t75 = (~(t74));
    t76 = *((unsigned int *)t69);
    t77 = (~(t76));
    t8 = (t71 & t73);
    t78 = (t75 & t77);
    t79 = (~(t8));
    t80 = (~(t78));
    t81 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t81 & t79);
    t82 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t82 & t80);
    t83 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t83 & t79);
    t84 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t84 & t80);
    goto LAB25;

LAB26:    xsi_vlogvar_assign_value(t85, t54, 0, *((unsigned int *)t86), 1);
    goto LAB27;

LAB28:    t39 = *((unsigned int *)t45);
    t40 = *((unsigned int *)t35);
    *((unsigned int *)t45) = (t39 | t40);
    t42 = (t11 + 4);
    t43 = (t33 + 4);
    t41 = *((unsigned int *)t42);
    t48 = (~(t41));
    t49 = *((unsigned int *)t11);
    t8 = (t49 & t48);
    t50 = *((unsigned int *)t43);
    t51 = (~(t50));
    t52 = *((unsigned int *)t33);
    t78 = (t52 & t51);
    t53 = (~(t8));
    t55 = (~(t78));
    t56 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t56 & t53);
    t57 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t57 & t55);
    goto LAB30;

LAB31:    xsi_vlogvar_assign_value(t44, t45, 0, *((unsigned int *)t54), 1);
    goto LAB32;

LAB34:    *((unsigned int *)t11) = 1;
    goto LAB37;

LAB39:    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t10);
    *((unsigned int *)t11) = (t19 | t20);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t10);
    *((unsigned int *)t9) = (t21 | t22);
    goto LAB38;

}


extern void work_m_00000000002520690145_3733337207_init()
{
	static char *pe[] = {(void *)Cont_45_0,(void *)Always_47_1,(void *)Always_53_2,(void *)Always_70_3};
	xsi_register_didat("work_m_00000000002520690145_3733337207", "isim/que2_test_isim_beh.exe.sim/work/m_00000000002520690145_3733337207.didat");
	xsi_register_executes(pe);
}
