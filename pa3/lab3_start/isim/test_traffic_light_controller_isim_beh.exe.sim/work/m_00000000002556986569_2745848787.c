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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "//vmware-host/Shared Folders/shared_with_vm/141git/cs141/pa3/lab3_start/traffic_light_controller.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {15U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {14U, 0U};
static unsigned int ng8[] = {2U, 0U};
static unsigned int ng9[] = {4U, 0U};
static unsigned int ng10[] = {5U, 0U};
static unsigned int ng11[] = {9U, 0U};
static unsigned int ng12[] = {7U, 0U};
static unsigned int ng13[] = {8U, 0U};
static unsigned int ng14[] = {10U, 0U};



static void Always_66_0(char *t0)
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

LAB0:    t1 = (t0 + 4288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 4628);
    *((int *)t2) = 1;
    t3 = (t0 + 4316);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(66, ng0);

LAB5:    xsi_set_current_line(67, ng0);
    t4 = (t0 + 1972U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(71, ng0);

LAB10:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 3212);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 3120);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 3396);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 3304);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 3580);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 3488);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 3764);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 3672);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(67, ng0);

LAB9:    xsi_set_current_line(68, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3120);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3304);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

}

static void Always_80_1(char *t0)
{
    char t11[8];
    char t30[8];
    char t41[8];
    char t60[8];
    char t68[8];
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
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
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
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    char *t106;

LAB0:    t1 = (t0 + 4432U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 4636);
    *((int *)t2) = 1;
    t3 = (t0 + 4460);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(80, ng0);

LAB5:    xsi_set_current_line(81, ng0);
    t4 = (t0 + 3120);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t7, 4);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng12)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng13)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB23;

LAB24:
LAB26:
LAB25:    xsi_set_current_line(315, ng0);

LAB271:    xsi_set_current_line(316, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2660);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(317, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2752);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(318, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2844);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(319, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3028);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(320, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2936);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(321, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(323, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3212);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(325, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3396);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB27:    goto LAB2;

LAB7:    xsi_set_current_line(82, ng0);

LAB28:    xsi_set_current_line(85, ng0);
    t9 = ((char*)((ng3)));
    t10 = (t0 + 2660);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 3, 0LL);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2752);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2844);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3028);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2936);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3764);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3580);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3212);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB27;

LAB9:    xsi_set_current_line(108, ng0);

LAB29:    xsi_set_current_line(111, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 2660);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2752);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 3672);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2844);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3028);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2936);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(118, ng0);
    t2 = (t0 + 3488);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 3580);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3212);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB27;

LAB11:    xsi_set_current_line(124, ng0);

LAB30:    xsi_set_current_line(127, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 2660);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2752);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 3672);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2844);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);
    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3028);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2936);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(134, ng0);
    t2 = (t0 + 3488);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 3580);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(136, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3212);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB27;

LAB13:    xsi_set_current_line(139, ng0);

LAB31:    xsi_set_current_line(142, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 2660);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    xsi_set_current_line(143, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2752);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(144, ng0);
    t2 = (t0 + 3672);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2844);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);
    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3028);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2936);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(149, ng0);
    t2 = (t0 + 3488);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 3580);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(151, ng0);
    t2 = (t0 + 2340U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t5);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t5);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB35;

LAB32:    if (t21 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t11) = 1;

LAB35:    t9 = (t11 + 4);
    t24 = *((unsigned int *)t9);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(177, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3212);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB38:    goto LAB27;

LAB15:    xsi_set_current_line(181, ng0);

LAB100:    xsi_set_current_line(184, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 2660);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    xsi_set_current_line(185, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2752);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(186, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2844);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(187, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3028);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(188, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2936);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(189, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(191, ng0);
    t2 = (t0 + 3488);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 3580);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(194, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3580);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(196, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 3212);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB27;

LAB17:    xsi_set_current_line(200, ng0);

