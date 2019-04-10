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
static const char *ng0 = "//vmware-host/Shared Folders/shared_folder/cs141/pa4/lab4_start/lab4_start/mips_controller.v";
static unsigned int ng1[] = {7U, 0U};
static unsigned int ng2[] = {15U, 0U};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {0U, 0U};
static int ng6[] = {1, 0};
static const char *ng7 = "s1";
static unsigned int ng8[] = {2U, 0U};
static const char *ng9 = "entering shift R, %b";
static unsigned int ng10[] = {3U, 0U};
static unsigned int ng11[] = {6U, 0U};
static const char *ng12 = "next state s6";



static void Always_54_0(char *t0)
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

LAB0:    t1 = (t0 + 5060U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 5400);
    *((int *)t2) = 1;
    t3 = (t0 + 5088);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(54, ng0);

LAB5:    xsi_set_current_line(55, ng0);
    t4 = (t0 + 1732U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(58, ng0);

LAB10:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 4536);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 4444);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);

LAB8:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3156);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2236);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 3248);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2328);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3340);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2420);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 3432);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2512);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3524);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2604);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 4076);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 3616);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2696);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3708);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2788);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3800);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2880);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 3892);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2972);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 3984);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 3064);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 4352);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 4260);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);
    goto LAB2;

LAB6:    xsi_set_current_line(55, ng0);

LAB9:    xsi_set_current_line(56, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 4444);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    goto LAB8;

}

static void Always_78_1(char *t0)
{
    char t11[8];
    char t24[8];
    char t37[8];
    char t53[8];
    char t61[8];
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
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    char *t95;

LAB0:    t1 = (t0 + 5204U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 5408);
    *((int *)t2) = 1;
    t3 = (t0 + 5232);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(78, ng0);

LAB5:    xsi_set_current_line(79, ng0);
    t4 = (t0 + 4444);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t7, 4);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    xsi_set_current_line(220, ng0);

LAB52:    xsi_set_current_line(223, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3340);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(224, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3524);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(225, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(226, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4352);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(227, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(231, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3616);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(232, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3800);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(233, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3708);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(234, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3892);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(235, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3984);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(238, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4536);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(82, ng0);

LAB20:    xsi_set_current_line(85, ng0);
    t9 = ((char*)((ng3)));
    t10 = (t0 + 3340);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 1, 0LL);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3524);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4352);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3616);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3800);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3708);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3892);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3984);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4536);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB19;

LAB9:    xsi_set_current_line(124, ng0);

LAB21:    xsi_set_current_line(128, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 3524);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4352);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3616);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3800);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(136, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3708);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3892);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3984);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4536);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB19;

LAB11:    xsi_set_current_line(145, ng0);

LAB22:    xsi_set_current_line(146, ng0);
    xsi_vlogfile_write(1, 0, 0, ng7, 1, t0);
    xsi_set_current_line(151, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3524);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(152, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4352);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(155, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng8)));
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
        goto LAB26;

LAB23:    if (t21 != 0)
        goto LAB25;

LAB24:    *((unsigned int *)t11) = 1;

LAB26:    memset(t24, 0, 8);
    t9 = (t11 + 4);
    t25 = *((unsigned int *)t9);
    t26 = (~(t25));
    t27 = *((unsigned int *)t11);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t9) != 0)
        goto LAB29;

LAB30:    t30 = (t24 + 4);
    t31 = *((unsigned int *)t24);
    t32 = (!(t31));
    t33 = *((unsigned int *)t30);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB31;

LAB32:    memcpy(t61, t24, 8);

LAB33:    t88 = (t61 + 4);
    t89 = *((unsigned int *)t88);
    t90 = (~(t89));
    t91 = *((unsigned int *)t61);
    t92 = (t91 & t90);
    t93 = (t92 != 0);
    if (t93 > 0)
        goto LAB45;

LAB46:    xsi_set_current_line(161, ng0);

