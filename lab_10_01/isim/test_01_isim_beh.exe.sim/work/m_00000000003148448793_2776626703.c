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
static const char *ng0 = "C:/cs221_lab/lab_10_01/sram_sync.v";
static int ng1[] = {0, 0};
static int ng2[] = {6, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {1537U, 0U};
static unsigned int ng5[] = {5923U, 0U};
static int ng6[] = {7, 0};
static unsigned int ng7[] = {10309U, 0U};
static int ng8[] = {8, 0};
static unsigned int ng9[] = {35137U, 0U};
static int ng10[] = {9, 0};
static int ng11[] = {32, 0};



static void Initial_29_0(char *t0)
{
    char t5[8];
    char t16[8];
    char t17[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    int t29;
    char *t30;
    unsigned int t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;

LAB0:    xsi_set_current_line(29, ng0);

LAB2:    xsi_set_current_line(30, ng0);
    xsi_set_current_line(30, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 2568);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:    xsi_set_current_line(34, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 2408);
    t3 = (t0 + 2408);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 2408);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t5, t16, t6, t14, 2, 1, t15, 32, 1);
    t18 = (t5 + 4);
    t7 = *((unsigned int *)t18);
    t29 = (!(t7));
    t19 = (t16 + 4);
    t8 = *((unsigned int *)t19);
    t32 = (!(t8));
    t33 = (t29 && t32);
    if (t33 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(35, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 2408);
    t3 = (t0 + 2408);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 2408);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng6)));
    xsi_vlog_generic_convert_array_indices(t5, t16, t6, t14, 2, 1, t15, 32, 1);
    t18 = (t5 + 4);
    t7 = *((unsigned int *)t18);
    t29 = (!(t7));
    t19 = (t16 + 4);
    t8 = *((unsigned int *)t19);
    t32 = (!(t8));
    t33 = (t29 && t32);
    if (t33 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(36, ng0);
    t1 = ((char*)((ng7)));
    t2 = (t0 + 2408);
    t3 = (t0 + 2408);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 2408);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng8)));
    xsi_vlog_generic_convert_array_indices(t5, t16, t6, t14, 2, 1, t15, 32, 1);
    t18 = (t5 + 4);
    t7 = *((unsigned int *)t18);
    t29 = (!(t7));
    t19 = (t16 + 4);
    t8 = *((unsigned int *)t19);
    t32 = (!(t8));
    t33 = (t29 && t32);
    if (t33 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(37, ng0);
    t1 = ((char*)((ng9)));
    t2 = (t0 + 2408);
    t3 = (t0 + 2408);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 2408);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng10)));
    xsi_vlog_generic_convert_array_indices(t5, t16, t6, t14, 2, 1, t15, 32, 1);
    t18 = (t5 + 4);
    t7 = *((unsigned int *)t18);
    t29 = (!(t7));
    t19 = (t16 + 4);
    t8 = *((unsigned int *)t19);
    t32 = (!(t8));
    t33 = (t29 && t32);
    if (t33 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(38, ng0);
    xsi_set_current_line(38, ng0);
    t1 = ((char*)((ng10)));
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB17:    t1 = (t0 + 2568);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng11)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB18;

LAB19:
LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB6:    xsi_set_current_line(32, ng0);
    t12 = (t0 + 2568);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t0 + 2408);
    t18 = (t0 + 2408);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 2408);
    t22 = (t21 + 64U);
    t23 = *((char **)t22);
    t24 = (t0 + 2568);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    xsi_vlog_generic_convert_array_indices(t16, t17, t20, t23, 2, 1, t26, 32, 1);
    t27 = (t16 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (!(t28));
    t30 = (t17 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (!(t31));
    t33 = (t29 && t32);
    if (t33 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(30, ng0);
    t1 = (t0 + 2568);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 2568);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB7:    t34 = *((unsigned int *)t16);
    t35 = *((unsigned int *)t17);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t15, t14, 0, *((unsigned int *)t17), t37);
    goto LAB8;

LAB9:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t16);
    t36 = (t9 - t10);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t16), t37);
    goto LAB10;

