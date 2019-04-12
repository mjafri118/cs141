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
static unsigned int ng9[] = {3U, 0U};
static const char *ng10 = "entering shift R, %b";
static unsigned int ng11[] = {6U, 0U};
static const char *ng12 = "next state s6";
static unsigned int ng13[] = {12U, 0U};
static unsigned int ng14[] = {13U, 0U};
static unsigned int ng15[] = {14U, 0U};
static unsigned int ng16[] = {10U, 0U};
static unsigned int ng17[] = {8U, 0U};
static unsigned int ng18[] = {36U, 0U};
static unsigned int ng19[] = {37U, 0U};
static unsigned int ng20[] = {38U, 0U};
static unsigned int ng21[] = {42U, 0U};
static unsigned int ng22[] = {32U, 0U};
static unsigned int ng23[] = {9U, 0U};



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

LAB0:    t1 = (t0 + 5428U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 5768);
    *((int *)t2) = 1;
    t3 = (t0 + 5456);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(66, ng0);

LAB5:    xsi_set_current_line(67, ng0);
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

LAB7:    xsi_set_current_line(70, ng0);

LAB10:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 4904);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 4812);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);

LAB8:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 3156);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2328);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 3248);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2420);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 3340);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2512);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 3432);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2604);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 3984);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 4260);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 4076);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 3524);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2696);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 3616);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2788);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 3708);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2880);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 3800);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2972);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3892);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 3064);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 4444);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 4352);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 4720);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 4628);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    goto LAB2;

LAB6:    xsi_set_current_line(67, ng0);

LAB9:    xsi_set_current_line(68, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 4812);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    goto LAB8;

}

static void Always_92_1(char *t0)
{
    char t11[8];
    char t30[8];
    char t37[8];
    char t53[8];
    char t61[8];
    char t88[8];
    char t103[8];
    char t119[8];
    char t127[8];
    char t163[8];
    char t170[8];
    char t186[8];
    char t194[8];
    char t222[8];
    char t237[8];
    char t253[8];
    char t261[8];
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
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    char *t102;
    char *t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
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
    char *t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    char *t161;
    char *t162;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    char *t168;
    char *t169;
    char *t171;
    char *t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    char *t185;
    char *t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    char *t193;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    char *t198;
    char *t199;
    char *t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    char *t208;
    char *t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    int t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    int t217;
    unsigned int t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    char *t223;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    char *t229;
    char *t230;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    char *t235;
    char *t236;
    char *t238;
    char *t239;
    unsigned int t240;
    unsigned int t241;
    unsigned int t242;
    unsigned int t243;
    unsigned int t244;
    unsigned int t245;
    unsigned int t246;
    unsigned int t247;
    unsigned int t248;
    unsigned int t249;
    unsigned int t250;
    unsigned int t251;
    char *t252;
    char *t254;
    unsigned int t255;
    unsigned int t256;
    unsigned int t257;
    unsigned int t258;
    unsigned int t259;
    char *t260;
    unsigned int t262;
    unsigned int t263;
    unsigned int t264;
    char *t265;
    char *t266;
    char *t267;
    unsigned int t268;
    unsigned int t269;
    unsigned int t270;
    unsigned int t271;
    unsigned int t272;
    unsigned int t273;
    unsigned int t274;
    char *t275;
    char *t276;
    unsigned int t277;
    unsigned int t278;
    unsigned int t279;
    int t280;
    unsigned int t281;
    unsigned int t282;
    unsigned int t283;
    int t284;
    unsigned int t285;
    unsigned int t286;
    unsigned int t287;
    unsigned int t288;
    char *t289;
    unsigned int t290;
    unsigned int t291;
    unsigned int t292;
    unsigned int t293;
    unsigned int t294;
    char *t295;
    char *t296;

LAB0:    t1 = (t0 + 5572U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 5776);
    *((int *)t2) = 1;
    t3 = (t0 + 5600);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(92, ng0);

LAB5:    xsi_set_current_line(93, ng0);
    t4 = (t0 + 4812);
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

LAB16:    t2 = ((char*)((ng23)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng16)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB19;

LAB20:
LAB22:
LAB21:    xsi_set_current_line(298, ng0);

LAB176:    xsi_set_current_line(301, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3340);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(302, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(303, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 4260);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(304, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 4444);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(305, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(309, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 3524);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(310, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3708);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(311, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3616);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(312, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3800);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(313, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3892);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(315, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 4904);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);

LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(96, ng0);

LAB24:    xsi_set_current_line(99, ng0);
    t9 = ((char*)((ng3)));
    t10 = (t0 + 3340);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 1, 0LL);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4260);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4444);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4720);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3524);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3708);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3616);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3800);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3892);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4904);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB23;

