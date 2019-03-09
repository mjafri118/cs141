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
static const char *ng0 = "//vmware-host/Shared Folders/shared_folder/cs141/pa3/lab3_start/traffic_light_controller.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {0, 0};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {15U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {14U, 0U};
static unsigned int ng8[] = {4U, 0U};
static unsigned int ng9[] = {5U, 0U};
static unsigned int ng10[] = {2U, 0U};
static unsigned int ng11[] = {9U, 0U};
static unsigned int ng12[] = {7U, 0U};
static unsigned int ng13[] = {8U, 0U};
static unsigned int ng14[] = {10U, 0U};



static void Always_58_0(char *t0)
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

LAB0:    t1 = (t0 + 3704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 4044);
    *((int *)t2) = 1;
    t3 = (t0 + 3732);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(58, ng0);

LAB5:    xsi_set_current_line(59, ng0);
    t4 = (t0 + 1572U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(63, ng0);

LAB10:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2812);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2720);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2996);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2904);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 3180);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 3088);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(59, ng0);

LAB9:    xsi_set_current_line(60, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2720);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    goto LAB8;

}

static void Always_71_1(char *t0)
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

LAB0:    t1 = (t0 + 3848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 4052);
    *((int *)t2) = 1;
    t3 = (t0 + 3876);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(71, ng0);

LAB5:    xsi_set_current_line(72, ng0);
    t4 = (t0 + 2720);
    t5 = (t4 + 36U);
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

LAB12:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng12)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng13)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB21;

LAB22:
LAB24:
LAB23:    xsi_set_current_line(252, ng0);

LAB268:    xsi_set_current_line(253, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2260);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(254, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2352);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(255, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2444);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(256, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2628);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(257, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2536);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(258, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(260, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2812);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB25:    goto LAB2;

LAB7:    xsi_set_current_line(73, ng0);

LAB26:    xsi_set_current_line(76, ng0);
    t9 = ((char*)((ng2)));
    t10 = (t0 + 2260);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 3, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2352);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2444);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2628);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2536);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3180);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2996);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2812);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB25;

LAB9:    xsi_set_current_line(90, ng0);

LAB27:    xsi_set_current_line(93, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2260);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2352);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 3088);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2444);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2628);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2536);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 2904);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2996);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2812);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB25;

LAB11:    xsi_set_current_line(106, ng0);

LAB28:    xsi_set_current_line(109, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2260);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2352);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 3088);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2444);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2628);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2536);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 2904);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2996);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(118, ng0);
    t2 = (t0 + 1940U);
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
        goto LAB32;

LAB29:    if (t21 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t11) = 1;

LAB32:    t9 = (t11 + 4);
    t24 = *((unsigned int *)t9);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2812);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB35:    goto LAB25;

LAB13:    xsi_set_current_line(148, ng0);

LAB97:    xsi_set_current_line(151, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 2260);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    xsi_set_current_line(152, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2352);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2444);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2628);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2536);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(158, ng0);
    t2 = (t0 + 2904);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2996);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2996);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(163, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 2812);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB25;

LAB15:    xsi_set_current_line(167, ng0);

LAB98:    xsi_set_current_line(170, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2260);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    xsi_set_current_line(171, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2352);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(172, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2444);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(173, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2628);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(174, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2536);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(175, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(178, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2996);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(180, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 2812);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB25;

LAB17:    xsi_set_current_line(184, ng0);

LAB99:    xsi_set_current_line(188, ng0);
    t3 = (t0 + 2904);
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
        goto LAB100;

LAB101:    if (*((unsigned int *)t7) != 0)
        goto LAB102;

LAB103:    t10 = (t30 + 4);
    t17 = *((unsigned int *)t30);
    t18 = *((unsigned int *)t10);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB104;

LAB105:    t20 = *((unsigned int *)t30);
    t21 = (~(t20));
    t22 = *((unsigned int *)t10);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB106;

LAB107:    if (*((unsigned int *)t10) > 0)
        goto LAB108;

LAB109:    if (*((unsigned int *)t30) > 0)
        goto LAB110;

LAB111:    memcpy(t11, t36, 8);

LAB112:    t37 = (t0 + 2260);
    xsi_vlogvar_wait_assign_value(t37, t11, 0, 0, 3, 0LL);
    xsi_set_current_line(189, ng0);
    t2 = (t0 + 2904);
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
        goto LAB116;

LAB114:    if (*((unsigned int *)t5) == 0)
        goto LAB113;

LAB115:    t7 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t7) = 1;