LAB49:    xsi_set_current_line(163, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB47:    xsi_set_current_line(168, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3616);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(169, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3800);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(170, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3708);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(171, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3892);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(172, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3984);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(174, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 4536);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(175, ng0);
    xsi_vlogfile_write(1, 0, 0, ng12, 1, t0);
    goto LAB19;

LAB13:    xsi_set_current_line(180, ng0);

LAB50:    xsi_set_current_line(184, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 3248);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(185, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3156);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(189, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3616);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(190, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3800);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(191, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3708);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(192, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3892);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(193, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3984);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(195, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4536);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB19;

LAB15:    xsi_set_current_line(199, ng0);

LAB51:    xsi_set_current_line(202, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 3340);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(203, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3524);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(204, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(205, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4352);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(206, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(210, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3616);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(211, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3800);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(212, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3708);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(213, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3892);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(214, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3984);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(216, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4536);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB19;

LAB25:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB26;

LAB27:    *((unsigned int *)t24) = 1;
    goto LAB30;

LAB29:    t10 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB30;

LAB31:    t35 = (t0 + 1824U);
    t36 = *((char **)t35);
    t35 = ((char*)((ng5)));
    memset(t37, 0, 8);
    t38 = (t36 + 4);
    t39 = (t35 + 4);
    t40 = *((unsigned int *)t36);
    t41 = *((unsigned int *)t35);
    t42 = (t40 ^ t41);
    t43 = *((unsigned int *)t38);
    t44 = *((unsigned int *)t39);
    t45 = (t43 ^ t44);
    t46 = (t42 | t45);
    t47 = *((unsigned int *)t38);
    t48 = *((unsigned int *)t39);
    t49 = (t47 | t48);
    t50 = (~(t49));
    t51 = (t46 & t50);
    if (t51 != 0)
        goto LAB37;

LAB34:    if (t49 != 0)
        goto LAB36;

LAB35:    *((unsigned int *)t37) = 1;

LAB37:    memset(t53, 0, 8);
    t54 = (t37 + 4);
    t55 = *((unsigned int *)t54);
    t56 = (~(t55));
    t57 = *((unsigned int *)t37);
    t58 = (t57 & t56);
    t59 = (t58 & 1U);
    if (t59 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t54) != 0)
        goto LAB40;

LAB41:    t62 = *((unsigned int *)t24);
    t63 = *((unsigned int *)t53);
    t64 = (t62 | t63);
    *((unsigned int *)t61) = t64;
    t65 = (t24 + 4);
    t66 = (t53 + 4);
    t67 = (t61 + 4);
    t68 = *((unsigned int *)t65);
    t69 = *((unsigned int *)t66);
    t70 = (t68 | t69);
    *((unsigned int *)t67) = t70;
    t71 = *((unsigned int *)t67);
    t72 = (t71 != 0);
    if (t72 == 1)
        goto LAB42;

LAB43:
LAB44:    goto LAB33;

LAB36:    t52 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB37;

LAB38:    *((unsigned int *)t53) = 1;
    goto LAB41;

LAB40:    t60 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB41;

LAB42:    t73 = *((unsigned int *)t61);
    t74 = *((unsigned int *)t67);
    *((unsigned int *)t61) = (t73 | t74);
    t75 = (t24 + 4);
    t76 = (t53 + 4);
    t77 = *((unsigned int *)t75);
    t78 = (~(t77));
    t79 = *((unsigned int *)t24);
    t8 = (t79 & t78);
    t80 = *((unsigned int *)t76);
    t81 = (~(t80));
    t82 = *((unsigned int *)t53);
    t83 = (t82 & t81);
    t84 = (~(t8));
    t85 = (~(t83));
    t86 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t86 & t84);
    t87 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t87 & t85);
    goto LAB44;

LAB45:    xsi_set_current_line(155, ng0);

LAB48:    xsi_set_current_line(156, ng0);
    t94 = (t0 + 1824U);
    t95 = *((char **)t94);
    xsi_vlogfile_write(1, 0, 0, ng9, 2, t0, (char)118, t95, 6);
    xsi_set_current_line(157, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB47;

}


extern void work_m_00000000002623711659_1697483925_init()
{
	static char *pe[] = {(void *)Always_54_0,(void *)Always_78_1};
	xsi_register_didat("work_m_00000000002623711659_1697483925", "isim/test_mips_multicycle_isim_beh.exe.sim/work/m_00000000002623711659_1697483925.didat");
	xsi_register_executes(pe);
}