LAB101:    xsi_set_current_line(203, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 2660);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    xsi_set_current_line(204, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2752);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(205, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2844);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(206, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3028);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(207, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2936);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(208, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(211, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3580);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(213, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 3212);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB27;

LAB19:    xsi_set_current_line(232, ng0);

LAB102:    xsi_set_current_line(235, ng0);
    t3 = (t0 + 3488);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    memset(t30, 0, 8);
    t7 = (t5 + 4);
    t12 = *((unsigned int *)t7);
    t13 = (~(t12));
    t14 = *((unsigned int *)t5);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB103;

LAB104:    if (*((unsigned int *)t7) != 0)
        goto LAB105;

LAB106:    t10 = (t30 + 4);
    t17 = *((unsigned int *)t30);
    t18 = *((unsigned int *)t10);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB107;

LAB108:    t20 = *((unsigned int *)t30);
    t21 = (~(t20));
    t22 = *((unsigned int *)t10);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB109;

LAB110:    if (*((unsigned int *)t10) > 0)
        goto LAB111;

LAB112:    if (*((unsigned int *)t30) > 0)
        goto LAB113;

LAB114:    memcpy(t11, t36, 8);

LAB115:    t37 = (t0 + 2660);
    xsi_vlogvar_wait_assign_value(t37, t11, 0, 0, 3, 0LL);
    xsi_set_current_line(236, ng0);
    t2 = (t0 + 3488);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t41, 0, 8);
    t5 = (t4 + 4);
    t12 = *((unsigned int *)t5);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB119;

LAB117:    if (*((unsigned int *)t5) == 0)
        goto LAB116;

LAB118:    t7 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t7) = 1;

LAB119:    t9 = (t41 + 4);
    t10 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = (~(t17));
    *((unsigned int *)t41) = t18;
    *((unsigned int *)t9) = 0;
    if (*((unsigned int *)t10) != 0)
        goto LAB121;

LAB120:    t23 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t23 & 1U);
    t24 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t24 & 1U);
    memset(t30, 0, 8);
    t29 = (t41 + 4);
    t25 = *((unsigned int *)t29);
    t26 = (~(t25));
    t27 = *((unsigned int *)t41);
    t28 = (t27 & t26);
    t31 = (t28 & 1U);
    if (t31 != 0)
        goto LAB122;

LAB123:    if (*((unsigned int *)t29) != 0)
        goto LAB124;

LAB125:    t37 = (t30 + 4);
    t32 = *((unsigned int *)t30);
    t33 = *((unsigned int *)t37);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB126;

LAB127:    t35 = *((unsigned int *)t30);
    t38 = (~(t35));
    t39 = *((unsigned int *)t37);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB128;

LAB129:    if (*((unsigned int *)t37) > 0)
        goto LAB130;

LAB131:    if (*((unsigned int *)t30) > 0)
        goto LAB132;

LAB133:    memcpy(t11, t43, 8);

LAB134:    t49 = (t0 + 2752);
    xsi_vlogvar_wait_assign_value(t49, t11, 0, 0, 3, 0LL);
    xsi_set_current_line(237, ng0);
    t2 = (t0 + 3488);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t30, 0, 8);
    t5 = (t4 + 4);
    t12 = *((unsigned int *)t5);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB135;

LAB136:    if (*((unsigned int *)t5) != 0)
        goto LAB137;

LAB138:    t9 = (t30 + 4);
    t17 = *((unsigned int *)t30);
    t18 = *((unsigned int *)t9);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB139;

LAB140:    t20 = *((unsigned int *)t30);
    t21 = (~(t20));
    t22 = *((unsigned int *)t9);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB141;

LAB142:    if (*((unsigned int *)t9) > 0)
        goto LAB143;

LAB144:    if (*((unsigned int *)t30) > 0)
        goto LAB145;

LAB146:    memcpy(t11, t29, 8);

LAB147:    t36 = (t0 + 2844);
    xsi_vlogvar_wait_assign_value(t36, t11, 0, 0, 2, 0LL);
    xsi_set_current_line(238, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3028);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(239, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2936);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(240, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(242, ng0);
    t2 = (t0 + 3488);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 3580);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(244, ng0);
    t2 = (t0 + 2340U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t5);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t5);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB151;

LAB148:    if (t21 != 0)
        goto LAB150;

LAB149:    *((unsigned int *)t11) = 1;

LAB151:    t9 = (t11 + 4);
    t24 = *((unsigned int *)t9);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB152;

LAB153:    xsi_set_current_line(247, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 3212);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB154:    goto LAB27;

LAB21:    xsi_set_current_line(251, ng0);

LAB155:    xsi_set_current_line(254, ng0);
    t3 = (t0 + 3488);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    memset(t30, 0, 8);
    t7 = (t5 + 4);
    t12 = *((unsigned int *)t7);
    t13 = (~(t12));
    t14 = *((unsigned int *)t5);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB156;