LAB116:    t9 = (t41 + 4);
    t10 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = (~(t17));
    *((unsigned int *)t41) = t18;
    *((unsigned int *)t9) = 0;
    if (*((unsigned int *)t10) != 0)
        goto LAB118;

LAB117:    t23 = *((unsigned int *)t41);
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
        goto LAB119;

LAB120:    if (*((unsigned int *)t29) != 0)
        goto LAB121;

LAB122:    t37 = (t30 + 4);
    t32 = *((unsigned int *)t30);
    t33 = *((unsigned int *)t37);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB123;

LAB124:    t35 = *((unsigned int *)t30);
    t38 = (~(t35));
    t39 = *((unsigned int *)t37);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB125;

LAB126:    if (*((unsigned int *)t37) > 0)
        goto LAB127;

LAB128:    if (*((unsigned int *)t30) > 0)
        goto LAB129;

LAB130:    memcpy(t11, t43, 8);

LAB131:    t49 = (t0 + 2352);
    xsi_vlogvar_wait_assign_value(t49, t11, 0, 0, 3, 0LL);
    xsi_set_current_line(190, ng0);
    t2 = (t0 + 2904);
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
        goto LAB132;

LAB133:    if (*((unsigned int *)t5) != 0)
        goto LAB134;

LAB135:    t9 = (t30 + 4);
    t17 = *((unsigned int *)t30);
    t18 = *((unsigned int *)t9);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB136;

LAB137:    t20 = *((unsigned int *)t30);
    t21 = (~(t20));
    t22 = *((unsigned int *)t9);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB138;

LAB139:    if (*((unsigned int *)t9) > 0)
        goto LAB140;

LAB141:    if (*((unsigned int *)t30) > 0)
        goto LAB142;

LAB143:    memcpy(t11, t29, 8);

LAB144:    t36 = (t0 + 2444);
    xsi_vlogvar_wait_assign_value(t36, t11, 0, 0, 2, 0LL);
    xsi_set_current_line(191, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2628);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(192, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2536);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(193, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(195, ng0);
    t2 = (t0 + 2904);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2996);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(197, ng0);
    t2 = (t0 + 1940U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
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
        goto LAB148;

LAB145:    if (t21 != 0)
        goto LAB147;

LAB146:    *((unsigned int *)t11) = 1;

LAB148:    t9 = (t11 + 4);
    t24 = *((unsigned int *)t9);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB149;

LAB150:    xsi_set_current_line(200, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 2812);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB151:    goto LAB25;

LAB19:    xsi_set_current_line(204, ng0);

LAB152:    xsi_set_current_line(207, ng0);
    t3 = (t0 + 2904);
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
        goto LAB153;

LAB154:    if (*((unsigned int *)t7) != 0)
        goto LAB155;

LAB156:    t10 = (t30 + 4);
    t17 = *((unsigned int *)t30);
    t18 = *((unsigned int *)t10);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB157;

LAB158:    t20 = *((unsigned int *)t30);
    t21 = (~(t20));
    t22 = *((unsigned int *)t10);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB159;

LAB160:    if (*((unsigned int *)t10) > 0)
        goto LAB161;

LAB162:    if (*((unsigned int *)t30) > 0)
        goto LAB163;

LAB164:    memcpy(t11, t36, 8);

LAB165:    t37 = (t0 + 2260);
    xsi_vlogvar_wait_assign_value(t37, t11, 0, 0, 3, 0LL);
    xsi_set_current_line(208, ng0);
    t2 = (t0 + 2904);
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
        goto LAB169;

LAB167:    if (*((unsigned int *)t5) == 0)
        goto LAB166;

LAB168:    t7 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t7) = 1;

LAB169:    t9 = (t41 + 4);
    t10 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = (~(t17));
    *((unsigned int *)t41) = t18;
    *((unsigned int *)t9) = 0;
    if (*((unsigned int *)t10) != 0)
        goto LAB171;