LAB9:    xsi_set_current_line(118, ng0);

LAB25:    xsi_set_current_line(122, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4260);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4444);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3524);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3708);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3616);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3800);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3892);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4904);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB23;

LAB11:    xsi_set_current_line(139, ng0);

LAB26:    xsi_set_current_line(140, ng0);
    xsi_vlogfile_write(1, 0, 0, ng7, 1, t0);
    xsi_set_current_line(142, ng0);
    t2 = (t0 + 1916U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
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
        goto LAB30;

LAB27:    if (t21 != 0)
        goto LAB29;

LAB28:    *((unsigned int *)t11) = 1;

LAB30:    t9 = (t11 + 4);
    t24 = *((unsigned int *)t9);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(176, ng0);
    t2 = (t0 + 1916U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng13)));
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
        goto LAB83;

LAB80:    if (t21 != 0)
        goto LAB82;

LAB81:    *((unsigned int *)t11) = 1;

LAB83:    memset(t30, 0, 8);
    t9 = (t11 + 4);
    t24 = *((unsigned int *)t9);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB84;

LAB85:    if (*((unsigned int *)t9) != 0)
        goto LAB86;

LAB87:    t29 = (t30 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (!(t31));
    t33 = *((unsigned int *)t29);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB88;

LAB89:    memcpy(t61, t30, 8);

LAB90:    memset(t88, 0, 8);
    t89 = (t61 + 4);
    t90 = *((unsigned int *)t89);
    t91 = (~(t90));
    t92 = *((unsigned int *)t61);
    t93 = (t92 & t91);
    t94 = (t93 & 1U);
    if (t94 != 0)
        goto LAB102;

LAB103:    if (*((unsigned int *)t89) != 0)
        goto LAB104;

LAB105:    t96 = (t88 + 4);
    t97 = *((unsigned int *)t88);
    t98 = (!(t97));
    t99 = *((unsigned int *)t96);
    t100 = (t98 || t99);
    if (t100 > 0)
        goto LAB106;

LAB107:    memcpy(t127, t88, 8);

LAB108:    memset(t163, 0, 8);
    t155 = (t127 + 4);
    t156 = *((unsigned int *)t155);
    t157 = (~(t156));
    t158 = *((unsigned int *)t127);
    t159 = (t158 & t157);
    t160 = (t159 & 1U);
    if (t160 != 0)
        goto LAB120;

LAB121:    if (*((unsigned int *)t155) != 0)
        goto LAB122;

LAB123:    t162 = (t163 + 4);
    t164 = *((unsigned int *)t163);
    t165 = (!(t164));
    t166 = *((unsigned int *)t162);
    t167 = (t165 || t166);
    if (t167 > 0)
        goto LAB124;

LAB125:    memcpy(t194, t163, 8);

LAB126:    memset(t222, 0, 8);
    t223 = (t194 + 4);
    t224 = *((unsigned int *)t223);
    t225 = (~(t224));
    t226 = *((unsigned int *)t194);
    t227 = (t226 & t225);
    t228 = (t227 & 1U);
    if (t228 != 0)
        goto LAB138;

LAB139:    if (*((unsigned int *)t223) != 0)
        goto LAB140;

LAB141:    t230 = (t222 + 4);
    t231 = *((unsigned int *)t222);
    t232 = (!(t231));
    t233 = *((unsigned int *)t230);
    t234 = (t232 || t233);
    if (t234 > 0)
        goto LAB142;

LAB143:    memcpy(t261, t222, 8);

LAB144:    t289 = (t261 + 4);
    t290 = *((unsigned int *)t289);
    t291 = (~(t290));
    t292 = *((unsigned int *)t261);
    t293 = (t292 & t291);
    t294 = (t293 != 0);
    if (t294 > 0)
        goto LAB156;

LAB157:
LAB158:
LAB33:    goto LAB23;

LAB13:    xsi_set_current_line(218, ng0);

LAB172:    xsi_set_current_line(221, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t0 + 3248);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(222, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3156);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(223, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 4720);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(227, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3524);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(228, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3708);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(229, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3616);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(230, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3800);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(231, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 3892);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(233, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 4904);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);
    goto LAB23;