LAB157:    if (*((unsigned int *)t7) != 0)
        goto LAB158;

LAB159:    t10 = (t30 + 4);
    t17 = *((unsigned int *)t30);
    t18 = *((unsigned int *)t10);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB160;

LAB161:    t20 = *((unsigned int *)t30);
    t21 = (~(t20));
    t22 = *((unsigned int *)t10);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB162;

LAB163:    if (*((unsigned int *)t10) > 0)
        goto LAB164;

LAB165:    if (*((unsigned int *)t30) > 0)
        goto LAB166;

LAB167:    memcpy(t11, t36, 8);

LAB168:    t37 = (t0 + 2660);
    xsi_vlogvar_wait_assign_value(t37, t11, 0, 0, 3, 0LL);
    xsi_set_current_line(255, ng0);
    t2 = (t0 + 3488);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t41, 0, 8);
    t5 = (t4 + 4);
    t12 = *((unsigned int *)t5);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB172;

LAB170:    if (*((unsigned int *)t5) == 0)
        goto LAB169;

LAB171:    t7 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t7) = 1;

LAB172:    t9 = (t41 + 4);
    t10 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = (~(t17));
    *((unsigned int *)t41) = t18;
    *((unsigned int *)t9) = 0;
    if (*((unsigned int *)t10) != 0)
        goto LAB174;

LAB173:    t23 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t23 & 1U);
    t24 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t24 & 1U);
    memset(t30, 0, 8);
    t29 = (t41 + 4);
    t25 = *((unsigned int *)t29);
    t26 = (~(t25));
    t27 = *((unsigned int *)t41);
    t28 = (t27 & t26);
    t31 = (t28 & 1U);
    if (t31 != 0)
        goto LAB175;

LAB176:    if (*((unsigned int *)t29) != 0)
        goto LAB177;

LAB178:    t37 = (t30 + 4);
    t32 = *((unsigned int *)t30);
    t33 = *((unsigned int *)t37);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB179;

LAB180:    t35 = *((unsigned int *)t30);
    t38 = (~(t35));
    t39 = *((unsigned int *)t37);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB181;

LAB182:    if (*((unsigned int *)t37) > 0)
        goto LAB183;

LAB184:    if (*((unsigned int *)t30) > 0)
        goto LAB185;

LAB186:    memcpy(t11, t43, 8);

LAB187:    t49 = (t0 + 2752);
    xsi_vlogvar_wait_assign_value(t49, t11, 0, 0, 3, 0LL);
    xsi_set_current_line(256, ng0);
    t2 = (t0 + 3488);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t30, 0, 8);
    t5 = (t4 + 4);
    t12 = *((unsigned int *)t5);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB188;

LAB189:    if (*((unsigned int *)t5) != 0)
        goto LAB190;

LAB191:    t9 = (t30 + 4);
    t17 = *((unsigned int *)t30);
    t18 = *((unsigned int *)t9);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB192;

LAB193:    t20 = *((unsigned int *)t30);
    t21 = (~(t20));
    t22 = *((unsigned int *)t9);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB194;

LAB195:    if (*((unsigned int *)t9) > 0)
        goto LAB196;

LAB197:    if (*((unsigned int *)t30) > 0)
        goto LAB198;

LAB199:    memcpy(t11, t29, 8);

LAB200:    t36 = (t0 + 2844);
    xsi_vlogvar_wait_assign_value(t36, t11, 0, 0, 2, 0LL);
    xsi_set_current_line(257, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3028);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(258, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2936);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(259, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(261, ng0);
    t2 = (t0 + 3488);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 3580);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(263, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 3212);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB27;

LAB23:    xsi_set_current_line(283, ng0);

LAB201:    xsi_set_current_line(286, ng0);
    t3 = (t0 + 3488);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    memset(t30, 0, 8);
    t7 = (t5 + 4);
    t12 = *((unsigned int *)t7);
    t13 = (~(t12));
    t14 = *((unsigned int *)t5);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB202;

LAB203:    if (*((unsigned int *)t7) != 0)
        goto LAB204;

LAB205:    t10 = (t30 + 4);
    t17 = *((unsigned int *)t30);
    t18 = *((unsigned int *)t10);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB206;