LAB11:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t16);
    t36 = (t9 - t10);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t16), t37);
    goto LAB12;

LAB13:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t16);
    t36 = (t9 - t10);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t16), t37);
    goto LAB14;

LAB15:    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t16);
    t36 = (t9 - t10);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t16), t37);
    goto LAB16;

LAB18:    xsi_set_current_line(39, ng0);

LAB20:    xsi_set_current_line(40, ng0);
    t12 = ((char*)((ng1)));
    t13 = (t0 + 2408);
    t14 = (t0 + 2408);
    t15 = (t14 + 72U);
    t18 = *((char **)t15);
    t19 = (t0 + 2408);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 2568);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t16, t17, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t16 + 4);
    t28 = *((unsigned int *)t25);
    t29 = (!(t28));
    t26 = (t17 + 4);
    t31 = *((unsigned int *)t26);
    t32 = (!(t31));
    t33 = (t29 && t32);
    if (t33 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(38, ng0);
    t1 = (t0 + 2568);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 2568);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB17;

LAB21:    t34 = *((unsigned int *)t16);
    t35 = *((unsigned int *)t17);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t17), t37);
    goto LAB22;

}

static void Always_44_1(char *t0)
{
    char t13[8];
    char t37[8];
    char t38[8];
    char t63[8];
    char t69[8];
    char t102[8];
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
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    int t48;
    char *t49;
    unsigned int t50;
    int t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    int t55;
    int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    char *t100;
    char *t101;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    char *t108;
    char *t109;
    char *t110;

LAB0:    t1 = (t0 + 3736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 4056);
    *((int *)t2) = 1;
    t3 = (t0 + 3768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(45, ng0);

LAB5:    xsi_set_current_line(46, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(47, ng0);

LAB9:    xsi_set_current_line(48, ng0);
    t11 = (t0 + 1688U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng3)));
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
        goto LAB13;

LAB10:    if (t25 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t13) = 1;

LAB13:    t29 = (t13 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t5);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB22;

LAB19:    if (t20 != 0)
        goto LAB21;

LAB20:    *((unsigned int *)t13) = 1;

LAB22:    memset(t37, 0, 8);
    t12 = (t13 + 4);
    t23 = *((unsigned int *)t12);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t12) != 0)
        goto LAB25;

LAB26:    t15 = (t37 + 4);
    t30 = *((unsigned int *)t37);
    t31 = *((unsigned int *)t15);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB27;

LAB28:    memcpy(t69, t37, 8);

LAB29:    t49 = (t69 + 4);
    t94 = *((unsigned int *)t49);
    t95 = (~(t94));
    t96 = *((unsigned int *)t69);
    t97 = (t96 & t95);
    t98 = (t97 != 0);
    if (t98 > 0)
        goto LAB41;

LAB42:
LAB43:
LAB16:    goto LAB8;

LAB12:    t28 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(49, ng0);
    t35 = (t0 + 1048U);
    t36 = *((char **)t35);
    t35 = (t0 + 2408);
    t39 = (t0 + 2408);
    t40 = (t39 + 72U);
    t41 = *((char **)t40);
    t42 = (t0 + 2408);
    t43 = (t42 + 64U);
    t44 = *((char **)t43);
    t45 = (t0 + 1208U);
    t46 = *((char **)t45);
    xsi_vlog_generic_convert_array_indices(t37, t38, t41, t44, 2, 1, t46, 5, 2);
    t45 = (t37 + 4);
    t47 = *((unsigned int *)t45);
    t48 = (!(t47));
    t49 = (t38 + 4);
    t50 = *((unsigned int *)t49);
    t51 = (!(t50));
    t52 = (t48 && t51);
    if (t52 == 1)
        goto LAB17;

LAB18:    goto LAB16;

LAB17:    t53 = *((unsigned int *)t37);
    t54 = *((unsigned int *)t38);
    t55 = (t53 - t54);
    t56 = (t55 + 1);
    xsi_vlogvar_wait_assign_value(t35, t36, 0, *((unsigned int *)t38), t56, 0LL);
    goto LAB18;

