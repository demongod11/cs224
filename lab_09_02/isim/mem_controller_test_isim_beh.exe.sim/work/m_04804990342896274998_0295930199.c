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
static const char *ng0 = "/home/chandrabhushan/coding/cs224_labs/lab_09_02/mem_controller.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {7U, 0U};
static unsigned int ng9[] = {8U, 0U};
static int ng10[] = {6, 0};
static unsigned int ng11[] = {9U, 0U};
static unsigned int ng12[] = {10U, 0U};
static int ng13[] = {2, 0};
static unsigned int ng14[] = {11U, 0U};
static unsigned int ng15[] = {12U, 0U};
static unsigned int ng16[] = {13U, 0U};
static unsigned int ng17[] = {14U, 0U};
static unsigned int ng18[] = {15U, 0U};
static int ng19[] = {0, 0};
static int ng20[] = {1, 0};
static int ng21[] = {3, 0};



static void Always_75_0(char *t0)
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

LAB0:    t1 = (t0 + 8376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 9192);
    *((int *)t2) = 1;
    t3 = (t0 + 8408);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(76, ng0);

LAB5:    xsi_set_current_line(77, ng0);
    t4 = (t0 + 3224U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 5544);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4424);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(78, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 4424);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 4);
    goto LAB8;

}

static void Always_83_1(char *t0)
{
    char t9[8];
    char t10[8];
    char t35[8];
    char t43[8];
    char t51[8];
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
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    char *t86;

LAB0:    t1 = (t0 + 8624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 9208);
    *((int *)t2) = 1;
    t3 = (t0 + 8656);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(84, ng0);

LAB5:    xsi_set_current_line(85, ng0);
    t4 = (t0 + 4424);
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

LAB16:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng9)));
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

LAB28:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng15)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng16)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng17)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng18)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB37;

LAB38:
LAB39:    goto LAB2;

LAB7:    xsi_set_current_line(86, ng0);
    t11 = (t0 + 3544U);
    t12 = *((char **)t11);
    memset(t10, 0, 8);
    t11 = (t12 + 4);
    t13 = *((unsigned int *)t11);
    t14 = (~(t13));
    t15 = *((unsigned int *)t12);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t11) != 0)
        goto LAB42;

LAB43:    t19 = (t10 + 4);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t19);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB44;

LAB45:    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t19);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t19) > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t10) > 0)
        goto LAB50;

LAB51:    memcpy(t9, t28, 8);

LAB52:    t29 = (t0 + 5544);
    xsi_vlogvar_assign_value(t29, t9, 0, 0, 4);
    goto LAB39;

LAB9:    xsi_set_current_line(87, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 5544);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB39;

LAB11:    xsi_set_current_line(88, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 5544);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB39;

LAB13:    xsi_set_current_line(89, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 5544);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB39;

LAB15:    xsi_set_current_line(90, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 5544);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB39;

LAB17:    xsi_set_current_line(91, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 5544);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB39;

LAB19:    xsi_set_current_line(92, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 5544);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB39;

LAB21:    xsi_set_current_line(93, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 5544);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB39;

LAB23:    xsi_set_current_line(95, ng0);

LAB53:    xsi_set_current_line(96, ng0);
    t3 = (t0 + 5704);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng10)));
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
        goto LAB57;

LAB54:    if (t25 != 0)
        goto LAB56;

LAB55:    *((unsigned int *)t9) = 1;

LAB57:    t19 = (t9 + 4);
    t30 = *((unsigned int *)t19);
    t31 = (~(t30));
    t32 = *((unsigned int *)t9);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB58;

LAB59:    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB60:    goto LAB39;

LAB25:    xsi_set_current_line(99, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 5544);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB39;

LAB27:    xsi_set_current_line(100, ng0);

LAB61:    xsi_set_current_line(101, ng0);
    t3 = (t0 + 4904);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng13)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_mod(t9, 32, t5, 4, t7, 32);
    memset(t10, 0, 8);
    t11 = (t9 + 4);
    t13 = *((unsigned int *)t11);
    t14 = (~(t13));
    t15 = *((unsigned int *)t9);
    t16 = (t15 & t14);
    t17 = (t16 & 4294967295U);
    if (t17 != 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t11) != 0)
        goto LAB64;

LAB65:    t18 = (t10 + 4);
    t20 = *((unsigned int *)t10);
    t21 = (!(t20));
    t22 = *((unsigned int *)t18);
    t24 = (t21 || t22);
    if (t24 > 0)
        goto LAB66;

LAB67:    memcpy(t51, t10, 8);

LAB68:    t79 = (t51 + 4);
    t80 = *((unsigned int *)t79);
    t81 = (~(t80));
    t82 = *((unsigned int *)t51);
    t83 = (t82 & t81);
    t84 = (t83 != 0);
    if (t84 > 0)
        goto LAB80;

LAB81:    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 5544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB82:    goto LAB39;

LAB29:    xsi_set_current_line(105, ng0);
    t3 = ((char*)((ng15)));
    t4 = (t0 + 5544);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB39;