LAB15:    xsi_set_current_line(237, ng0);

LAB173:    xsi_set_current_line(240, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 3340);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(241, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(242, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 4260);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(243, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 4444);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(244, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(245, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 4720);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(249, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 3524);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(250, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3708);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(251, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3616);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(252, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3800);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(253, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3892);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(255, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 4904);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);
    goto LAB23;

LAB17:    xsi_set_current_line(259, ng0);

LAB174:    xsi_set_current_line(262, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 3248);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(263, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3156);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(264, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 4720);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(268, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3524);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(269, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3708);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(270, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3616);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(271, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3800);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(272, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 3892);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(274, ng0);
    t2 = ((char*)((ng16)));
    t4 = (t0 + 4904);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);
    goto LAB23;

LAB19:    xsi_set_current_line(277, ng0);

LAB175:    xsi_set_current_line(280, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 3340);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(281, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(282, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 4260);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(283, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 4444);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(284, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(285, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 4720);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(289, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 3524);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(290, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3708);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(291, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3616);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(292, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3800);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(293, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3892);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(295, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 4904);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);
    goto LAB23;

LAB29:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB30;

LAB31:    xsi_set_current_line(142, ng0);

LAB34:    xsi_set_current_line(146, ng0);
    t10 = ((char*)((ng8)));
    t29 = (t0 + 4444);
    xsi_vlogvar_wait_assign_value(t29, t10, 0, 0, 2, 0LL);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4720);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(150, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
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
        goto LAB38;

LAB35:    if (t21 != 0)
        goto LAB37;

LAB36:    *((unsigned int *)t11) = 1;

LAB38:    memset(t30, 0, 8);
    t9 = (t11 + 4);
    t24 = *((unsigned int *)t9);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t9) != 0)
        goto LAB41;

LAB42:    t29 = (t30 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (!(t31));
    t33 = *((unsigned int *)t29);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB43;

LAB44:    memcpy(t61, t30, 8);

LAB45:    memset(t88, 0, 8);
    t89 = (t61 + 4);
    t90 = *((unsigned int *)t89);
    t91 = (~(t90));
    t92 = *((unsigned int *)t61);
    t93 = (t92 & t91);
    t94 = (t93 & 1U);
    if (t94 != 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t89) != 0)
        goto LAB59;

LAB60:    t96 = (t88 + 4);
    t97 = *((unsigned int *)t88);
    t98 = (!(t97));
    t99 = *((unsigned int *)t96);
    t100 = (t98 || t99);
    if (t100 > 0)
        goto LAB61;

LAB62:    memcpy(t127, t88, 8);

LAB63:    t155 = (t127 + 4);
    t156 = *((unsigned int *)t155);
    t157 = (~(t156));
    t158 = *((unsigned int *)t127);
    t159 = (t158 & t157);
    t160 = (t159 != 0);
    if (t160 > 0)
        goto LAB75;

LAB76:    xsi_set_current_line(157, ng0);