LAB207:    t20 = *((unsigned int *)t30);
    t21 = (~(t20));
    t22 = *((unsigned int *)t10);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB208;

LAB209:    if (*((unsigned int *)t10) > 0)
        goto LAB210;

LAB211:    if (*((unsigned int *)t30) > 0)
        goto LAB212;

LAB213:    memcpy(t11, t36, 8);

LAB214:    t37 = (t0 + 2660);
    xsi_vlogvar_wait_assign_value(t37, t11, 0, 0, 3, 0LL);
    xsi_set_current_line(287, ng0);
    t2 = (t0 + 3488);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t41, 0, 8);
    t5 = (t4 + 4);
    t12 = *((unsigned int *)t5);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB218;

LAB216:    if (*((unsigned int *)t5) == 0)
        goto LAB215;

LAB217:    t7 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t7) = 1;

LAB218:    t9 = (t41 + 4);
    t10 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = (~(t17));
    *((unsigned int *)t41) = t18;
    *((unsigned int *)t9) = 0;
    if (*((unsigned int *)t10) != 0)
        goto LAB220;

LAB219:    t23 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t23 & 1U);
    t24 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t24 & 1U);
    memset(t30, 0, 8);
    t29 = (t41 + 4);
    t25 = *((unsigned int *)t29);
    t26 = (~(t25));
    t27 = *((unsigned int *)t41);
    t28 = (t27 & t26);
    t31 = (t28 & 1U);
    if (t31 != 0)
        goto LAB221;

LAB222:    if (*((unsigned int *)t29) != 0)
        goto LAB223;

LAB224:    t37 = (t30 + 4);
    t32 = *((unsigned int *)t30);
    t33 = *((unsigned int *)t37);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB225;

LAB226:    t35 = *((unsigned int *)t30);
    t38 = (~(t35));
    t39 = *((unsigned int *)t37);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB227;

LAB228:    if (*((unsigned int *)t37) > 0)
        goto LAB229;

LAB230:    if (*((unsigned int *)t30) > 0)
        goto LAB231;

LAB232:    memcpy(t11, t43, 8);

LAB233:    t49 = (t0 + 2752);
    xsi_vlogvar_wait_assign_value(t49, t11, 0, 0, 3, 0LL);
    xsi_set_current_line(288, ng0);
    t2 = (t0 + 3488);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t30, 0, 8);
    t5 = (t4 + 4);
    t12 = *((unsigned int *)t5);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB234;

LAB235:    if (*((unsigned int *)t5) != 0)
        goto LAB236;

LAB237:    t9 = (t30 + 4);
    t17 = *((unsigned int *)t30);
    t18 = *((unsigned int *)t9);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB238;

LAB239:    t20 = *((unsigned int *)t30);
    t21 = (~(t20));
    t22 = *((unsigned int *)t9);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB240;

LAB241:    if (*((unsigned int *)t9) > 0)
        goto LAB242;

LAB243:    if (*((unsigned int *)t30) > 0)
        goto LAB244;

LAB245:    memcpy(t11, t29, 8);

LAB246:    t36 = (t0 + 2844);
    xsi_vlogvar_wait_assign_value(t36, t11, 0, 0, 2, 0LL);
    xsi_set_current_line(289, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3028);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(290, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2936);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(291, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(293, ng0);
    t2 = (t0 + 3488);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 3580);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(296, ng0);
    t2 = (t0 + 2340U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t5);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t5);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB250;

LAB247:    if (t21 != 0)
        goto LAB249;

LAB248:    *((unsigned int *)t11) = 1;

LAB250:    t9 = (t11 + 4);
    t24 = *((unsigned int *)t9);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB251;

LAB252:    xsi_set_current_line(310, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 3212);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB253:    goto LAB27;

LAB34:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB35;

LAB36:    xsi_set_current_line(151, ng0);

LAB39:    xsi_set_current_line(154, ng0);
    t10 = (t0 + 2064U);
    t29 = *((char **)t10);
    memset(t30, 0, 8);
    t10 = (t29 + 4);
    t31 = *((unsigned int *)t10);
    t32 = (~(t31));
    t33 = *((unsigned int *)t29);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t10) != 0)
        goto LAB42;

LAB43:    t37 = (t30 + 4);
    t38 = *((unsigned int *)t30);
    t39 = *((unsigned int *)t37);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB44;

LAB45:    memcpy(t68, t30, 8);

