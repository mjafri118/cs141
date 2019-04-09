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
static const char *ng0 = "//vmware-host/Shared Folders/shared_with_vm/141git/cs141/pa4/lab4_start/lab4_start/mips_controller.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {15U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {42U, 0U};
static unsigned int ng8[] = {3U, 0U};
static unsigned int ng9[] = {6U, 0U};
static unsigned int ng10[] = {7U, 0U};



static void Always_53_0(char *t0)
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

LAB0:    t1 = (t0 + 4980U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 5320);
    *((int *)t2) = 1;
    t3 = (t0 + 5008);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(53, ng0);

LAB5:    xsi_set_current_line(54, ng0);
    t4 = (t0 + 1652U);
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
LAB8:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 4456);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 4364);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 3076);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2156);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3168);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3260);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2340);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 3352);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2432);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3444);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2524);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 4088);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 3996);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3536);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2616);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3628);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2708);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 3720);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2800);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3812);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2892);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3904);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2984);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    goto LAB2;

LAB6:    xsi_set_current_line(54, ng0);

LAB9:    xsi_set_current_line(55, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 4364);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    goto LAB8;

}

static void Always_75_1(char *t0)
{
    char t10[8];
    char t31[8];
    char t32[8];
    char t55[8];
    char t69[8];
    char t77[8];
    char t105[8];
    char t119[8];
    char t127[8];
    char t155[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
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
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t118;
    char *t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    char *t126;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    char *t131;
    char *t132;
    char *t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    char *t141;
    char *t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    char *t156;
    char *t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    char *t170;
    char *t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    char *t177;
    char *t178;

LAB0:    t1 = (t0 + 5124U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 5328);
    *((int *)t2) = 1;
    t3 = (t0 + 5152);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(75, ng0);

LAB5:    xsi_set_current_line(76, ng0);
    t4 = (t0 + 4364);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);

LAB6:
LAB8:    t2 = ((char*)((ng5)));
    t9 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t9 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng1)));
    t9 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t9 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng3)));
    t9 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t9 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng9)));
    t9 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t9 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng10)));
    t9 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t9 == 1)
        goto LAB17;

LAB18:
LAB7:    xsi_set_current_line(77, ng0);

LAB20:    xsi_set_current_line(80, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 3260);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 1, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3444);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4272);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3352);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3536);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3720);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3628);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3812);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3904);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4456);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB19:    goto LAB2;

LAB9:    xsi_set_current_line(99, ng0);

LAB21:    xsi_set_current_line(102, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3260);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3444);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4272);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3352);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3536);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3720);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3628);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3812);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3904);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4456);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB19;

LAB11:    xsi_set_current_line(119, ng0);

LAB22:    xsi_set_current_line(122, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3444);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4272);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3536);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3720);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3628);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3812);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3904);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4456);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB19;

LAB13:    xsi_set_current_line(138, ng0);

LAB23:    xsi_set_current_line(140, ng0);
    t3 = (t0 + 1836U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t10, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t3);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB27;

LAB24:    if (t20 != 0)
        goto LAB26;

LAB25:    *((unsigned int *)t10) = 1;

LAB27:    t23 = (t10 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t10);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB28;

LAB29:
LAB30:    goto LAB19;

LAB15:    xsi_set_current_line(169, ng0);

LAB83:    xsi_set_current_line(173, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 3168);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(174, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3076);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(178, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3536);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(179, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3720);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(180, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3628);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(181, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3812);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(182, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3904);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(184, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 4456);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB19;

LAB17:    xsi_set_current_line(188, ng0);

LAB84:    xsi_set_current_line(191, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3260);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(192, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3444);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(193, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(194, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4272);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(195, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3352);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(199, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3536);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(200, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3720);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(201, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3628);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(202, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3812);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(203, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3904);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(205, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4456);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB19;

LAB26:    t8 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB27;

LAB28:    xsi_set_current_line(140, ng0);

LAB31:    xsi_set_current_line(143, ng0);
    t29 = ((char*)((ng4)));
    t30 = (t0 + 3444);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 1, 0LL);
    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4272);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(147, ng0);
    t2 = (t0 + 1744U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t10, 0, 8);
    t4 = (t2 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (~(t11));
    t13 = *((unsigned int *)t2);
    t14 = (t13 & t12);
    t15 = (t14 & 63U);
    if (t15 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t4) != 0)
        goto LAB34;

LAB35:    t7 = (t10 + 4);
    t16 = *((unsigned int *)t10);
    t17 = (!(t16));
    t18 = *((unsigned int *)t7);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB36;

LAB37:    memcpy(t32, t10, 8);

LAB38:    memset(t55, 0, 8);
    t56 = (t32 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (~(t57));
    t59 = *((unsigned int *)t32);
    t60 = (t59 & t58);
    t61 = (t60 & 1U);
    if (t61 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t56) != 0)
        goto LAB48;