LAB79:    xsi_set_current_line(159, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4260);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB77:    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3524);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3708);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3616);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(168, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3800);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(169, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3892);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(171, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 4904);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(172, ng0);
    xsi_vlogfile_write(1, 0, 0, ng12, 1, t0);
    goto LAB33;

LAB37:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB38;

LAB39:    *((unsigned int *)t30) = 1;
    goto LAB42;

LAB41:    t10 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB42;

LAB43:    t35 = (t0 + 1824U);
    t36 = *((char **)t35);
    t35 = ((char*)((ng8)));
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
        goto LAB49;

LAB46:    if (t49 != 0)
        goto LAB48;

LAB47:    *((unsigned int *)t37) = 1;

LAB49:    memset(t53, 0, 8);
    t54 = (t37 + 4);
    t55 = *((unsigned int *)t54);
    t56 = (~(t55));
    t57 = *((unsigned int *)t37);
    t58 = (t57 & t56);
    t59 = (t58 & 1U);
    if (t59 != 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t54) != 0)
        goto LAB52;

LAB53:    t62 = *((unsigned int *)t30);
    t63 = *((unsigned int *)t53);
    t64 = (t62 | t63);
    *((unsigned int *)t61) = t64;
    t65 = (t30 + 4);
    t66 = (t53 + 4);
    t67 = (t61 + 4);
    t68 = *((unsigned int *)t65);
    t69 = *((unsigned int *)t66);
    t70 = (t68 | t69);
    *((unsigned int *)t67) = t70;
    t71 = *((unsigned int *)t67);
    t72 = (t71 != 0);
    if (t72 == 1)
        goto LAB54;

LAB55:
LAB56:    goto LAB45;

LAB48:    t52 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB49;

LAB50:    *((unsigned int *)t53) = 1;
    goto LAB53;

LAB52:    t60 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB53;

LAB54:    t73 = *((unsigned int *)t61);
    t74 = *((unsigned int *)t67);
    *((unsigned int *)t61) = (t73 | t74);
    t75 = (t30 + 4);
    t76 = (t53 + 4);
    t77 = *((unsigned int *)t75);
    t78 = (~(t77));
    t79 = *((unsigned int *)t30);
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
    goto LAB56;

LAB57:    *((unsigned int *)t88) = 1;
    goto LAB60;

LAB59:    t95 = (t88 + 4);
    *((unsigned int *)t88) = 1;
    *((unsigned int *)t95) = 1;
    goto LAB60;

LAB61:    t101 = (t0 + 1824U);
    t102 = *((char **)t101);
    t101 = ((char*)((ng9)));
    memset(t103, 0, 8);
    t104 = (t102 + 4);
    t105 = (t101 + 4);
    t106 = *((unsigned int *)t102);
    t107 = *((unsigned int *)t101);
    t108 = (t106 ^ t107);
    t109 = *((unsigned int *)t104);
    t110 = *((unsigned int *)t105);
    t111 = (t109 ^ t110);
    t112 = (t108 | t111);
    t113 = *((unsigned int *)t104);
    t114 = *((unsigned int *)t105);
    t115 = (t113 | t114);
    t116 = (~(t115));
    t117 = (t112 & t116);
    if (t117 != 0)
        goto LAB67;

LAB64:    if (t115 != 0)
        goto LAB66;

LAB65:    *((unsigned int *)t103) = 1;

LAB67:    memset(t119, 0, 8);
    t120 = (t103 + 4);
    t121 = *((unsigned int *)t120);
    t122 = (~(t121));
    t123 = *((unsigned int *)t103);
    t124 = (t123 & t122);
    t125 = (t124 & 1U);
    if (t125 != 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t120) != 0)
        goto LAB70;