LAB46:    t99 = (t68 + 4);
    t100 = *((unsigned int *)t99);
    t101 = (~(t100));
    t102 = *((unsigned int *)t68);
    t103 = (t102 & t101);
    t104 = (t103 != 0);
    if (t104 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(158, ng0);
    t2 = (t0 + 2064U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t3 + 4);
    t12 = *((unsigned int *)t2);
    t13 = (~(t12));
    t14 = *((unsigned int *)t3);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB66;

LAB64:    if (*((unsigned int *)t2) == 0)
        goto LAB63;

LAB65:    t4 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t4) = 1;

LAB66:    t5 = (t11 + 4);
    t7 = (t3 + 4);
    t17 = *((unsigned int *)t3);
    t18 = (~(t17));
    *((unsigned int *)t11) = t18;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB68;

LAB67:    t23 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t23 & 1U);
    t24 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t24 & 1U);
    memset(t30, 0, 8);
    t9 = (t11 + 4);
    t25 = *((unsigned int *)t9);
    t26 = (~(t25));
    t27 = *((unsigned int *)t11);
    t28 = (t27 & t26);
    t31 = (t28 & 1U);
    if (t31 != 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t9) != 0)
        goto LAB71;

LAB72:    t29 = (t30 + 4);
    t32 = *((unsigned int *)t30);
    t33 = *((unsigned int *)t29);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB73;

LAB74:    memcpy(t60, t30, 8);

LAB75:    t67 = (t60 + 4);
    t79 = *((unsigned int *)t67);
    t80 = (~(t79));
    t81 = *((unsigned int *)t60);
    t84 = (t81 & t80);
    t85 = (t84 != 0);
    if (t85 > 0)
        goto LAB83;

LAB84:    xsi_set_current_line(165, ng0);
    t2 = (t0 + 3488);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
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
        goto LAB89;

LAB86:    if (t21 != 0)
        goto LAB88;

LAB87:    *((unsigned int *)t11) = 1;

LAB89:    t29 = (t11 + 4);
    t24 = *((unsigned int *)t29);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB90;

LAB91:    xsi_set_current_line(169, ng0);
    t2 = (t0 + 3488);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
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
        goto LAB96;

LAB93:    if (t21 != 0)
        goto LAB95;

LAB94:    *((unsigned int *)t11) = 1;

LAB96:    t29 = (t11 + 4);
    t24 = *((unsigned int *)t29);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB97;

LAB98:
LAB99:
LAB92:
LAB85:
LAB62:    goto LAB38;

LAB40:    *((unsigned int *)t30) = 1;
    goto LAB43;

LAB42:    t36 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB43;

LAB44:    t42 = (t0 + 2156U);
    t43 = *((char **)t42);
    memset(t41, 0, 8);
    t42 = (t43 + 4);
    t44 = *((unsigned int *)t42);
    t45 = (~(t44));
    t46 = *((unsigned int *)t43);
    t47 = (t46 & t45);
    t48 = (t47 & 1U);
    if (t48 != 0)
        goto LAB50;

LAB48:    if (*((unsigned int *)t42) == 0)
        goto LAB47;

LAB49:    t49 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t49) = 1;

LAB50:    t50 = (t41 + 4);
    t51 = (t43 + 4);
    t52 = *((unsigned int *)t43);
    t53 = (~(t52));
    *((unsigned int *)t41) = t53;
    *((unsigned int *)t50) = 0;
    if (*((unsigned int *)t51) != 0)
        goto LAB52;

LAB51:    t58 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t58 & 1U);
    t59 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t59 & 1U);
    memset(t60, 0, 8);
    t61 = (t41 + 4);
    t62 = *((unsigned int *)t61);
    t63 = (~(t62));
    t64 = *((unsigned int *)t41);
    t65 = (t64 & t63);
    t66 = (t65 & 1U);
    if (t66 != 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t61) != 0)
        goto LAB55;

LAB56:    t69 = *((unsigned int *)t30);
    t70 = *((unsigned int *)t60);
    t71 = (t69 & t70);
    *((unsigned int *)t68) = t71;
    t72 = (t30 + 4);
    t73 = (t60 + 4);
    t74 = (t68 + 4);
    t75 = *((unsigned int *)t72);
    t76 = *((unsigned int *)t73);
    t77 = (t75 | t76);
    *((unsigned int *)t74) = t77;
    t78 = *((unsigned int *)t74);
    t79 = (t78 != 0);
    if (t79 == 1)
        goto LAB57;

