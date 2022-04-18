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
static const char *ng0 = "/home/chandrabhushan/coding/cs224_labs/lab_09_02/sram_sync.v";
static int ng1[] = {0, 0};
static int ng2[] = {32, 0};
static int ng3[] = {1, 0};



static void Initial_31_0(char *t0)
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

LAB0:    xsi_set_current_line(31, ng0);

LAB2:    xsi_set_current_line(32, ng0);
    xsi_set_current_line(32, ng0);
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

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);

LAB6:    xsi_set_current_line(33, ng0);
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

LAB8:    xsi_set_current_line(32, ng0);
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

}

static void Always_36_1(char *t0)
{
    char t4[8];
    char t21[8];
    char t45[8];
    char t46[8];
    char t71[8];
    char t102[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    unsigned int t55;
    int t56;
    char *t57;
    unsigned int t58;
    int t59;
    int t60;
    unsigned int t61;
    unsigned int t62;
    int t63;
    int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
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
    unsigned int t99;
    unsigned int t100;
    char *t101;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    char *t108;
    char *t109;
    char *t110;

LAB0:    t1 = (t0 + 3728U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 4048);
    *((int *)t2) = 1;
    t3 = (t0 + 3760);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(38, ng0);
    t5 = (t0 + 1368U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(39, ng0);

LAB13:    xsi_set_current_line(40, ng0);
    t19 = (t0 + 1688U);
    t20 = *((char **)t19);
    t19 = ((char*)((ng1)));
    memset(t21, 0, 8);
    t22 = (t20 + 4);
    t23 = (t19 + 4);
    t24 = *((unsigned int *)t20);
    t25 = *((unsigned int *)t19);
    t26 = (t24 ^ t25);
    t27 = *((unsigned int *)t22);
    t28 = *((unsigned int *)t23);
    t29 = (t27 ^ t28);
    t30 = (t26 | t29);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t23);
    t33 = (t31 | t32);
    t34 = (~(t33));
    t35 = (t30 & t34);
    if (t35 != 0)
        goto LAB17;

LAB14:    if (t33 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t21) = 1;

LAB17:    t37 = (t21 + 4);
    t38 = *((unsigned int *)t37);
    t39 = (~(t38));
    t40 = *((unsigned int *)t21);
    t41 = (t40 & t39);
    t42 = (t41 != 0);
    if (t42 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t6);
    t18 = (t16 | t17);
    t24 = (~(t18));
    t25 = (t15 & t24);
    if (t25 != 0)
        goto LAB26;

LAB23:    if (t18 != 0)
        goto LAB25;

LAB24:    *((unsigned int *)t4) = 1;

LAB26:    memset(t21, 0, 8);
    t13 = (t4 + 4);
    t26 = *((unsigned int *)t13);
    t27 = (~(t26));
    t28 = *((unsigned int *)t4);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t13) != 0)
        goto LAB29;

LAB30:    t20 = (t21 + 4);
    t31 = *((unsigned int *)t21);
    t32 = *((unsigned int *)t20);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB31;

LAB32:    memcpy(t71, t21, 8);

LAB33:    t53 = (t71 + 4);
    t96 = *((unsigned int *)t53);
    t97 = (~(t96));
    t98 = *((unsigned int *)t71);
    t99 = (t98 & t97);
    t100 = (t99 != 0);
    if (t100 > 0)
        goto LAB45;

LAB46:
LAB47:
LAB20:    goto LAB12;

LAB16:    t36 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(41, ng0);
    t43 = (t0 + 1048U);
    t44 = *((char **)t43);
    t43 = (t0 + 2408);
    t47 = (t0 + 2408);
    t48 = (t47 + 72U);
    t49 = *((char **)t48);
    t50 = (t0 + 2408);
    t51 = (t50 + 64U);
    t52 = *((char **)t51);
    t53 = (t0 + 1208U);
    t54 = *((char **)t53);
    xsi_vlog_generic_convert_array_indices(t45, t46, t49, t52, 2, 1, t54, 5, 2);
    t53 = (t45 + 4);
    t55 = *((unsigned int *)t53);
    t56 = (!(t55));
    t57 = (t46 + 4);
    t58 = *((unsigned int *)t57);
    t59 = (!(t58));
    t60 = (t56 && t59);
    if (t60 == 1)
        goto LAB21;

LAB22:    goto LAB20;