LAB71:    t128 = *((unsigned int *)t88);
    t129 = *((unsigned int *)t119);
    t130 = (t128 | t129);
    *((unsigned int *)t127) = t130;
    t131 = (t88 + 4);
    t132 = (t119 + 4);
    t133 = (t127 + 4);
    t134 = *((unsigned int *)t131);
    t135 = *((unsigned int *)t132);
    t136 = (t134 | t135);
    *((unsigned int *)t133) = t136;
    t137 = *((unsigned int *)t133);
    t138 = (t137 != 0);
    if (t138 == 1)
        goto LAB72;

LAB73:
LAB74:    goto LAB63;

LAB66:    t118 = (t103 + 4);
    *((unsigned int *)t103) = 1;
    *((unsigned int *)t118) = 1;
    goto LAB67;

LAB68:    *((unsigned int *)t119) = 1;
    goto LAB71;

LAB70:    t126 = (t119 + 4);
    *((unsigned int *)t119) = 1;
    *((unsigned int *)t126) = 1;
    goto LAB71;

LAB72:    t139 = *((unsigned int *)t127);
    t140 = *((unsigned int *)t133);
    *((unsigned int *)t127) = (t139 | t140);
    t141 = (t88 + 4);
    t142 = (t119 + 4);
    t143 = *((unsigned int *)t141);
    t144 = (~(t143));
    t145 = *((unsigned int *)t88);
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
    goto LAB74;

LAB75:    xsi_set_current_line(150, ng0);

LAB78:    xsi_set_current_line(151, ng0);
    t161 = (t0 + 1824U);
    t162 = *((char **)t161);
    xsi_vlogfile_write(1, 0, 0, ng10, 2, t0, (char)118, t162, 6);
    xsi_set_current_line(152, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4260);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB77;

LAB82:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB83;

LAB84:    *((unsigned int *)t30) = 1;
    goto LAB87;

LAB86:    t10 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB87;

LAB88:    t35 = (t0 + 1916U);
    t36 = *((char **)t35);
    t35 = ((char*)((ng14)));
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
        goto LAB94;

LAB91:    if (t49 != 0)
        goto LAB93;

LAB92:    *((unsigned int *)t37) = 1;

LAB94:    memset(t53, 0, 8);
    t54 = (t37 + 4);
    t55 = *((unsigned int *)t54);
    t56 = (~(t55));
    t57 = *((unsigned int *)t37);
    t58 = (t57 & t56);
    t59 = (t58 & 1U);
    if (t59 != 0)
        goto LAB95;

LAB96:    if (*((unsigned int *)t54) != 0)
        goto LAB97;

LAB98:    t62 = *((unsigned int *)t30);
    t63 = *((unsigned int *)t53);
    t64 = (t62 | t63);
    *((unsigned int *)t61) = t64;
    t65 = (t30 + 4);
    t66 = (t53 + 4);
    t67 = (t61 + 4);
    t68 = *((unsigned int *)t65);
    t69 = *((unsigned int *)t66);
    t70 = (t68 | t69);
    *((unsigned int *)t67) = t70;
    t71 = *((unsigned int *)t67);
    t72 = (t71 != 0);
    if (t72 == 1)
        goto LAB99;

LAB100:
LAB101:    goto LAB90;

LAB93:    t52 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB94;

LAB95:    *((unsigned int *)t53) = 1;
    goto LAB98;

LAB97:    t60 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB98;

LAB99:    t73 = *((unsigned int *)t61);
    t74 = *((unsigned int *)t67);
    *((unsigned int *)t61) = (t73 | t74);
    t75 = (t30 + 4);
    t76 = (t53 + 4);
    t77 = *((unsigned int *)t75);
    t78 = (~(t77));
    t79 = *((unsigned int *)t30);
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
    goto LAB101;

LAB102:    *((unsigned int *)t88) = 1;
    goto LAB105;

LAB104:    t95 = (t88 + 4);
    *((unsigned int *)t88) = 1;
    *((unsigned int *)t95) = 1;
    goto LAB105;