LAB58:
LAB59:    goto LAB46;

LAB47:    *((unsigned int *)t41) = 1;
    goto LAB50;

LAB52:    t54 = *((unsigned int *)t41);
    t55 = *((unsigned int *)t51);
    *((unsigned int *)t41) = (t54 | t55);
    t56 = *((unsigned int *)t50);
    t57 = *((unsigned int *)t51);
    *((unsigned int *)t50) = (t56 | t57);
    goto LAB51;

LAB53:    *((unsigned int *)t60) = 1;
    goto LAB56;

LAB55:    t67 = (t60 + 4);
    *((unsigned int *)t60) = 1;
    *((unsigned int *)t67) = 1;
    goto LAB56;

LAB57:    t80 = *((unsigned int *)t68);
    t81 = *((unsigned int *)t74);
    *((unsigned int *)t68) = (t80 | t81);
    t82 = (t30 + 4);
    t83 = (t60 + 4);
    t84 = *((unsigned int *)t30);
    t85 = (~(t84));
    t86 = *((unsigned int *)t82);
    t87 = (~(t86));
    t88 = *((unsigned int *)t60);
    t89 = (~(t88));
    t90 = *((unsigned int *)t83);
    t91 = (~(t90));
    t8 = (t85 & t87);
    t92 = (t89 & t91);
    t93 = (~(t8));
    t94 = (~(t92));
    t95 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t95 & t93);
    t96 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t96 & t94);
    t97 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t97 & t93);
    t98 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t98 & t94);
    goto LAB59;

LAB60:    xsi_set_current_line(155, ng0);
    t105 = ((char*)((ng9)));
    t106 = (t0 + 3212);
    xsi_vlogvar_wait_assign_value(t106, t105, 0, 0, 4, 0LL);
    goto LAB62;

LAB63:    *((unsigned int *)t11) = 1;
    goto LAB66;

LAB68:    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t11) = (t19 | t20);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    *((unsigned int *)t5) = (t21 | t22);
    goto LAB67;

LAB69:    *((unsigned int *)t30) = 1;
    goto LAB72;

LAB71:    t10 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB72;

LAB73:    t36 = (t0 + 2156U);
    t37 = *((char **)t36);
    memset(t41, 0, 8);
    t36 = (t37 + 4);
    t35 = *((unsigned int *)t36);
    t38 = (~(t35));
    t39 = *((unsigned int *)t37);
    t40 = (t39 & t38);
    t44 = (t40 & 1U);
    if (t44 != 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t36) != 0)
        goto LAB78;

LAB79:    t45 = *((unsigned int *)t30);
    t46 = *((unsigned int *)t41);
    t47 = (t45 & t46);
    *((unsigned int *)t60) = t47;
    t43 = (t30 + 4);
    t49 = (t41 + 4);
    t50 = (t60 + 4);
    t48 = *((unsigned int *)t43);
    t52 = *((unsigned int *)t49);
    t53 = (t48 | t52);
    *((unsigned int *)t50) = t53;
    t54 = *((unsigned int *)t50);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB80;

LAB81:
LAB82:    goto LAB75;

LAB76:    *((unsigned int *)t41) = 1;
    goto LAB79;

LAB78:    t42 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB79;

LAB80:    t56 = *((unsigned int *)t60);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t60) = (t56 | t57);
    t51 = (t30 + 4);
    t61 = (t41 + 4);
    t58 = *((unsigned int *)t30);
    t59 = (~(t58));
    t62 = *((unsigned int *)t51);
    t63 = (~(t62));
    t64 = *((unsigned int *)t41);
    t65 = (~(t64));
    t66 = *((unsigned int *)t61);
    t69 = (~(t66));
    t8 = (t59 & t63);
    t92 = (t65 & t69);
    t70 = (~(t8));
    t71 = (~(t92));
    t75 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t75 & t70);
    t76 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t76 & t71);
    t77 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t77 & t70);
    t78 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t78 & t71);
    goto LAB82;

LAB83:    xsi_set_current_line(159, ng0);
    t72 = ((char*)((ng10)));
    t73 = (t0 + 3212);
    xsi_vlogvar_wait_assign_value(t73, t72, 0, 0, 4, 0LL);
    goto LAB85;

