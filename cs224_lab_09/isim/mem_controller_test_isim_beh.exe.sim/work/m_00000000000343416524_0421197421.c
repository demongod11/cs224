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
static const char *ng0 = "C:/cs221_lab/cs224_lab_09/mem_reg.v";
static int ng1[] = {0, 0};
static int ng2[] = {15, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {0U, 255U};



static void Initial_28_0(char *t0)
{
    char t5[8];
    char t14[8];
    char t15[8];
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
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    xsi_set_current_line(28, ng0);

LAB2:    xsi_set_current_line(29, ng0);
    xsi_set_current_line(29, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 2408);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_leq(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB6:    xsi_set_current_line(31, ng0);
    t12 = ((char*)((ng1)));
    t13 = (t0 + 2248);
    t16 = (t0 + 2248);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 2248);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 2408);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(29, ng0);
    t1 = (t0 + 2408);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 2408);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB7:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t15), t35);
    goto LAB8;

}

static void Always_35_1(char *t0)
{
    char t7[8];
    char t46[8];
    char t47[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    unsigned int t56;
    int t57;
    char *t58;
    unsigned int t59;
    int t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    int t64;
    int t65;

LAB0:    t1 = (t0 + 3576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 4144);
    *((int *)t2) = 1;
    t3 = (t0 + 3608);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = (t0 + 1688U);
    t6 = *((char **)t4);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 & t9);
    *((unsigned int *)t7) = t10;
    t4 = (t5 + 4);
    t11 = (t6 + 4);
    t12 = (t7 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t11);
    t15 = (t13 | t14);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB6;

LAB7:
LAB8:    t38 = (t7 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (~(t39));
    t41 = *((unsigned int *)t7);
    t42 = (t41 & t40);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB9;

LAB10:
LAB11:    goto LAB2;

LAB6:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t7) = (t18 | t19);
    t20 = (t5 + 4);
    t21 = (t6 + 4);
    t22 = *((unsigned int *)t5);
    t23 = (~(t22));
    t24 = *((unsigned int *)t20);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (~(t26));
    t28 = *((unsigned int *)t21);
    t29 = (~(t28));
    t30 = (t23 & t25);
    t31 = (t27 & t29);
    t32 = (~(t30));
    t33 = (~(t31));
    t34 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t34 & t32);
    t35 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t35 & t33);
    t36 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t36 & t32);
    t37 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t37 & t33);
    goto LAB8;

LAB9:    xsi_set_current_line(38, ng0);
    t44 = (t0 + 1368U);
    t45 = *((char **)t44);
    t44 = (t0 + 2248);
    t48 = (t0 + 2248);
    t49 = (t48 + 72U);
    t50 = *((char **)t49);
    t51 = (t0 + 2248);
    t52 = (t51 + 64U);
    t53 = *((char **)t52);
    t54 = (t0 + 1208U);
    t55 = *((char **)t54);
    xsi_vlog_generic_convert_array_indices(t46, t47, t50, t53, 2, 1, t55, 4, 2);
    t54 = (t46 + 4);
    t56 = *((unsigned int *)t54);
    t57 = (!(t56));
    t58 = (t47 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (!(t59));
    t61 = (t57 && t60);
    if (t61 == 1)
        goto LAB12;

LAB13:    goto LAB11;

LAB12:    t62 = *((unsigned int *)t46);
    t63 = *((unsigned int *)t47);
    t64 = (t62 - t63);
    t65 = (t64 + 1);
    xsi_vlogvar_assign_value(t44, t45, 0, *((unsigned int *)t47), t65);
    goto LAB13;

}

static void Cont_40_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t14[8];
    char t60[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
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
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    int t38;
    int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    char *t59;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;

LAB0:    t1 = (t0 + 3824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1528U);
    t5 = *((char **)t2);
    t2 = (t0 + 1688U);
    t7 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t7 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t13 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t13) = 1;