LAB106:    t101 = (t0 + 1916U);
    t102 = *((char **)t101);
    t101 = ((char*)((ng15)));
    memset(t103, 0, 8);
    t104 = (t102 + 4);
    t105 = (t101 + 4);
    t106 = *((unsigned int *)t102);
    t107 = *((unsigned int *)t101);
    t108 = (t106 ^ t107);
    t109 = *((unsigned int *)t104);
    t110 = *((unsigned int *)t105);
    t111 = (t109 ^ t110);
    t112 = (t108 | t111);
    t113 = *((unsigned int *)t104);
    t114 = *((unsigned int *)t105);
    t115 = (t113 | t114);
    t116 = (~(t115));
    t117 = (t112 & t116);
    if (t117 != 0)
        goto LAB112;

LAB109:    if (t115 != 0)
        goto LAB111;

LAB110:    *((unsigned int *)t103) = 1;

LAB112:    memset(t119, 0, 8);
    t120 = (t103 + 4);
    t121 = *((unsigned int *)t120);
    t122 = (~(t121));
    t123 = *((unsigned int *)t103);
    t124 = (t123 & t122);
    t125 = (t124 & 1U);
    if (t125 != 0)
        goto LAB113;

LAB114:    if (*((unsigned int *)t120) != 0)
        goto LAB115;

LAB116:    t128 = *((unsigned int *)t88);
    t129 = *((unsigned int *)t119);
    t130 = (t128 | t129);
    *((unsigned int *)t127) = t130;
    t131 = (t88 + 4);
    t132 = (t119 + 4);
    t133 = (t127 + 4);
    t134 = *((unsigned int *)t131);
    t135 = *((unsigned int *)t132);
    t136 = (t134 | t135);
    *((unsigned int *)t133) = t136;
    t137 = *((unsigned int *)t133);
    t138 = (t137 != 0);
    if (t138 == 1)
        goto LAB117;

LAB118:
LAB119:    goto LAB108;

LAB111:    t118 = (t103 + 4);
    *((unsigned int *)t103) = 1;
    *((unsigned int *)t118) = 1;
    goto LAB112;

LAB113:    *((unsigned int *)t119) = 1;
    goto LAB116;

LAB115:    t126 = (t119 + 4);
    *((unsigned int *)t119) = 1;
    *((unsigned int *)t126) = 1;
    goto LAB116;

LAB117:    t139 = *((unsigned int *)t127);
    t140 = *((unsigned int *)t133);
    *((unsigned int *)t127) = (t139 | t140);
    t141 = (t88 + 4);
    t142 = (t119 + 4);
    t143 = *((unsigned int *)t141);
    t144 = (~(t143));
    t145 = *((unsigned int *)t88);
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
    goto LAB119;

LAB120:    *((unsigned int *)t163) = 1;
    goto LAB123;

LAB122:    t161 = (t163 + 4);
    *((unsigned int *)t163) = 1;
    *((unsigned int *)t161) = 1;
    goto LAB123;

LAB124:    t168 = (t0 + 1916U);
    t169 = *((char **)t168);
    t168 = ((char*)((ng16)));
    memset(t170, 0, 8);
    t171 = (t169 + 4);
    t172 = (t168 + 4);
    t173 = *((unsigned int *)t169);
    t174 = *((unsigned int *)t168);
    t175 = (t173 ^ t174);
    t176 = *((unsigned int *)t171);
    t177 = *((unsigned int *)t172);
    t178 = (t176 ^ t177);
    t179 = (t175 | t178);
    t180 = *((unsigned int *)t171);
    t181 = *((unsigned int *)t172);
    t182 = (t180 | t181);
    t183 = (~(t182));
    t184 = (t179 & t183);
    if (t184 != 0)
        goto LAB130;

LAB127:    if (t182 != 0)
        goto LAB129;

LAB128:    *((unsigned int *)t170) = 1;

LAB130:    memset(t186, 0, 8);
    t187 = (t170 + 4);
    t188 = *((unsigned int *)t187);
    t189 = (~(t188));
    t190 = *((unsigned int *)t170);
    t191 = (t190 & t189);
    t192 = (t191 & 1U);
    if (t192 != 0)
        goto LAB131;