LAB49:    t63 = (t55 + 4);
    t64 = *((unsigned int *)t55);
    t65 = (!(t64));
    t66 = *((unsigned int *)t63);
    t67 = (t65 || t66);
    if (t67 > 0)
        goto LAB50;

LAB51:    memcpy(t77, t55, 8);

LAB52:    memset(t105, 0, 8);
    t106 = (t77 + 4);
    t107 = *((unsigned int *)t106);
    t108 = (~(t107));
    t109 = *((unsigned int *)t77);
    t110 = (t109 & t108);
    t111 = (t110 & 1U);
    if (t111 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t106) != 0)
        goto LAB62;

LAB63:    t113 = (t105 + 4);
    t114 = *((unsigned int *)t105);
    t115 = (!(t114));
    t116 = *((unsigned int *)t113);
    t117 = (t115 || t116);
    if (t117 > 0)
        goto LAB64;

LAB65:    memcpy(t127, t105, 8);

LAB66:    memset(t155, 0, 8);
    t156 = (t3 + 4);
    t157 = (t127 + 4);
    t158 = *((unsigned int *)t3);
    t159 = *((unsigned int *)t127);
    t160 = (t158 ^ t159);
    t161 = *((unsigned int *)t156);
    t162 = *((unsigned int *)t157);
    t163 = (t161 ^ t162);
    t164 = (t160 | t163);
    t165 = *((unsigned int *)t156);
    t166 = *((unsigned int *)t157);
    t167 = (t165 | t166);
    t168 = (~(t167));
    t169 = (t164 & t168);
    if (t169 != 0)
        goto LAB77;

LAB74:    if (t167 != 0)
        goto LAB76;

LAB75:    *((unsigned int *)t155) = 1;

LAB77:    t171 = (t155 + 4);
    t172 = *((unsigned int *)t171);
    t173 = (~(t172));
    t174 = *((unsigned int *)t155);
    t175 = (t174 & t173);
    t176 = (t175 != 0);
    if (t176 > 0)
        goto LAB78;

LAB79:    xsi_set_current_line(152, ng0);

LAB82:    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB80:    xsi_set_current_line(158, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3536);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(159, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3720);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3628);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3812);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(162, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3904);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4456);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB30;

LAB32:    *((unsigned int *)t10) = 1;
    goto LAB35;

LAB34:    t5 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB35;

LAB36:    t8 = ((char*)((ng1)));
    memset(t31, 0, 8);
    t23 = (t8 + 4);
    t20 = *((unsigned int *)t23);
    t21 = (~(t20));
    t22 = *((unsigned int *)t8);
    t24 = (t22 & t21);
    t25 = (t24 & 63U);
    if (t25 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t23) != 0)
        goto LAB41;

LAB42:    t26 = *((unsigned int *)t10);
    t27 = *((unsigned int *)t31);
    t28 = (t26 | t27);
    *((unsigned int *)t32) = t28;
    t30 = (t10 + 4);
    t33 = (t31 + 4);
    t34 = (t32 + 4);
    t35 = *((unsigned int *)t30);
    t36 = *((unsigned int *)t33);
    t37 = (t35 | t36);
    *((unsigned int *)t34) = t37;
    t38 = *((unsigned int *)t34);
    t39 = (t38 != 0);
    if (t39 == 1)
        goto LAB43;

LAB44:
LAB45:    goto LAB38;

LAB39:    *((unsigned int *)t31) = 1;
    goto LAB42;

LAB41:    t29 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB42;

LAB43:    t40 = *((unsigned int *)t32);
    t41 = *((unsigned int *)t34);
    *((unsigned int *)t32) = (t40 | t41);
    t42 = (t10 + 4);
    t43 = (t31 + 4);
    t44 = *((unsigned int *)t42);
    t45 = (~(t44));
    t46 = *((unsigned int *)t10);
    t9 = (t46 & t45);
    t47 = *((unsigned int *)t43);
    t48 = (~(t47));
    t49 = *((unsigned int *)t31);
    t50 = (t49 & t48);
    t51 = (~(t9));
    t52 = (~(t50));
    t53 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t53 & t51);
    t54 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t54 & t52);
    goto LAB45;

LAB46:    *((unsigned int *)t55) = 1;
    goto LAB49;

LAB48:    t62 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t62) = 1;
    goto LAB49;

LAB50:    t68 = ((char*)((ng6)));
    memset(t69, 0, 8);
    t70 = (t68 + 4);
    t71 = *((unsigned int *)t70);
    t72 = (~(t71));
    t73 = *((unsigned int *)t68);
    t74 = (t73 & t72);
    t75 = (t74 & 63U);
    if (t75 != 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t70) != 0)
        goto LAB55;