LAB88:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB89;

LAB90:    xsi_set_current_line(166, ng0);
    t36 = ((char*)((ng10)));
    t37 = (t0 + 3212);
    xsi_vlogvar_wait_assign_value(t37, t36, 0, 0, 4, 0LL);
    goto LAB92;

LAB95:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB96;

LAB97:    xsi_set_current_line(170, ng0);
    t36 = ((char*)((ng9)));
    t37 = (t0 + 3212);
    xsi_vlogvar_wait_assign_value(t37, t36, 0, 0, 4, 0LL);
    goto LAB99;

LAB103:    *((unsigned int *)t30) = 1;
    goto LAB106;

LAB105:    t9 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB106;

LAB107:    t29 = ((char*)((ng3)));
    goto LAB108;

LAB109:    t36 = ((char*)((ng9)));
    goto LAB110;

LAB111:    xsi_vlog_unsigned_bit_combine(t11, 3, t29, 3, t36, 3);
    goto LAB115;

LAB113:    memcpy(t11, t29, 8);
    goto LAB115;

LAB116:    *((unsigned int *)t41) = 1;
    goto LAB119;

LAB121:    t19 = *((unsigned int *)t41);
    t20 = *((unsigned int *)t10);
    *((unsigned int *)t41) = (t19 | t20);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t10);
    *((unsigned int *)t9) = (t21 | t22);
    goto LAB120;

LAB122:    *((unsigned int *)t30) = 1;
    goto LAB125;

LAB124:    t36 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB125;

LAB126:    t42 = ((char*)((ng3)));
    goto LAB127;

LAB128:    t43 = ((char*)((ng9)));
    goto LAB129;

LAB130:    xsi_vlog_unsigned_bit_combine(t11, 3, t42, 3, t43, 3);
    goto LAB134;

LAB132:    memcpy(t11, t42, 8);
    goto LAB134;

LAB135:    *((unsigned int *)t30) = 1;
    goto LAB138;

LAB137:    t7 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB138;

LAB139:    t10 = ((char*)((ng3)));
    goto LAB140;

LAB141:    t29 = ((char*)((ng8)));
    goto LAB142;

LAB143:    xsi_vlog_unsigned_bit_combine(t11, 2, t10, 2, t29, 2);
    goto LAB147;

LAB145:    memcpy(t11, t10, 8);
    goto LAB147;

LAB150:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB151;

LAB152:    xsi_set_current_line(245, ng0);
    t10 = ((char*)((ng13)));
    t29 = (t0 + 3212);
    xsi_vlogvar_wait_assign_value(t29, t10, 0, 0, 4, 0LL);
    goto LAB154;

LAB156:    *((unsigned int *)t30) = 1;
    goto LAB159;

LAB158:    t9 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB159;

LAB160:    t29 = ((char*)((ng3)));
    goto LAB161;

LAB162:    t36 = ((char*)((ng8)));
    goto LAB163;

LAB164:    xsi_vlog_unsigned_bit_combine(t11, 3, t29, 3, t36, 3);
    goto LAB168;

LAB166:    memcpy(t11, t29, 8);
    goto LAB168;

LAB169:    *((unsigned int *)t41) = 1;
    goto LAB172;

LAB174:    t19 = *((unsigned int *)t41);
    t20 = *((unsigned int *)t10);
    *((unsigned int *)t41) = (t19 | t20);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t10);
    *((unsigned int *)t9) = (t21 | t22);
    goto LAB173;

LAB175:    *((unsigned int *)t30) = 1;
    goto LAB178;

LAB177:    t36 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB178;

LAB179:    t42 = ((char*)((ng3)));
    goto LAB180;

LAB181:    t43 = ((char*)((ng8)));
    goto LAB182;

LAB183:    xsi_vlog_unsigned_bit_combine(t11, 3, t42, 3, t43, 3);
    goto LAB187;

LAB185:    memcpy(t11, t42, 8);
    goto LAB187;

LAB188:    *((unsigned int *)t30) = 1;
    goto LAB191;

LAB190:    t7 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB191;

LAB192:    t10 = ((char*)((ng3)));
    goto LAB193;

LAB194:    t29 = ((char*)((ng8)));
    goto LAB195;

LAB196:    xsi_vlog_unsigned_bit_combine(t11, 2, t10, 2, t29, 2);
    goto LAB200;