LAB132:    if (*((unsigned int *)t187) != 0)
        goto LAB133;

LAB134:    t195 = *((unsigned int *)t163);
    t196 = *((unsigned int *)t186);
    t197 = (t195 | t196);
    *((unsigned int *)t194) = t197;
    t198 = (t163 + 4);
    t199 = (t186 + 4);
    t200 = (t194 + 4);
    t201 = *((unsigned int *)t198);
    t202 = *((unsigned int *)t199);
    t203 = (t201 | t202);
    *((unsigned int *)t200) = t203;
    t204 = *((unsigned int *)t200);
    t205 = (t204 != 0);
    if (t205 == 1)
        goto LAB135;

LAB136:
LAB137:    goto LAB126;

LAB129:    t185 = (t170 + 4);
    *((unsigned int *)t170) = 1;
    *((unsigned int *)t185) = 1;
    goto LAB130;

LAB131:    *((unsigned int *)t186) = 1;
    goto LAB134;

LAB133:    t193 = (t186 + 4);
    *((unsigned int *)t186) = 1;
    *((unsigned int *)t193) = 1;
    goto LAB134;

LAB135:    t206 = *((unsigned int *)t194);
    t207 = *((unsigned int *)t200);
    *((unsigned int *)t194) = (t206 | t207);
    t208 = (t163 + 4);
    t209 = (t186 + 4);
    t210 = *((unsigned int *)t208);
    t211 = (~(t210));
    t212 = *((unsigned int *)t163);
    t213 = (t212 & t211);
    t214 = *((unsigned int *)t209);
    t215 = (~(t214));
    t216 = *((unsigned int *)t186);
    t217 = (t216 & t215);
    t218 = (~(t213));
    t219 = (~(t217));
    t220 = *((unsigned int *)t200);
    *((unsigned int *)t200) = (t220 & t218);
    t221 = *((unsigned int *)t200);
    *((unsigned int *)t200) = (t221 & t219);
    goto LAB137;

LAB138:    *((unsigned int *)t222) = 1;
    goto LAB141;

LAB140:    t229 = (t222 + 4);
    *((unsigned int *)t222) = 1;
    *((unsigned int *)t229) = 1;
    goto LAB141;

LAB142:    t235 = (t0 + 1916U);
    t236 = *((char **)t235);
    t235 = ((char*)((ng17)));
    memset(t237, 0, 8);
    t238 = (t236 + 4);
    t239 = (t235 + 4);
    t240 = *((unsigned int *)t236);
    t241 = *((unsigned int *)t235);
    t242 = (t240 ^ t241);
    t243 = *((unsigned int *)t238);
    t244 = *((unsigned int *)t239);
    t245 = (t243 ^ t244);
    t246 = (t242 | t245);
    t247 = *((unsigned int *)t238);
    t248 = *((unsigned int *)t239);
    t249 = (t247 | t248);
    t250 = (~(t249));
    t251 = (t246 & t250);
    if (t251 != 0)
        goto LAB148;

LAB145:    if (t249 != 0)
        goto LAB147;

LAB146:    *((unsigned int *)t237) = 1;

LAB148:    memset(t253, 0, 8);
    t254 = (t237 + 4);
    t255 = *((unsigned int *)t254);
    t256 = (~(t255));
    t257 = *((unsigned int *)t237);
    t258 = (t257 & t256);
    t259 = (t258 & 1U);
    if (t259 != 0)
        goto LAB149;

LAB150:    if (*((unsigned int *)t254) != 0)
        goto LAB151;

LAB152:    t262 = *((unsigned int *)t222);
    t263 = *((unsigned int *)t253);
    t264 = (t262 | t263);
    *((unsigned int *)t261) = t264;
    t265 = (t222 + 4);
    t266 = (t253 + 4);
    t267 = (t261 + 4);
    t268 = *((unsigned int *)t265);
    t269 = *((unsigned int *)t266);
    t270 = (t268 | t269);
    *((unsigned int *)t267) = t270;
    t271 = *((unsigned int *)t267);
    t272 = (t271 != 0);
    if (t272 == 1)
        goto LAB153;