LAB21:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB22;

LAB23:    *((unsigned int *)t37) = 1;
    goto LAB26;

LAB25:    t14 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB26;

LAB27:    t28 = (t0 + 1688U);
    t29 = *((char **)t28);
    t28 = ((char*)((ng1)));
    memset(t38, 0, 8);
    t35 = (t29 + 4);
    t36 = (t28 + 4);
    t33 = *((unsigned int *)t29);
    t34 = *((unsigned int *)t28);
    t47 = (t33 ^ t34);
    t50 = *((unsigned int *)t35);
    t53 = *((unsigned int *)t36);
    t54 = (t50 ^ t53);
    t57 = (t47 | t54);
    t58 = *((unsigned int *)t35);
    t59 = *((unsigned int *)t36);
    t60 = (t58 | t59);
    t61 = (~(t60));
    t62 = (t57 & t61);
    if (t62 != 0)
        goto LAB33;

LAB30:    if (t60 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t38) = 1;

LAB33:    memset(t63, 0, 8);
    t40 = (t38 + 4);
    t64 = *((unsigned int *)t40);
    t65 = (~(t64));
    t66 = *((unsigned int *)t38);
    t67 = (t66 & t65);
    t68 = (t67 & 1U);
    if (t68 != 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t40) != 0)
        goto LAB36;

LAB37:    t70 = *((unsigned int *)t37);
    t71 = *((unsigned int *)t63);
    t72 = (t70 & t71);
    *((unsigned int *)t69) = t72;
    t42 = (t37 + 4);
    t43 = (t63 + 4);
    t44 = (t69 + 4);
    t73 = *((unsigned int *)t42);
    t74 = *((unsigned int *)t43);
    t75 = (t73 | t74);
    *((unsigned int *)t44) = t75;
    t76 = *((unsigned int *)t44);
    t77 = (t76 != 0);
    if (t77 == 1)
        goto LAB38;

LAB39:
LAB40:    goto LAB29;

LAB32:    t39 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB33;

LAB34:    *((unsigned int *)t63) = 1;
    goto LAB37;

LAB36:    t41 = (t63 + 4);
    *((unsigned int *)t63) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB37;

LAB38:    t78 = *((unsigned int *)t69);
    t79 = *((unsigned int *)t44);
    *((unsigned int *)t69) = (t78 | t79);
    t45 = (t37 + 4);
    t46 = (t63 + 4);
    t80 = *((unsigned int *)t37);
    t81 = (~(t80));
    t82 = *((unsigned int *)t45);
    t83 = (~(t82));
    t84 = *((unsigned int *)t63);
    t85 = (~(t84));
    t86 = *((unsigned int *)t46);
    t87 = (~(t86));
    t48 = (t81 & t83);
    t51 = (t85 & t87);
    t88 = (~(t48));
    t89 = (~(t51));
    t90 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t90 & t88);
    t91 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t91 & t89);
    t92 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t92 & t88);
    t93 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t93 & t89);
    goto LAB40;

LAB41:    xsi_set_current_line(51, ng0);
    t99 = (t0 + 2408);
    t100 = (t99 + 56U);
    t101 = *((char **)t100);
    t103 = (t0 + 2408);
    t104 = (t103 + 72U);
    t105 = *((char **)t104);
    t106 = (t0 + 2408);
    t107 = (t106 + 64U);
    t108 = *((char **)t107);
    t109 = (t0 + 1208U);
    t110 = *((char **)t109);
    xsi_vlog_generic_get_array_select_value(t102, 16, t101, t105, t108, 2, 1, t110, 5, 2);
    t109 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t109, t102, 0, 0, 16, 0LL);
    goto LAB43;

}


extern void work_m_00000000003148448793_2776626703_init()
{
	static char *pe[] = {(void *)Initial_29_0,(void *)Always_44_1};
	xsi_register_didat("work_m_00000000003148448793_2776626703", "isim/test_01_isim_beh.exe.sim/work/m_00000000003148448793_2776626703.didat");
	xsi_register_executes(pe);
}