LAB170:    t23 = *((unsigned int *)t41);
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
        goto LAB172;

LAB173:    if (*((unsigned int *)t29) != 0)
        goto LAB174;

LAB175:    t37 = (t30 + 4);
    t32 = *((unsigned int *)t30);
    t33 = *((unsigned int *)t37);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB176;

LAB177:    t35 = *((unsigned int *)t30);
    t38 = (~(t35));
    t39 = *((unsigned int *)t37);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB178;

LAB179:    if (*((unsigned int *)t37) > 0)
        goto LAB180;

LAB181:    if (*((unsigned int *)t30) > 0)
        goto LAB182;

LAB183:    memcpy(t11, t43, 8);

LAB184:    t49 = (t0 + 2352);
    xsi_vlogvar_wait_assign_value(t49, t11, 0, 0, 3, 0LL);
    xsi_set_current_line(209, ng0);
    t2 = (t0 + 2904);
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
        goto LAB185;

LAB186:    if (*((unsigned int *)t5) != 0)
        goto LAB187;

LAB188:    t9 = (t30 + 4);
    t17 = *((unsigned int *)t30);
    t18 = *((unsigned int *)t9);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB189;

LAB190:    t20 = *((unsigned int *)t30);
    t21 = (~(t20));
    t22 = *((unsigned int *)t9);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB191;

LAB192:    if (*((unsigned int *)t9) > 0)
        goto LAB193;

LAB194:    if (*((unsigned int *)t30) > 0)
        goto LAB195;

LAB196:    memcpy(t11, t29, 8);

LAB197:    t36 = (t0 + 2444);
    xsi_vlogvar_wait_assign_value(t36, t11, 0, 0, 2, 0LL);
    xsi_set_current_line(210, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2628);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(211, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2536);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(212, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(214, ng0);
    t2 = (t0 + 2904);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2996);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(216, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 2812);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB25;

LAB21:    xsi_set_current_line(220, ng0);

LAB198:    xsi_set_current_line(223, ng0);
    t3 = (t0 + 2904);
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
        goto LAB199;

LAB200:    if (*((unsigned int *)t7) != 0)
        goto LAB201;

LAB202:    t10 = (t30 + 4);
    t17 = *((unsigned int *)t30);
    t18 = *((unsigned int *)t10);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB203;

LAB204:    t20 = *((unsigned int *)t30);
    t21 = (~(t20));
    t22 = *((unsigned int *)t10);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB205;

LAB206:    if (*((unsigned int *)t10) > 0)
        goto LAB207;

LAB208:    if (*((unsigned int *)t30) > 0)
        goto LAB209;

LAB210:    memcpy(t11, t36, 8);

LAB211:    t37 = (t0 + 2260);
    xsi_vlogvar_wait_assign_value(t37, t11, 0, 0, 3, 0LL);
    xsi_set_current_line(224, ng0);
    t2 = (t0 + 2904);
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
        goto LAB215;

LAB213:    if (*((unsigned int *)t5) == 0)
        goto LAB212;

LAB214:    t7 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t7) = 1;

LAB215:    t9 = (t41 + 4);
    t10 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = (~(t17));
    *((unsigned int *)t41) = t18;
    *((unsigned int *)t9) = 0;
    if (*((unsigned int *)t10) != 0)
        goto LAB217;

LAB216:    t23 = *((unsigned int *)t41);
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
        goto LAB218;

LAB219:    if (*((unsigned int *)t29) != 0)
        goto LAB220;

LAB221:    t37 = (t30 + 4);
    t32 = *((unsigned int *)t30);
    t33 = *((unsigned int *)t37);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB222;

LAB223:    t35 = *((unsigned int *)t30);
    t38 = (~(t35));
    t39 = *((unsigned int *)t37);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB224;

LAB225:    if (*((unsigned int *)t37) > 0)
        goto LAB226;

LAB227:    if (*((unsigned int *)t30) > 0)
        goto LAB228;

LAB229:    memcpy(t11, t43, 8);