LAB154:
LAB155:    goto LAB144;

LAB147:    t252 = (t237 + 4);
    *((unsigned int *)t237) = 1;
    *((unsigned int *)t252) = 1;
    goto LAB148;

LAB149:    *((unsigned int *)t253) = 1;
    goto LAB152;

LAB151:    t260 = (t253 + 4);
    *((unsigned int *)t253) = 1;
    *((unsigned int *)t260) = 1;
    goto LAB152;

LAB153:    t273 = *((unsigned int *)t261);
    t274 = *((unsigned int *)t267);
    *((unsigned int *)t261) = (t273 | t274);
    t275 = (t222 + 4);
    t276 = (t253 + 4);
    t277 = *((unsigned int *)t275);
    t278 = (~(t277));
    t279 = *((unsigned int *)t222);
    t280 = (t279 & t278);
    t281 = *((unsigned int *)t276);
    t282 = (~(t281));
    t283 = *((unsigned int *)t253);
    t284 = (t283 & t282);
    t285 = (~(t280));
    t286 = (~(t284));
    t287 = *((unsigned int *)t267);
    *((unsigned int *)t267) = (t287 & t285);
    t288 = *((unsigned int *)t267);
    *((unsigned int *)t267) = (t288 & t286);
    goto LAB155;

LAB156:    xsi_set_current_line(176, ng0);

LAB159:    xsi_set_current_line(179, ng0);
    t295 = ((char*)((ng8)));
    t296 = (t0 + 4444);
    xsi_vlogvar_wait_assign_value(t296, t295, 0, 0, 2, 0LL);
    xsi_set_current_line(180, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4720);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(183, ng0);
    t2 = (t0 + 1916U);
    t3 = *((char **)t2);

LAB160:    t2 = ((char*)((ng13)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t8 == 1)
        goto LAB161;

LAB162:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t8 == 1)
        goto LAB163;

LAB164:    t2 = ((char*)((ng15)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t8 == 1)
        goto LAB165;

LAB166:    t2 = ((char*)((ng16)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t8 == 1)
        goto LAB167;

LAB168:    t2 = ((char*)((ng17)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t8 == 1)
        goto LAB169;

LAB170:
LAB171:    xsi_set_current_line(202, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(203, ng0);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 4260);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(207, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3524);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(208, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3708);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(209, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3616);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(210, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3800);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(211, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3892);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(213, ng0);
    t2 = ((char*)((ng23)));
    t4 = (t0 + 4904);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);
    goto LAB158;

LAB161:    xsi_set_current_line(186, ng0);
    t4 = ((char*)((ng18)));
    t5 = (t0 + 4536);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 6, 0LL);
    goto LAB171;

LAB163:    xsi_set_current_line(189, ng0);
    t4 = ((char*)((ng19)));
    t5 = (t0 + 4536);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 6, 0LL);
    goto LAB171;

LAB165:    xsi_set_current_line(192, ng0);
    t4 = ((char*)((ng20)));
    t5 = (t0 + 4536);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 6, 0LL);
    goto LAB171;

LAB167:    xsi_set_current_line(195, ng0);
    t4 = ((char*)((ng21)));
    t5 = (t0 + 4536);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 6, 0LL);
    goto LAB171;

LAB169:    xsi_set_current_line(198, ng0);
    t4 = ((char*)((ng22)));
    t5 = (t0 + 4536);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 6, 0LL);
    goto LAB171;

}


extern void work_m_00000000001513503997_1697483925_init()
{
	static char *pe[] = {(void *)Always_66_0,(void *)Always_92_1};
	xsi_register_didat("work_m_00000000001513503997_1697483925", "isim/test_mips_multicycle_isim_beh.exe.sim/work/m_00000000001513503997_1697483925.didat");
	xsi_register_executes(pe);
}