LAB31:    xsi_set_current_line(106, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 5544);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB39;

LAB33:    xsi_set_current_line(107, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 5544);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB39;

LAB35:    xsi_set_current_line(109, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 5544);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB39;

LAB37:    xsi_set_current_line(112, ng0);

LAB83:    xsi_set_current_line(113, ng0);
    t3 = (t0 + 4904);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng10)));
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
        goto LAB87;

LAB84:    if (t25 != 0)
        goto LAB86;

LAB85:    *((unsigned int *)t9) = 1;

LAB87:    t19 = (t9 + 4);
    t30 = *((unsigned int *)t19);
    t31 = (~(t30));
    t32 = *((unsigned int *)t9);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB88;

LAB89:    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 5544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB90:    goto LAB39;

LAB40:    *((unsigned int *)t10) = 1;
    goto LAB43;

LAB42:    t18 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB43;

LAB44:    t23 = ((char*)((ng2)));
    goto LAB45;

LAB46:    t28 = ((char*)((ng1)));
    goto LAB47;

LAB48:    xsi_vlog_unsigned_bit_combine(t9, 4, t23, 4, t28, 4);
    goto LAB52;

LAB50:    memcpy(t9, t23, 8);
    goto LAB52;

LAB56:    t18 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB57;

LAB58:    xsi_set_current_line(96, ng0);
    t23 = ((char*)((ng11)));
    t28 = (t0 + 5544);
    xsi_vlogvar_assign_value(t28, t23, 0, 0, 4);
    goto LAB60;

LAB62:    *((unsigned int *)t10) = 1;
    goto LAB65;

LAB64:    t12 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB65;

LAB66:    t19 = (t0 + 4904);
    t23 = (t19 + 56U);
    t28 = *((char **)t23);
    t29 = ((char*)((ng10)));
    memset(t35, 0, 8);
    t36 = (t28 + 4);
    t37 = (t29 + 4);
    t25 = *((unsigned int *)t28);
    t26 = *((unsigned int *)t29);
    t27 = (t25 ^ t26);
    t30 = *((unsigned int *)t36);
    t31 = *((unsigned int *)t37);
    t32 = (t30 ^ t31);
    t33 = (t27 | t32);
    t34 = *((unsigned int *)t36);
    t38 = *((unsigned int *)t37);
    t39 = (t34 | t38);
    t40 = (~(t39));
    t41 = (t33 & t40);
    if (t41 != 0)
        goto LAB72;

LAB69:    if (t39 != 0)
        goto LAB71;

LAB70:    *((unsigned int *)t35) = 1;

LAB72:    memset(t43, 0, 8);
    t44 = (t35 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (~(t45));
    t47 = *((unsigned int *)t35);
    t48 = (t47 & t46);
    t49 = (t48 & 1U);
    if (t49 != 0)
        goto LAB73;

LAB74:    if (*((unsigned int *)t44) != 0)
        goto LAB75;

LAB76:    t52 = *((unsigned int *)t10);
    t53 = *((unsigned int *)t43);
    t54 = (t52 | t53);
    *((unsigned int *)t51) = t54;
    t55 = (t10 + 4);
    t56 = (t43 + 4);
    t57 = (t51 + 4);
    t58 = *((unsigned int *)t55);
    t59 = *((unsigned int *)t56);
    t60 = (t58 | t59);
    *((unsigned int *)t57) = t60;
    t61 = *((unsigned int *)t57);
    t62 = (t61 != 0);
    if (t62 == 1)
        goto LAB77;

LAB78:
LAB79:    goto LAB68;

LAB71:    t42 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB72;

LAB73:    *((unsigned int *)t43) = 1;
    goto LAB76;

LAB75:    t50 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB76;

LAB77:    t63 = *((unsigned int *)t51);
    t64 = *((unsigned int *)t57);
    *((unsigned int *)t51) = (t63 | t64);
    t65 = (t10 + 4);
    t66 = (t43 + 4);
    t67 = *((unsigned int *)t65);
    t68 = (~(t67));
    t69 = *((unsigned int *)t10);
    t70 = (t69 & t68);
    t71 = *((unsigned int *)t66);
    t72 = (~(t71));
    t73 = *((unsigned int *)t43);
    t74 = (t73 & t72);
    t75 = (~(t70));
    t76 = (~(t74));
    t77 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t77 & t75);
    t78 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t78 & t76);
    goto LAB79;

LAB80:    xsi_set_current_line(101, ng0);
    t85 = ((char*)((ng14)));
    t86 = (t0 + 5544);
    xsi_vlogvar_assign_value(t86, t85, 0, 0, 4);
    goto LAB82;

LAB86:    t18 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB87;

LAB88:    xsi_set_current_line(113, ng0);
    t23 = ((char*)((ng1)));
    t28 = (t0 + 5544);
    xsi_vlogvar_assign_value(t28, t23, 0, 0, 4);
    goto LAB90;

}