LAB230:    t49 = (t0 + 2352);
    xsi_vlogvar_wait_assign_value(t49, t11, 0, 0, 3, 0LL);
    xsi_set_current_line(225, ng0);
    t2 = (t0 + 2904);
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
        goto LAB231;

LAB232:    if (*((unsigned int *)t5) != 0)
        goto LAB233;

LAB234:    t9 = (t30 + 4);
    t17 = *((unsigned int *)t30);
    t18 = *((unsigned int *)t9);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB235;

LAB236:    t20 = *((unsigned int *)t30);
    t21 = (~(t20));
    t22 = *((unsigned int *)t9);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB237;

LAB238:    if (*((unsigned int *)t9) > 0)
        goto LAB239;

LAB240:    if (*((unsigned int *)t30) > 0)
        goto LAB241;

LAB242:    memcpy(t11, t29, 8);

LAB243:    t36 = (t0 + 2444);
    xsi_vlogvar_wait_assign_value(t36, t11, 0, 0, 2, 0LL);
    xsi_set_current_line(226, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2628);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(227, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2536);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(228, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(230, ng0);
    t2 = (t0 + 2904);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2996);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(233, ng0);
    t2 = (t0 + 1940U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
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
        goto LAB247;

LAB244:    if (t21 != 0)
        goto LAB246;

LAB245:    *((unsigned int *)t11) = 1;

LAB247:    t9 = (t11 + 4);
    t24 = *((unsigned int *)t9);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB248;

LAB249:    xsi_set_current_line(247, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 2812);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB250:    goto LAB25;

LAB31:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(118, ng0);

LAB36:    xsi_set_current_line(121, ng0);
    t10 = (t0 + 1664U);
    t29 = *((char **)t10);
    memset(t30, 0, 8);
    t10 = (t29 + 4);
    t31 = *((unsigned int *)t10);
    t32 = (~(t31));
    t33 = *((unsigned int *)t29);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t10) != 0)
        goto LAB39;

LAB40:    t37 = (t30 + 4);
    t38 = *((unsigned int *)t30);
    t39 = *((unsigned int *)t37);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB41;

LAB42:    memcpy(t68, t30, 8);

LAB43:    t99 = (t68 + 4);
    t100 = *((unsigned int *)t99);
    t101 = (~(t100));
    t102 = *((unsigned int *)t68);
    t103 = (t102 & t101);
    t104 = (t103 != 0);
    if (t104 > 0)
        goto LAB57;

LAB58:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 1664U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t3 + 4);
    t12 = *((unsigned int *)t2);
    t13 = (~(t12));
    t14 = *((unsigned int *)t3);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB63;

LAB61:    if (*((unsigned int *)t2) == 0)
        goto LAB60;

LAB62:    t4 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t4) = 1;

LAB63:    t5 = (t11 + 4);
    t7 = (t3 + 4);
    t17 = *((unsigned int *)t3);
    t18 = (~(t17));
    *((unsigned int *)t11) = t18;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB65;

LAB64:    t23 = *((unsigned int *)t11);
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
        goto LAB66;

LAB67:    if (*((unsigned int *)t9) != 0)
        goto LAB68;

LAB69:    t29 = (t30 + 4);
    t32 = *((unsigned int *)t30);
    t33 = *((unsigned int *)t29);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB70;

LAB71:    memcpy(t60, t30, 8);

LAB72:    t67 = (t60 + 4);
    t79 = *((unsigned int *)t67);
    t80 = (~(t79));
    t81 = *((unsigned int *)t60);
    t84 = (t81 & t80);
    t85 = (t84 != 0);
    if (t85 > 0)
        goto LAB80;

LAB81:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 2904);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
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
        goto LAB86;

LAB83:    if (t21 != 0)
        goto LAB85;

LAB84:    *((unsigned int *)t11) = 1;

LAB86:    t29 = (t11 + 4);
    t24 = *((unsigned int *)t29);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB87;

LAB88:    xsi_set_current_line(136, ng0);
    t2 = (t0 + 2904);
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
        goto LAB93;

LAB90:    if (t21 != 0)
        goto LAB92;

LAB91:    *((unsigned int *)t11) = 1;