LAB21:    t61 = *((unsigned int *)t45);
    t62 = *((unsigned int *)t46);
    t63 = (t61 - t62);
    t64 = (t63 + 1);
    xsi_vlogvar_wait_assign_value(t43, t44, 0, *((unsigned int *)t46), t64, 0LL);
    goto LAB22;

LAB25:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB26;

LAB27:    *((unsigned int *)t21) = 1;
    goto LAB30;

LAB29:    t19 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB30;

LAB31:    t22 = (t0 + 1688U);
    t23 = *((char **)t22);
    t22 = ((char*)((ng3)));
    memset(t45, 0, 8);
    t36 = (t23 + 4);
    t37 = (t22 + 4);
    t34 = *((unsigned int *)t23);
    t35 = *((unsigned int *)t22);
    t38 = (t34 ^ t35);
    t39 = *((unsigned int *)t36);
    t40 = *((unsigned int *)t37);
    t41 = (t39 ^ t40);
    t42 = (t38 | t41);
    t55 = *((unsigned int *)t36);
    t58 = *((unsigned int *)t37);
    t61 = (t55 | t58);
    t62 = (~(t61));
    t65 = (t42 & t62);
    if (t65 != 0)
        goto LAB37;

LAB34:    if (t61 != 0)
        goto LAB36;

LAB35:    *((unsigned int *)t45) = 1;

LAB37:    memset(t46, 0, 8);
    t44 = (t45 + 4);
    t66 = *((unsigned int *)t44);
    t67 = (~(t66));
    t68 = *((unsigned int *)t45);
    t69 = (t68 & t67);
    t70 = (t69 & 1U);
    if (t70 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t44) != 0)
        goto LAB40;

LAB41:    t72 = *((unsigned int *)t21);
    t73 = *((unsigned int *)t46);
    t74 = (t72 & t73);
    *((unsigned int *)t71) = t74;
    t48 = (t21 + 4);
    t49 = (t46 + 4);
    t50 = (t71 + 4);
    t75 = *((unsigned int *)t48);
    t76 = *((unsigned int *)t49);
    t77 = (t75 | t76);
    *((unsigned int *)t50) = t77;
    t78 = *((unsigned int *)t50);
    t79 = (t78 != 0);
    if (t79 == 1)
        goto LAB42;

LAB43:
LAB44:    goto LAB33;

LAB36:    t43 = (t45 + 4);
    *((unsigned int *)t45) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB37;

LAB38:    *((unsigned int *)t46) = 1;
    goto LAB41;

LAB40:    t47 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB41;

LAB42:    t80 = *((unsigned int *)t71);
    t81 = *((unsigned int *)t50);
    *((unsigned int *)t71) = (t80 | t81);
    t51 = (t21 + 4);
    t52 = (t46 + 4);
    t82 = *((unsigned int *)t21);
    t83 = (~(t82));
    t84 = *((unsigned int *)t51);
    t85 = (~(t84));
    t86 = *((unsigned int *)t46);
    t87 = (~(t86));
    t88 = *((unsigned int *)t52);
    t89 = (~(t88));
    t56 = (t83 & t85);
    t59 = (t87 & t89);
    t90 = (~(t56));
    t91 = (~(t59));
    t92 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t92 & t90);
    t93 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t93 & t91);
    t94 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t94 & t90);
    t95 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t95 & t91);
    goto LAB44;

LAB45:    xsi_set_current_line(43, ng0);
    t54 = (t0 + 2408);
    t57 = (t54 + 56U);
    t101 = *((char **)t57);
    t103 = (t0 + 2408);
    t104 = (t103 + 72U);
    t105 = *((char **)t104);
    t106 = (t0 + 2408);
    t107 = (t106 + 64U);
    t108 = *((char **)t107);
    t109 = (t0 + 1208U);
    t110 = *((char **)t109);
    xsi_vlog_generic_get_array_select_value(t102, 8, t101, t105, t108, 2, 1, t110, 5, 2);
    t109 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t109, t102, 0, 0, 8, 0LL);
    goto LAB47;

}


extern void work_m_03582693836922646987_2776626703_init()
{
	static char *pe[] = {(void *)Initial_31_0,(void *)Always_36_1};
	xsi_register_didat("work_m_03582693836922646987_2776626703", "isim/mem_controller_test_isim_beh.exe.sim/work/m_03582693836922646987_2776626703.didat");
	xsi_register_executes(pe);
}