LAB7:    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t6);
    t17 = (t15 & t16);
    *((unsigned int *)t14) = t17;
    t18 = (t5 + 4);
    t19 = (t6 + 4);
    t20 = (t14 + 4);
    t21 = *((unsigned int *)t18);
    t22 = *((unsigned int *)t19);
    t23 = (t21 | t22);
    *((unsigned int *)t20) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB8;

LAB9:
LAB10:    memset(t4, 0, 8);
    t46 = (t14 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t14);
    t50 = (t49 & t48);
    t51 = (t50 & 1U);
    if (t51 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t46) != 0)
        goto LAB13;

LAB14:    t53 = (t4 + 4);
    t54 = *((unsigned int *)t4);
    t55 = *((unsigned int *)t53);
    t56 = (t54 || t55);
    if (t56 > 0)
        goto LAB15;

LAB16:    t69 = *((unsigned int *)t4);
    t70 = (~(t69));
    t71 = *((unsigned int *)t53);
    t72 = (t70 || t71);
    if (t72 > 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t53) > 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t4) > 0)
        goto LAB21;

LAB22:    memcpy(t3, t67, 8);

LAB23:    t73 = (t0 + 4240);
    t74 = (t73 + 56U);
    t75 = *((char **)t74);
    t76 = (t75 + 56U);
    t77 = *((char **)t76);
    memset(t77, 0, 8);
    t78 = 255U;
    t79 = t78;
    t80 = (t3 + 4);
    t81 = *((unsigned int *)t3);
    t78 = (t78 & t81);
    t82 = *((unsigned int *)t80);
    t79 = (t79 & t82);
    t83 = (t77 + 4);
    t84 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t84 | t78);
    t85 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t85 | t79);
    xsi_driver_vfirst_trans(t73, 0, 7);
    t86 = (t0 + 4160);
    *((int *)t86) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t6) = 1;
    goto LAB7;

LAB8:    t26 = *((unsigned int *)t14);
    t27 = *((unsigned int *)t20);
    *((unsigned int *)t14) = (t26 | t27);
    t28 = (t5 + 4);
    t29 = (t6 + 4);
    t30 = *((unsigned int *)t5);
    t31 = (~(t30));
    t32 = *((unsigned int *)t28);
    t33 = (~(t32));
    t34 = *((unsigned int *)t6);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (~(t36));
    t38 = (t31 & t33);
    t39 = (t35 & t37);
    t40 = (~(t38));
    t41 = (~(t39));
    t42 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t42 & t40);
    t43 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t43 & t41);
    t44 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t44 & t40);
    t45 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t45 & t41);
    goto LAB10;

LAB11:    *((unsigned int *)t4) = 1;
    goto LAB14;

LAB13:    t52 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB14;

LAB15:    t57 = (t0 + 2248);
    t58 = (t57 + 56U);
    t59 = *((char **)t58);
    t61 = (t0 + 2248);
    t62 = (t61 + 72U);
    t63 = *((char **)t62);
    t64 = (t0 + 2248);
    t65 = (t64 + 64U);
    t66 = *((char **)t65);
    t67 = (t0 + 1208U);
    t68 = *((char **)t67);
    xsi_vlog_generic_get_array_select_value(t60, 8, t59, t63, t66, 2, 1, t68, 4, 2);
    goto LAB16;

LAB17:    t67 = ((char*)((ng4)));
    goto LAB18;

LAB19:    xsi_vlog_unsigned_bit_combine(t3, 8, t60, 8, t67, 8);
    goto LAB23;

LAB21:    memcpy(t3, t60, 8);
    goto LAB23;

}


extern void work_m_00000000000343416524_0421197421_init()
{
	static char *pe[] = {(void *)Initial_28_0,(void *)Always_35_1,(void *)Cont_40_2};
	xsi_register_didat("work_m_00000000000343416524_0421197421", "isim/mem_controller_test_isim_beh.exe.sim/work/m_00000000000343416524_0421197421.didat");
	xsi_register_executes(pe);
}