LAB93:    t29 = (t11 + 4);
    t24 = *((unsigned int *)t29);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB94;

LAB95:
LAB96:
LAB89:
LAB82:
LAB59:    goto LAB35;

LAB37:    *((unsigned int *)t30) = 1;
    goto LAB40;

LAB39:    t36 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB40;

LAB41:    t42 = (t0 + 1756U);
    t43 = *((char **)t42);
    memset(t41, 0, 8);
    t42 = (t43 + 4);
    t44 = *((unsigned int *)t42);
    t45 = (~(t44));
    t46 = *((unsigned int *)t43);
    t47 = (t46 & t45);
    t48 = (t47 & 1U);
    if (t48 != 0)
        goto LAB47;

LAB45:    if (*((unsigned int *)t42) == 0)
        goto LAB44;

LAB46:    t49 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t49) = 1;

LAB47:    t50 = (t41 + 4);
    t51 = (t43 + 4);
    t52 = *((unsigned int *)t43);
    t53 = (~(t52));
    *((unsigned int *)t41) = t53;
    *((unsigned int *)t50) = 0;
    if (*((unsigned int *)t51) != 0)
        goto LAB49;

LAB48:    t58 = *((unsigned int *)t41);
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
        goto LAB50;

LAB51:    if (*((unsigned int *)t61) != 0)
        goto LAB52;

LAB53:    t69 = *((unsigned int *)t30);
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
        goto LAB54;

LAB55:
LAB56:    goto LAB43;

LAB44:    *((unsigned int *)t41) = 1;
    goto LAB47;

LAB49:    t54 = *((unsigned int *)t41);
    t55 = *((unsigned int *)t51);
    *((unsigned int *)t41) = (t54 | t55);
    t56 = *((unsigned int *)t50);
    t57 = *((unsigned int *)t51);
    *((unsigned int *)t50) = (t56 | t57);
    goto LAB48;

LAB50:    *((unsigned int *)t60) = 1;
    goto LAB53;

LAB52:    t67 = (t60 + 4);
    *((unsigned int *)t60) = 1;
    *((unsigned int *)t67) = 1;
    goto LAB53;

LAB54:    t80 = *((unsigned int *)t68);
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
    goto LAB56;

LAB57:    xsi_set_current_line(122, ng0);
    t105 = ((char*)((ng8)));
    t106 = (t0 + 2812);
    xsi_vlogvar_wait_assign_value(t106, t105, 0, 0, 4, 0LL);
    goto LAB59;

LAB60:    *((unsigned int *)t11) = 1;
    goto LAB63;

LAB65:    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t11) = (t19 | t20);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    *((unsigned int *)t5) = (t21 | t22);
    goto LAB64;

LAB66:    *((unsigned int *)t30) = 1;
    goto LAB69;

LAB68:    t10 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB69;

LAB70:    t36 = (t0 + 1756U);
    t37 = *((char **)t36);
    memset(t41, 0, 8);
    t36 = (t37 + 4);
    t35 = *((unsigned int *)t36);
    t38 = (~(t35));
    t39 = *((unsigned int *)t37);
    t40 = (t39 & t38);
    t44 = (t40 & 1U);
    if (t44 != 0)
        goto LAB73;

LAB74:    if (*((unsigned int *)t36) != 0)
        goto LAB75;

LAB76:    t45 = *((unsigned int *)t30);
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
        goto LAB77;

LAB78:
LAB79:    goto LAB72;

LAB73:    *((unsigned int *)t41) = 1;
    goto LAB76;

LAB75:    t42 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB76;

LAB77:    t56 = *((unsigned int *)t60);
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
    goto LAB79;

LAB80:    xsi_set_current_line(126, ng0);
    t72 = ((char*)((ng9)));
    t73 = (t0 + 2812);
    xsi_vlogvar_wait_assign_value(t73, t72, 0, 0, 4, 0LL);
    goto LAB82;

LAB85:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB86;

LAB87:    xsi_set_current_line(133, ng0);
    t36 = ((char*)((ng9)));
    t37 = (t0 + 2812);
    xsi_vlogvar_wait_assign_value(t37, t36, 0, 0, 4, 0LL);
    goto LAB89;