LAB198:    memcpy(t11, t10, 8);
    goto LAB200;

LAB202:    *((unsigned int *)t30) = 1;
    goto LAB205;

LAB204:    t9 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB205;

LAB206:    t29 = ((char*)((ng3)));
    goto LAB207;

LAB208:    t36 = ((char*)((ng8)));
    goto LAB209;

LAB210:    xsi_vlog_unsigned_bit_combine(t11, 3, t29, 3, t36, 3);
    goto LAB214;

LAB212:    memcpy(t11, t29, 8);
    goto LAB214;

LAB215:    *((unsigned int *)t41) = 1;
    goto LAB218;

LAB220:    t19 = *((unsigned int *)t41);
    t20 = *((unsigned int *)t10);
    *((unsigned int *)t41) = (t19 | t20);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t10);
    *((unsigned int *)t9) = (t21 | t22);
    goto LAB219;

LAB221:    *((unsigned int *)t30) = 1;
    goto LAB224;

LAB223:    t36 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB224;

LAB225:    t42 = ((char*)((ng3)));
    goto LAB226;

LAB227:    t43 = ((char*)((ng8)));
    goto LAB228;

LAB229:    xsi_vlog_unsigned_bit_combine(t11, 3, t42, 3, t43, 3);
    goto LAB233;

LAB231:    memcpy(t11, t42, 8);
    goto LAB233;

LAB234:    *((unsigned int *)t30) = 1;
    goto LAB237;

LAB236:    t7 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB237;

LAB238:    t10 = ((char*)((ng3)));
    goto LAB239;

LAB240:    t29 = ((char*)((ng8)));
    goto LAB241;

LAB242:    xsi_vlog_unsigned_bit_combine(t11, 2, t10, 2, t29, 2);
    goto LAB246;

LAB244:    memcpy(t11, t10, 8);
    goto LAB246;

LAB249:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB250;

LAB251:    xsi_set_current_line(296, ng0);

LAB254:    xsi_set_current_line(299, ng0);
    t10 = (t0 + 2248U);
    t29 = *((char **)t10);
    t10 = (t29 + 4);
    t31 = *((unsigned int *)t10);
    t32 = (~(t31));
    t33 = *((unsigned int *)t29);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB255;

LAB256:    xsi_set_current_line(304, ng0);
    t2 = (t0 + 3488);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t30, 0, 8);
    t5 = (t4 + 4);
    t12 = *((unsigned int *)t5);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB258;

LAB259:    if (*((unsigned int *)t5) != 0)
        goto LAB260;

LAB261:    t9 = (t30 + 4);
    t17 = *((unsigned int *)t30);
    t18 = *((unsigned int *)t9);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB262;

LAB263:    t20 = *((unsigned int *)t30);
    t21 = (~(t20));
    t22 = *((unsigned int *)t9);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB264;

LAB265:    if (*((unsigned int *)t9) > 0)
        goto LAB266;

LAB267:    if (*((unsigned int *)t30) > 0)
        goto LAB268;

LAB269:    memcpy(t11, t29, 8);

LAB270:    t36 = (t0 + 3212);
    xsi_vlogvar_wait_assign_value(t36, t11, 0, 0, 4, 0LL);

LAB257:    goto LAB253;

LAB255:    xsi_set_current_line(300, ng0);
    t36 = ((char*)((ng3)));
    t37 = (t0 + 3212);
    xsi_vlogvar_wait_assign_value(t37, t36, 0, 0, 4, 0LL);
    goto LAB257;

LAB258:    *((unsigned int *)t30) = 1;
    goto LAB261;

LAB260:    t7 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB261;

LAB262:    t10 = ((char*)((ng9)));
    goto LAB263;

LAB264:    t29 = ((char*)((ng10)));
    goto LAB265;

LAB266:    xsi_vlog_unsigned_bit_combine(t11, 4, t10, 4, t29, 4);
    goto LAB270;

LAB268:    memcpy(t11, t10, 8);
    goto LAB270;

}


extern void work_m_00000000002556986569_2745848787_init()
{
	static char *pe[] = {(void *)Always_66_0,(void *)Always_80_1};
	xsi_register_didat("work_m_00000000002556986569_2745848787", "isim/test_traffic_light_controller_isim_beh.exe.sim/work/m_00000000002556986569_2745848787.didat");
	xsi_register_executes(pe);
}