LAB56:    t78 = *((unsigned int *)t55);
    t79 = *((unsigned int *)t69);
    t80 = (t78 | t79);
    *((unsigned int *)t77) = t80;
    t81 = (t55 + 4);
    t82 = (t69 + 4);
    t83 = (t77 + 4);
    t84 = *((unsigned int *)t81);
    t85 = *((unsigned int *)t82);
    t86 = (t84 | t85);
    *((unsigned int *)t83) = t86;
    t87 = *((unsigned int *)t83);
    t88 = (t87 != 0);
    if (t88 == 1)
        goto LAB57;

LAB58:
LAB59:    goto LAB52;

LAB53:    *((unsigned int *)t69) = 1;
    goto LAB56;

LAB55:    t76 = (t69 + 4);
    *((unsigned int *)t69) = 1;
    *((unsigned int *)t76) = 1;
    goto LAB56;

LAB57:    t89 = *((unsigned int *)t77);
    t90 = *((unsigned int *)t83);
    *((unsigned int *)t77) = (t89 | t90);
    t91 = (t55 + 4);
    t92 = (t69 + 4);
    t93 = *((unsigned int *)t91);
    t94 = (~(t93));
    t95 = *((unsigned int *)t55);
    t96 = (t95 & t94);
    t97 = *((unsigned int *)t92);
    t98 = (~(t97));
    t99 = *((unsigned int *)t69);
    t100 = (t99 & t98);
    t101 = (~(t96));
    t102 = (~(t100));
    t103 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t103 & t101);
    t104 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t104 & t102);
    goto LAB59;

LAB60:    *((unsigned int *)t105) = 1;
    goto LAB63;

LAB62:    t112 = (t105 + 4);
    *((unsigned int *)t105) = 1;
    *((unsigned int *)t112) = 1;
    goto LAB63;

LAB64:    t118 = ((char*)((ng8)));
    memset(t119, 0, 8);
    t120 = (t118 + 4);
    t121 = *((unsigned int *)t120);
    t122 = (~(t121));
    t123 = *((unsigned int *)t118);
    t124 = (t123 & t122);
    t125 = (t124 & 63U);
    if (t125 != 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t120) != 0)
        goto LAB69;

LAB70:    t128 = *((unsigned int *)t105);
    t129 = *((unsigned int *)t119);
    t130 = (t128 | t129);
    *((unsigned int *)t127) = t130;
    t131 = (t105 + 4);
    t132 = (t119 + 4);
    t133 = (t127 + 4);
    t134 = *((unsigned int *)t131);
    t135 = *((unsigned int *)t132);
    t136 = (t134 | t135);
    *((unsigned int *)t133) = t136;
    t137 = *((unsigned int *)t133);
    t138 = (t137 != 0);
    if (t138 == 1)
        goto LAB71;

LAB72:
LAB73:    goto LAB66;

LAB67:    *((unsigned int *)t119) = 1;
    goto LAB70;

LAB69:    t126 = (t119 + 4);
    *((unsigned int *)t119) = 1;
    *((unsigned int *)t126) = 1;
    goto LAB70;

LAB71:    t139 = *((unsigned int *)t127);
    t140 = *((unsigned int *)t133);
    *((unsigned int *)t127) = (t139 | t140);
    t141 = (t105 + 4);
    t142 = (t119 + 4);
    t143 = *((unsigned int *)t141);
    t144 = (~(t143));
    t145 = *((unsigned int *)t105);
    t146 = (t145 & t144);
    t147 = *((unsigned int *)t142);
    t148 = (~(t147));
    t149 = *((unsigned int *)t119);
    t150 = (t149 & t148);
    t151 = (~(t146));
    t152 = (~(t150));
    t153 = *((unsigned int *)t133);
    *((unsigned int *)t133) = (t153 & t151);
    t154 = *((unsigned int *)t133);
    *((unsigned int *)t133) = (t154 & t152);
    goto LAB73;

LAB76:    t170 = (t155 + 4);
    *((unsigned int *)t155) = 1;
    *((unsigned int *)t170) = 1;
    goto LAB77;

LAB78:    xsi_set_current_line(147, ng0);

LAB81:    xsi_set_current_line(148, ng0);
    t177 = ((char*)((ng8)));
    t178 = (t0 + 4088);
    xsi_vlogvar_wait_assign_value(t178, t177, 0, 0, 2, 0LL);
    goto LAB80;

}


extern void work_m_00000000003243448786_1697483925_init()
{
	static char *pe[] = {(void *)Always_53_0,(void *)Always_75_1};
	xsi_register_didat("work_m_00000000003243448786_1697483925", "isim/mips_core_isim_beh.exe.sim/work/m_00000000003243448786_1697483925.didat");
	xsi_register_executes(pe);
}