LAB92:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB93;

LAB94:    xsi_set_current_line(137, ng0);
    t36 = ((char*)((ng8)));
    t37 = (t0 + 2812);
    xsi_vlogvar_wait_assign_value(t37, t36, 0, 0, 4, 0LL);
    goto LAB96;

LAB100:    *((unsigned int *)t30) = 1;
    goto LAB103;

LAB102:    t9 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB103;

LAB104:    t29 = ((char*)((ng2)));
    goto LAB105;

LAB106:    t36 = ((char*)((ng8)));
    goto LAB107;

LAB108:    xsi_vlog_unsigned_bit_combine(t11, 3, t29, 3, t36, 3);
    goto LAB112;

LAB110:    memcpy(t11, t29, 8);
    goto LAB112;

LAB113:    *((unsigned int *)t41) = 1;
    goto LAB116;

LAB118:    t19 = *((unsigned int *)t41);
    t20 = *((unsigned int *)t10);
    *((unsigned int *)t41) = (t19 | t20);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t10);
    *((unsigned int *)t9) = (t21 | t22);
    goto LAB117;

LAB119:    *((unsigned int *)t30) = 1;
    goto LAB122;

LAB121:    t36 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB122;

LAB123:    t42 = ((char*)((ng2)));
    goto LAB124;

LAB125:    t43 = ((char*)((ng8)));
    goto LAB126;

LAB127:    xsi_vlog_unsigned_bit_combine(t11, 3, t42, 3, t43, 3);
    goto LAB131;

LAB129:    memcpy(t11, t42, 8);
    goto LAB131;

LAB132:    *((unsigned int *)t30) = 1;
    goto LAB135;

LAB134:    t7 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB135;

LAB136:    t10 = ((char*)((ng2)));
    goto LAB137;

LAB138:    t29 = ((char*)((ng10)));
    goto LAB139;

LAB140:    xsi_vlog_unsigned_bit_combine(t11, 2, t10, 2, t29, 2);
    goto LAB144;

LAB142:    memcpy(t11, t10, 8);
    goto LAB144;

LAB147:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB148;

LAB149:    xsi_set_current_line(198, ng0);
    t10 = ((char*)((ng13)));
    t29 = (t0 + 2812);
    xsi_vlogvar_wait_assign_value(t29, t10, 0, 0, 4, 0LL);
    goto LAB151;

LAB153:    *((unsigned int *)t30) = 1;
    goto LAB156;

LAB155:    t9 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB156;

LAB157:    t29 = ((char*)((ng2)));
    goto LAB158;

LAB159:    t36 = ((char*)((ng10)));
    goto LAB160;

LAB161:    xsi_vlog_unsigned_bit_combine(t11, 3, t29, 3, t36, 3);
    goto LAB165;

LAB163:    memcpy(t11, t29, 8);
    goto LAB165;

LAB166:    *((unsigned int *)t41) = 1;
    goto LAB169;

LAB171:    t19 = *((unsigned int *)t41);
    t20 = *((unsigned int *)t10);
    *((unsigned int *)t41) = (t19 | t20);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t10);
    *((unsigned int *)t9) = (t21 | t22);
    goto LAB170;

LAB172:    *((unsigned int *)t30) = 1;
    goto LAB175;

LAB174:    t36 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB175;

LAB176:    t42 = ((char*)((ng2)));
    goto LAB177;

LAB178:    t43 = ((char*)((ng10)));
    goto LAB179;

LAB180:    xsi_vlog_unsigned_bit_combine(t11, 3, t42, 3, t43, 3);
    goto LAB184;

LAB182:    memcpy(t11, t42, 8);
    goto LAB184;

LAB185:    *((unsigned int *)t30) = 1;
    goto LAB188;

LAB187:    t7 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB188;

LAB189:    t10 = ((char*)((ng2)));
    goto LAB190;

LAB191:    t29 = ((char*)((ng10)));
    goto LAB192;

LAB193:    xsi_vlog_unsigned_bit_combine(t11, 2, t10, 2, t29, 2);
    goto LAB197;

LAB195:    memcpy(t11, t10, 8);
    goto LAB197;