static void Always_119_2(char *t0)
{
    char t11[8];
    char t12[8];
    char t13[8];
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

LAB0:    t1 = (t0 + 8872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 9224);
    *((int *)t2) = 1;
    t3 = (t0 + 8904);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(120, ng0);

LAB5:    xsi_set_current_line(121, ng0);
    t4 = (t0 + 4424);
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

LAB10:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng12)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng17)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng18)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(123, ng0);

LAB24:    xsi_set_current_line(124, ng0);
    t9 = ((char*)((ng19)));
    t10 = (t0 + 5864);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 5);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 6664);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 5704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 4904);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB23;

LAB9:    xsi_set_current_line(130, ng0);

LAB25:    xsi_set_current_line(131, ng0);
    t3 = ((char*)((ng19)));
    t4 = (t0 + 6504);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 6184);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 6344);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB23;

LAB11:    xsi_set_current_line(136, ng0);

LAB26:    xsi_set_current_line(137, ng0);
    t3 = (t0 + 3704U);
    t4 = *((char **)t3);
    t3 = (t0 + 5064);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 8);
    xsi_set_current_line(138, ng0);
    t2 = (t0 + 5064);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6824);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(139, ng0);
    t2 = (t0 + 6824);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5224);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 6984);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB23;

LAB13:    xsi_set_current_line(145, ng0);

LAB27:    xsi_set_current_line(146, ng0);
    t3 = (t0 + 5704);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng20)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t5, 4, t7, 32);
    t9 = (t0 + 5704);
    xsi_vlogvar_assign_value(t9, t11, 0, 0, 4);
    xsi_set_current_line(147, ng0);
    t2 = (t0 + 5864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng20)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t4, 5, t5, 32);
    t7 = (t0 + 5864);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 5);
    xsi_set_current_line(148, ng0);
    t2 = (t0 + 6664);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng20)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t4, 5, t5, 32);
    t7 = (t0 + 6664);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 5);
    goto LAB23;

LAB15:    xsi_set_current_line(152, ng0);

LAB28:    xsi_set_current_line(153, ng0);
    t3 = ((char*)((ng19)));
    t4 = (t0 + 6984);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(154, ng0);
    t2 = (t0 + 4904);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t11, t4, 8);
    t5 = (t0 + 6664);
    xsi_vlogvar_assign_value(t5, t11, 0, 0, 5);
    goto LAB23;

LAB17:    xsi_set_current_line(159, ng0);

LAB29:    xsi_set_current_line(160, ng0);
    t3 = (t0 + 4904);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng20)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t5, 4, t7, 32);
    t9 = ((char*)((ng13)));
    memset(t12, 0, 8);
    xsi_vlog_unsigned_mod(t12, 32, t11, 32, t9, 32);
    t10 = ((char*)((ng19)));
    memset(t13, 0, 8);
    t14 = (t12 + 4);
    t15 = (t10 + 4);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t10);
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
        goto LAB33;

LAB30:    if (t25 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t13) = 1;

LAB33:    t29 = (t13 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(161, ng0);
    t2 = (t0 + 3864U);
    t3 = *((char **)t2);
    t2 = (t0 + 4744);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);

LAB36:    xsi_set_current_line(162, ng0);
    t2 = (t0 + 4904);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng20)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t4, 4, t5, 32);
    t7 = (t0 + 4904);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 4);
    goto LAB23;

LAB19:    xsi_set_current_line(170, ng0);

LAB37:    xsi_set_current_line(171, ng0);
    t3 = (t0 + 4584);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 7144);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 8);
    xsi_set_current_line(172, ng0);
    t2 = (t0 + 4744);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7304);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(173, ng0);
    t2 = (t0 + 4904);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng21)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_mod(t11, 32, t4, 4, t5, 32);
    t7 = (t0 + 7464);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 2);
    goto LAB23;

LAB21:    xsi_set_current_line(179, ng0);

LAB38:    xsi_set_current_line(180, ng0);
    t3 = (t0 + 4024U);
    t4 = *((char **)t3);
    t3 = (t0 + 5384);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 8);
    xsi_set_current_line(181, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 6504);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(181, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 6184);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(181, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 6344);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(182, ng0);
    t2 = (t0 + 5384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6024);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(183, ng0);
    t2 = (t0 + 5864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng20)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t4, 5, t5, 32);
    t7 = (t0 + 5864);
    xsi_vlogvar_assign_value(t7, t11, 0, 0, 5);
    goto LAB23;

LAB32:    t28 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB33;

LAB34:    xsi_set_current_line(160, ng0);
    t35 = (t0 + 3864U);
    t36 = *((char **)t35);
    t35 = (t0 + 4584);
    xsi_vlogvar_assign_value(t35, t36, 0, 0, 8);
    goto LAB36;

}


extern void work_m_04804990342896274998_0295930199_init()
{
	static char *pe[] = {(void *)Always_75_0,(void *)Always_83_1,(void *)Always_119_2};
	xsi_register_didat("work_m_04804990342896274998_0295930199", "isim/mem_controller_test_isim_beh.exe.sim/work/m_04804990342896274998_0295930199.didat");
	xsi_register_executes(pe);
}