LAB199:    *((unsigned int *)t30) = 1;
    goto LAB202;

LAB201:    t9 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB202;

LAB203:    t29 = ((char*)((ng2)));
    goto LAB204;

LAB205:    t36 = ((char*)((ng10)));
    goto LAB206;

LAB207:    xsi_vlog_unsigned_bit_combine(t11, 3, t29, 3, t36, 3);
    goto LAB211;

LAB209:    memcpy(t11, t29, 8);
    goto LAB211;

LAB212:    *((unsigned int *)t41) = 1;
    goto LAB215;

LAB217:    t19 = *((unsigned int *)t41);
    t20 = *((unsigned int *)t10);
    *((unsigned int *)t41) = (t19 | t20);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t10);
    *((unsigned int *)t9) = (t21 | t22);
    goto LAB216;

LAB218:    *((unsigned int *)t30) = 1;
    goto LAB221;

LAB220:    t36 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB221;

LAB222:    t42 = ((char*)((ng2)));
    goto LAB223;

LAB224:    t43 = ((char*)((ng10)));
    goto LAB225;

LAB226:    xsi_vlog_unsigned_bit_combine(t11, 3, t42, 3, t43, 3);
    goto LAB230;

LAB228:    memcpy(t11, t42, 8);
    goto LAB230;

LAB231:    *((unsigned int *)t30) = 1;
    goto LAB234;

LAB233:    t7 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB234;

LAB235:    t10 = ((char*)((ng2)));
    goto LAB236;

LAB237:    t29 = ((char*)((ng10)));
    goto LAB238;

LAB239:    xsi_vlog_unsigned_bit_combine(t11, 2, t10, 2, t29, 2);
    goto LAB243;

LAB241:    memcpy(t11, t10, 8);
    goto LAB243;

LAB246:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB247;

LAB248:    xsi_set_current_line(233, ng0);

LAB251:    xsi_set_current_line(236, ng0);
    t10 = (t0 + 1848U);
    t29 = *((char **)t10);
    t10 = (t29 + 4);
    t31 = *((unsigned int *)t10);
    t32 = (~(t31));
    t33 = *((unsigned int *)t29);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB252;

LAB253:    xsi_set_current_line(241, ng0);
    t2 = (t0 + 2904);
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
        goto LAB255;

LAB256:    if (*((unsigned int *)t5) != 0)
        goto LAB257;

LAB258:    t9 = (t30 + 4);
    t17 = *((unsigned int *)t30);
    t18 = *((unsigned int *)t9);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB259;

LAB260:    t20 = *((unsigned int *)t30);
    t21 = (~(t20));
    t22 = *((unsigned int *)t9);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB261;

LAB262:    if (*((unsigned int *)t9) > 0)
        goto LAB263;

LAB264:    if (*((unsigned int *)t30) > 0)
        goto LAB265;

LAB266:    memcpy(t11, t29, 8);

LAB267:    t36 = (t0 + 2812);
    xsi_vlogvar_wait_assign_value(t36, t11, 0, 0, 4, 0LL);

LAB254:    goto LAB250;

LAB252:    xsi_set_current_line(237, ng0);
    t36 = ((char*)((ng2)));
    t37 = (t0 + 2812);
    xsi_vlogvar_wait_assign_value(t37, t36, 0, 0, 4, 0LL);
    goto LAB254;

LAB255:    *((unsigned int *)t30) = 1;
    goto LAB258;

LAB257:    t7 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB258;

LAB259:    t10 = ((char*)((ng8)));
    goto LAB260;

LAB261:    t29 = ((char*)((ng9)));
    goto LAB262;

LAB263:    xsi_vlog_unsigned_bit_combine(t11, 4, t10, 4, t29, 4);
    goto LAB267;

LAB265:    memcpy(t11, t10, 8);
    goto LAB267;

}


extern void work_m_00000000001578981418_2745848787_init()
{
	static char *pe[] = {(void *)Always_58_0,(void *)Always_71_1};
	xsi_register_didat("work_m_00000000001578981418_2745848787", "isim/test_traffic_light_controller_isim_beh.exe.sim/work/m_00000000001578981418_2745848787.didat");
	xsi_register_executes(pe);
}
