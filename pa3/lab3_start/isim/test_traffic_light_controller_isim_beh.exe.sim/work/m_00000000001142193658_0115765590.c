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
static const char *ng0 = "//vmware-host/Shared Folders/shared_with_vm/141git/cs141/pa3/lab3_start/test_traffic_light_controller.v";
static int ng1[] = {0, 0};
static int ng2[] = {5, 0};
static int ng3[] = {1, 0};
static const char *ng4 = "%d";
static int ng5[] = {24, 0};
static int ng6[] = {2, 0};
static unsigned int ng7[] = {0U, 0U};
static unsigned int ng8[] = {1U, 0U};
static const char *ng9 = "TIME = %b";
static unsigned int ng10[] = {33U, 0U};
static unsigned int ng11[] = {57U, 0U};
static const char *ng12 = "ERROR: Rule 2  Cur: NS=%b, EW=%b, PED=%b\t\tPrev: NS=%b, EW=%b, PED=%b\t\tTime=%b";
static unsigned int ng13[] = {145U, 0U};
static const char *ng14 = "ERROR: Rule 4 (NS)  Cur: NS=%b, EW=%b, PED=%b\t\tPrev: NS=%b, EW=%b, PED=%b\t\tTime=%b";
static unsigned int ng15[] = {44U, 0U};
static const char *ng16 = "ERROR: Rule 4 (EW)  Cur: NS=%b, EW=%b, PED=%b\t\tPrev: NS=%b, EW=%b, PED=%b\t\tTime=%b";
static unsigned int ng17[] = {81U, 0U};
static const char *ng18 = "ERROR: Rule 8 (NS)  Cur: NS=%b, EW=%b, PED=%b\t\tPrev: NS=%b, EW=%b, PED=%b\t\tTime=%b";
static unsigned int ng19[] = {42U, 0U};



static void Initial_74_0(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    double t16;
    double t17;
    char *t18;

LAB0:    t1 = (t0 + 2732U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(74, ng0);

LAB4:    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1564);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1748);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(84, ng0);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB5:    t2 = (t0 + 2024);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1932);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    xsi_vlog_signed_multiply(t6, 32, t2, 32, t5, 32);
    xsi_vlogfile_write(1, 0, 0, ng4, 2, t0, (char)119, t6, 32);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 1932);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t16 = xsi_vlog_convert_to_real(t4, 32, 1);
    t16 = (t16 * 1000.0000000000000);
    t17 = (t16 < 0.00000000000000000);
    if (t17 == 1)
        goto LAB13;

LAB14:    t16 = (t16 + 0.50000000000000000);
    t16 = ((int64)(t16));

LAB15:    t16 = (t16 * 1.0000000000000000);
    t5 = (t0 + 2632);
    xsi_process_wait(t5, t16);
    *((char **)t1) = &&LAB16;

LAB1:    return;
LAB6:    xsi_set_current_line(84, ng0);

LAB8:    xsi_set_current_line(85, ng0);
    t13 = (t0 + 1932);
    t14 = (t13 + 36U);
    t15 = *((char **)t14);
    t16 = xsi_vlog_convert_to_real(t15, 32, 1);
    t16 = (t16 * 1000.0000000000000);
    t17 = (t16 < 0.00000000000000000);
    if (t17 == 1)
        goto LAB9;

LAB10:    t16 = (t16 + 0.50000000000000000);
    t16 = ((int64)(t16));

LAB11:    t16 = (t16 * 1.0000000000000000);
    t18 = (t0 + 2632);
    xsi_process_wait(t18, t16);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB9:    t16 = 0.00000000000000000;
    goto LAB11;

LAB12:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2024);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2024);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB5;

LAB13:    t16 = 0.00000000000000000;
    goto LAB15;

LAB16:    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(93, ng0);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB17:    t2 = (t0 + 2024);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1748);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB28;

LAB26:    if (*((unsigned int *)t5) == 0)
        goto LAB25;

LAB27:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;

LAB28:    t13 = (t0 + 1748);
    xsi_vlogvar_assign_value(t13, t6, 0, 0, 1);
    xsi_set_current_line(99, ng0);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB29:    t2 = (t0 + 2024);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 1748);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB40;

LAB38:    if (*((unsigned int *)t5) == 0)
        goto LAB37;

LAB39:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;

LAB40:    t13 = (t0 + 1748);
    xsi_vlogvar_assign_value(t13, t6, 0, 0, 1);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB44;

LAB42:    if (*((unsigned int *)t5) == 0)
        goto LAB41;

LAB43:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;

LAB44:    t13 = (t0 + 1564);
    xsi_vlogvar_assign_value(t13, t6, 0, 0, 1);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB48;

LAB46:    if (*((unsigned int *)t5) == 0)
        goto LAB45;

LAB47:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;

LAB48:    t13 = (t0 + 1656);
    xsi_vlogvar_assign_value(t13, t6, 0, 0, 1);
    goto LAB1;

LAB18:    xsi_set_current_line(93, ng0);

LAB20:    xsi_set_current_line(94, ng0);
    t13 = (t0 + 1932);
    t14 = (t13 + 36U);
    t15 = *((char **)t14);
    t16 = xsi_vlog_convert_to_real(t15, 32, 1);
    t16 = (t16 * 1000.0000000000000);
    t17 = (t16 < 0.00000000000000000);
    if (t17 == 1)
        goto LAB21;

LAB22:    t16 = (t16 + 0.50000000000000000);
    t16 = ((int64)(t16));

LAB23:    t16 = (t16 * 1.0000000000000000);
    t18 = (t0 + 2632);
    xsi_process_wait(t18, t16);
    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB21:    t16 = 0.00000000000000000;
    goto LAB23;

LAB24:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 2024);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2024);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB17;

LAB25:    *((unsigned int *)t6) = 1;
    goto LAB28;

LAB30:    xsi_set_current_line(99, ng0);

LAB32:    xsi_set_current_line(100, ng0);
    t13 = (t0 + 1932);
    t14 = (t13 + 36U);
    t15 = *((char **)t14);
    t16 = xsi_vlog_convert_to_real(t15, 32, 1);
    t16 = (t16 * 1000.0000000000000);
    t17 = (t16 < 0.00000000000000000);
    if (t17 == 1)
        goto LAB33;

LAB34:    t16 = (t16 + 0.50000000000000000);
    t16 = ((int64)(t16));

LAB35:    t16 = (t16 * 1.0000000000000000);
    t18 = (t0 + 2632);
    xsi_process_wait(t18, t16);
    *((char **)t1) = &&LAB36;
    goto LAB1;

LAB33:    t16 = 0.00000000000000000;
    goto LAB35;

LAB36:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 2024);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2024);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB29;

LAB37:    *((unsigned int *)t6) = 1;
    goto LAB40;

LAB41:    *((unsigned int *)t6) = 1;
    goto LAB44;

LAB45:    *((unsigned int *)t6) = 1;
    goto LAB48;

}

static void Always_117_1(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    double t7;
    double t8;
    char *t9;

LAB0:    t1 = (t0 + 2876U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(117, ng0);

LAB4:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 1932);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_signed_divide(t6, 32, t4, 32, t5, 32);
    t7 = xsi_vlog_convert_to_real(t6, 32, 1);
    t7 = (t7 * 1000.0000000000000);
    t8 = (t7 < 0.00000000000000000);
    if (t8 == 1)
        goto LAB5;

LAB6:    t7 = (t7 + 0.50000000000000000);
    t7 = ((int64)(t7));

LAB7:    t7 = (t7 * 1.0000000000000000);
    t9 = (t0 + 2776);
    xsi_process_wait(t9, t7);
    *((char **)t1) = &&LAB8;

LAB1:    return;
LAB5:    t7 = 0.00000000000000000;
    goto LAB7;

LAB8:    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 1932);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_signed_divide(t6, 32, t4, 32, t5, 32);
    t7 = xsi_vlog_convert_to_real(t6, 32, 1);
    t7 = (t7 * 1000.0000000000000);
    t8 = (t7 < 0.00000000000000000);
    if (t8 == 1)
        goto LAB9;

LAB10:    t7 = (t7 + 0.50000000000000000);
    t7 = ((int64)(t7));

LAB11:    t7 = (t7 * 1.0000000000000000);
    t9 = (t0 + 2776);
    xsi_process_wait(t9, t7);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB9:    t7 = 0.00000000000000000;
    goto LAB11;

LAB12:    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 1840);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t9 = (t0 + 1840);
    xsi_vlogvar_assign_value(t9, t6, 0, 0, 32);
    goto LAB2;

}

static void Always_126_2(char *t0)
{
    char t6[8];
    char t7[8];
    char t32[8];
    char t44[8];
    char t56[8];
    char t68[8];
    char t80[8];
    char t122[8];
    char t129[8];
    char t138[8];
    char t150[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    char *t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    int t97;
    int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
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
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    char *t130;
    char *t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    char *t139;
    char *t140;
    char *t141;
    char *t142;
    char *t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    char *t151;
    char *t152;
    char *t153;
    char *t154;
    char *t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    char *t162;
    char *t163;
    char *t164;

LAB0:    t1 = (t0 + 3020U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 3216);
    *((int *)t2) = 1;
    t3 = (t0 + 3048);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(126, ng0);

LAB5:    xsi_set_current_line(127, ng0);
    t4 = (t0 + 2920);
    xsi_process_wait(t4, 2000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 2116);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2208);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 968U);
    t3 = *((char **)t2);
    t2 = (t0 + 1152U);
    t4 = *((char **)t2);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t3, 3, t4, 2);
    t2 = (t0 + 1060U);
    t5 = *((char **)t2);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 32, t6, 32, t5, 3);
    t2 = (t0 + 2116);
    xsi_vlogvar_assign_value(t2, t7, 0, 0, 32);
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 1840);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng9, 2, t0, (char)119, t4, 32);
    xsi_set_current_line(134, ng0);
    t2 = (t0 + 2208);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);

LAB7:    t5 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 32, t5, 32);
    if (t8 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t8 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng13)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t8 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng15)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t8 == 1)
        goto LAB14;

LAB15:
LAB16:    goto LAB2;

LAB8:    xsi_set_current_line(135, ng0);

LAB17:    xsi_set_current_line(136, ng0);
    t9 = (t0 + 2116);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng11)));
    memset(t6, 0, 8);
    if (*((unsigned int *)t11) != *((unsigned int *)t12))
        goto LAB19;

LAB18:    t13 = (t11 + 4);
    t14 = (t12 + 4);
    if (*((unsigned int *)t13) != *((unsigned int *)t14))
        goto LAB19;

LAB20:    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB21;

LAB22:
LAB23:    goto LAB16;

LAB10:    xsi_set_current_line(141, ng0);

LAB25:    xsi_set_current_line(142, ng0);
    t3 = (t0 + 1564);
    t5 = (t3 + 36U);
    t9 = *((char **)t5);
    t10 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t11 = (t9 + 4);
    t12 = (t10 + 4);
    t16 = *((unsigned int *)t9);
    t17 = *((unsigned int *)t10);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t12);
    t26 = (t19 ^ t20);
    t27 = (t18 | t26);
    t28 = *((unsigned int *)t11);
    t29 = *((unsigned int *)t12);
    t30 = (t28 | t29);
    t31 = (~(t30));
    t38 = (t27 & t31);
    if (t38 != 0)
        goto LAB29;

LAB26:    if (t30 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t6) = 1;

LAB29:    memset(t7, 0, 8);
    t14 = (t6 + 4);
    t39 = *((unsigned int *)t14);
    t40 = (~(t39));
    t41 = *((unsigned int *)t6);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t14) != 0)
        goto LAB32;

LAB33:    t21 = (t7 + 4);
    t50 = *((unsigned int *)t7);
    t51 = *((unsigned int *)t21);
    t52 = (t50 || t51);
    if (t52 > 0)
        goto LAB34;

LAB35:    memcpy(t56, t7, 8);

LAB36:    t49 = (t56 + 4);
    t105 = *((unsigned int *)t49);
    t106 = (~(t105));
    t107 = *((unsigned int *)t56);
    t108 = (t107 & t106);
    t109 = (t108 != 0);
    if (t109 > 0)
        goto LAB47;

LAB48:
LAB49:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t9 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t10 = (t5 + 4);
    t11 = (t9 + 4);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t9);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t26 = (t19 ^ t20);
    t27 = (t18 | t26);
    t28 = *((unsigned int *)t10);
    t29 = *((unsigned int *)t11);
    t30 = (t28 | t29);
    t31 = (~(t30));
    t38 = (t27 & t31);
    if (t38 != 0)
        goto LAB54;

LAB51:    if (t30 != 0)
        goto LAB53;

LAB52:    *((unsigned int *)t6) = 1;

LAB54:    memset(t7, 0, 8);
    t13 = (t6 + 4);
    t39 = *((unsigned int *)t13);
    t40 = (~(t39));
    t41 = *((unsigned int *)t6);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t13) != 0)
        goto LAB57;

LAB58:    t15 = (t7 + 4);
    t50 = *((unsigned int *)t7);
    t51 = *((unsigned int *)t15);
    t52 = (t50 || t51);
    if (t52 > 0)
        goto LAB59;

LAB60:    memcpy(t56, t7, 8);

LAB61:    t48 = (t56 + 4);
    t105 = *((unsigned int *)t48);
    t106 = (~(t105));
    t107 = *((unsigned int *)t56);
    t108 = (t107 & t106);
    t109 = (t108 != 0);
    if (t109 > 0)
        goto LAB72;

LAB73:
LAB74:    goto LAB16;

LAB12:    xsi_set_current_line(150, ng0);

LAB76:    xsi_set_current_line(151, ng0);
    t3 = (t0 + 2116);
    t5 = (t3 + 36U);
    t9 = *((char **)t5);
    t10 = ((char*)((ng17)));
    memset(t6, 0, 8);
    if (*((unsigned int *)t9) != *((unsigned int *)t10))
        goto LAB78;

LAB77:    t11 = (t9 + 4);
    t12 = (t10 + 4);
    if (*((unsigned int *)t11) != *((unsigned int *)t12))
        goto LAB78;

LAB79:    t13 = (t6 + 4);
    t16 = *((unsigned int *)t13);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB80;

LAB81:
LAB82:    goto LAB16;

LAB14:    xsi_set_current_line(156, ng0);

LAB84:    xsi_set_current_line(157, ng0);
    t3 = (t0 + 2116);
    t5 = (t3 + 36U);
    t9 = *((char **)t5);
    t10 = ((char*)((ng19)));
    memset(t6, 0, 8);
    if (*((unsigned int *)t9) != *((unsigned int *)t10))
        goto LAB86;

LAB85:    t11 = (t9 + 4);
    t12 = (t10 + 4);
    if (*((unsigned int *)t11) != *((unsigned int *)t12))
        goto LAB86;

LAB87:    t13 = (t6 + 4);
    t16 = *((unsigned int *)t13);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB88;

LAB89:
LAB90:    goto LAB16;

LAB19:    *((unsigned int *)t6) = 1;
    goto LAB20;

LAB21:    xsi_set_current_line(136, ng0);

LAB24:    xsi_set_current_line(137, ng0);
    t21 = (t0 + 2116);
    t22 = (t21 + 36U);
    t23 = *((char **)t22);
    memset(t7, 0, 8);
    t24 = (t7 + 4);
    t25 = (t23 + 4);
    t26 = *((unsigned int *)t23);
    t27 = (t26 >> 5);
    *((unsigned int *)t7) = t27;
    t28 = *((unsigned int *)t25);
    t29 = (t28 >> 5);
    *((unsigned int *)t24) = t29;
    t30 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t30 & 7U);
    t31 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t31 & 7U);
    t33 = (t0 + 2116);
    t34 = (t33 + 36U);
    t35 = *((char **)t34);
    memset(t32, 0, 8);
    t36 = (t32 + 4);
    t37 = (t35 + 4);
    t38 = *((unsigned int *)t35);
    t39 = (t38 >> 0);
    *((unsigned int *)t32) = t39;
    t40 = *((unsigned int *)t37);
    t41 = (t40 >> 0);
    *((unsigned int *)t36) = t41;
    t42 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t42 & 7U);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t43 & 7U);
    t45 = (t0 + 2116);
    t46 = (t45 + 36U);
    t47 = *((char **)t46);
    memset(t44, 0, 8);
    t48 = (t44 + 4);
    t49 = (t47 + 4);
    t50 = *((unsigned int *)t47);
    t51 = (t50 >> 3);
    *((unsigned int *)t44) = t51;
    t52 = *((unsigned int *)t49);
    t53 = (t52 >> 3);
    *((unsigned int *)t48) = t53;
    t54 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t54 & 3U);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t55 & 3U);
    t57 = (t0 + 2208);
    t58 = (t57 + 36U);
    t59 = *((char **)t58);
    memset(t56, 0, 8);
    t60 = (t56 + 4);
    t61 = (t59 + 4);
    t62 = *((unsigned int *)t59);
    t63 = (t62 >> 5);
    *((unsigned int *)t56) = t63;
    t64 = *((unsigned int *)t61);
    t65 = (t64 >> 5);
    *((unsigned int *)t60) = t65;
    t66 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t66 & 7U);
    t67 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t67 & 7U);
    t69 = (t0 + 2208);
    t70 = (t69 + 36U);
    t71 = *((char **)t70);
    memset(t68, 0, 8);
    t72 = (t68 + 4);
    t73 = (t71 + 4);
    t74 = *((unsigned int *)t71);
    t75 = (t74 >> 0);
    *((unsigned int *)t68) = t75;
    t76 = *((unsigned int *)t73);
    t77 = (t76 >> 0);
    *((unsigned int *)t72) = t77;
    t78 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t78 & 7U);
    t79 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t79 & 7U);
    t81 = (t0 + 2208);
    t82 = (t81 + 36U);
    t83 = *((char **)t82);
    memset(t80, 0, 8);
    t84 = (t80 + 4);
    t85 = (t83 + 4);
    t86 = *((unsigned int *)t83);
    t87 = (t86 >> 3);
    *((unsigned int *)t80) = t87;
    t88 = *((unsigned int *)t85);
    t89 = (t88 >> 3);
    *((unsigned int *)t84) = t89;
    t90 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t90 & 3U);
    t91 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t91 & 3U);
    t92 = (t0 + 1840);
    t93 = (t92 + 36U);
    t94 = *((char **)t93);
    xsi_vlogfile_write(1, 0, 0, ng12, 8, t0, (char)118, t7, 3, (char)118, t32, 3, (char)118, t44, 2, (char)118, t56, 3, (char)118, t68, 3, (char)118, t80, 2, (char)119, t94, 32);
    goto LAB23;

LAB28:    t13 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB29;

LAB30:    *((unsigned int *)t7) = 1;
    goto LAB33;

LAB32:    t15 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB33;

LAB34:    t22 = (t0 + 2116);
    t23 = (t22 + 36U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng13)));
    memset(t32, 0, 8);
    if (*((unsigned int *)t24) != *((unsigned int *)t25))
        goto LAB38;

LAB37:    t33 = (t24 + 4);
    t34 = (t25 + 4);
    if (*((unsigned int *)t33) != *((unsigned int *)t34))
        goto LAB38;

LAB39:    memset(t44, 0, 8);
    t35 = (t32 + 4);
    t53 = *((unsigned int *)t35);
    t54 = (~(t53));
    t55 = *((unsigned int *)t32);
    t62 = (t55 & t54);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t35) != 0)
        goto LAB42;

LAB43:    t64 = *((unsigned int *)t7);
    t65 = *((unsigned int *)t44);
    t66 = (t64 & t65);
    *((unsigned int *)t56) = t66;
    t37 = (t7 + 4);
    t45 = (t44 + 4);
    t46 = (t56 + 4);
    t67 = *((unsigned int *)t37);
    t74 = *((unsigned int *)t45);
    t75 = (t67 | t74);
    *((unsigned int *)t46) = t75;
    t76 = *((unsigned int *)t46);
    t77 = (t76 != 0);
    if (t77 == 1)
        goto LAB44;

LAB45:
LAB46:    goto LAB36;

LAB38:    *((unsigned int *)t32) = 1;
    goto LAB39;

LAB40:    *((unsigned int *)t44) = 1;
    goto LAB43;

LAB42:    t36 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB43;

LAB44:    t78 = *((unsigned int *)t56);
    t79 = *((unsigned int *)t46);
    *((unsigned int *)t56) = (t78 | t79);
    t47 = (t7 + 4);
    t48 = (t44 + 4);
    t86 = *((unsigned int *)t7);
    t87 = (~(t86));
    t88 = *((unsigned int *)t47);
    t89 = (~(t88));
    t90 = *((unsigned int *)t44);
    t91 = (~(t90));
    t95 = *((unsigned int *)t48);
    t96 = (~(t95));
    t97 = (t87 & t89);
    t98 = (t91 & t96);
    t99 = (~(t97));
    t100 = (~(t98));
    t101 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t101 & t99);
    t102 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t102 & t100);
    t103 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t103 & t99);
    t104 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t104 & t100);
    goto LAB46;

LAB47:    xsi_set_current_line(142, ng0);

LAB50:    xsi_set_current_line(143, ng0);
    t57 = (t0 + 2116);
    t58 = (t57 + 36U);
    t59 = *((char **)t58);
    memset(t68, 0, 8);
    t60 = (t68 + 4);
    t61 = (t59 + 4);
    t110 = *((unsigned int *)t59);
    t111 = (t110 >> 5);
    *((unsigned int *)t68) = t111;
    t112 = *((unsigned int *)t61);
    t113 = (t112 >> 5);
    *((unsigned int *)t60) = t113;
    t114 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t114 & 7U);
    t115 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t115 & 7U);
    t69 = (t0 + 2116);
    t70 = (t69 + 36U);
    t71 = *((char **)t70);
    memset(t80, 0, 8);
    t72 = (t80 + 4);
    t73 = (t71 + 4);
    t116 = *((unsigned int *)t71);
    t117 = (t116 >> 0);
    *((unsigned int *)t80) = t117;
    t118 = *((unsigned int *)t73);
    t119 = (t118 >> 0);
    *((unsigned int *)t72) = t119;
    t120 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t120 & 7U);
    t121 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t121 & 7U);
    t81 = (t0 + 2116);
    t82 = (t81 + 36U);
    t83 = *((char **)t82);
    memset(t122, 0, 8);
    t84 = (t122 + 4);
    t85 = (t83 + 4);
    t123 = *((unsigned int *)t83);
    t124 = (t123 >> 3);
    *((unsigned int *)t122) = t124;
    t125 = *((unsigned int *)t85);
    t126 = (t125 >> 3);
    *((unsigned int *)t84) = t126;
    t127 = *((unsigned int *)t122);
    *((unsigned int *)t122) = (t127 & 3U);
    t128 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t128 & 3U);
    t92 = (t0 + 2208);
    t93 = (t92 + 36U);
    t94 = *((char **)t93);
    memset(t129, 0, 8);
    t130 = (t129 + 4);
    t131 = (t94 + 4);
    t132 = *((unsigned int *)t94);
    t133 = (t132 >> 5);
    *((unsigned int *)t129) = t133;
    t134 = *((unsigned int *)t131);
    t135 = (t134 >> 5);
    *((unsigned int *)t130) = t135;
    t136 = *((unsigned int *)t129);
    *((unsigned int *)t129) = (t136 & 7U);
    t137 = *((unsigned int *)t130);
    *((unsigned int *)t130) = (t137 & 7U);
    t139 = (t0 + 2208);
    t140 = (t139 + 36U);
    t141 = *((char **)t140);
    memset(t138, 0, 8);
    t142 = (t138 + 4);
    t143 = (t141 + 4);
    t144 = *((unsigned int *)t141);
    t145 = (t144 >> 0);
    *((unsigned int *)t138) = t145;
    t146 = *((unsigned int *)t143);
    t147 = (t146 >> 0);
    *((unsigned int *)t142) = t147;
    t148 = *((unsigned int *)t138);
    *((unsigned int *)t138) = (t148 & 7U);
    t149 = *((unsigned int *)t142);
    *((unsigned int *)t142) = (t149 & 7U);
    t151 = (t0 + 2208);
    t152 = (t151 + 36U);
    t153 = *((char **)t152);
    memset(t150, 0, 8);
    t154 = (t150 + 4);
    t155 = (t153 + 4);
    t156 = *((unsigned int *)t153);
    t157 = (t156 >> 3);
    *((unsigned int *)t150) = t157;
    t158 = *((unsigned int *)t155);
    t159 = (t158 >> 3);
    *((unsigned int *)t154) = t159;
    t160 = *((unsigned int *)t150);
    *((unsigned int *)t150) = (t160 & 3U);
    t161 = *((unsigned int *)t154);
    *((unsigned int *)t154) = (t161 & 3U);
    t162 = (t0 + 1840);
    t163 = (t162 + 36U);
    t164 = *((char **)t163);
    xsi_vlogfile_write(1, 0, 0, ng14, 8, t0, (char)118, t68, 3, (char)118, t80, 3, (char)118, t122, 2, (char)118, t129, 3, (char)118, t138, 3, (char)118, t150, 2, (char)119, t164, 32);
    goto LAB49;

LAB53:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB54;

LAB55:    *((unsigned int *)t7) = 1;
    goto LAB58;

LAB57:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB58;

LAB59:    t21 = (t0 + 2116);
    t22 = (t21 + 36U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng15)));
    memset(t32, 0, 8);
    if (*((unsigned int *)t23) != *((unsigned int *)t24))
        goto LAB63;

LAB62:    t25 = (t23 + 4);
    t33 = (t24 + 4);
    if (*((unsigned int *)t25) != *((unsigned int *)t33))
        goto LAB63;

LAB64:    memset(t44, 0, 8);
    t34 = (t32 + 4);
    t53 = *((unsigned int *)t34);
    t54 = (~(t53));
    t55 = *((unsigned int *)t32);
    t62 = (t55 & t54);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t34) != 0)
        goto LAB67;

LAB68:    t64 = *((unsigned int *)t7);
    t65 = *((unsigned int *)t44);
    t66 = (t64 & t65);
    *((unsigned int *)t56) = t66;
    t36 = (t7 + 4);
    t37 = (t44 + 4);
    t45 = (t56 + 4);
    t67 = *((unsigned int *)t36);
    t74 = *((unsigned int *)t37);
    t75 = (t67 | t74);
    *((unsigned int *)t45) = t75;
    t76 = *((unsigned int *)t45);
    t77 = (t76 != 0);
    if (t77 == 1)
        goto LAB69;

LAB70:
LAB71:    goto LAB61;

LAB63:    *((unsigned int *)t32) = 1;
    goto LAB64;

LAB65:    *((unsigned int *)t44) = 1;
    goto LAB68;

LAB67:    t35 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB68;

LAB69:    t78 = *((unsigned int *)t56);
    t79 = *((unsigned int *)t45);
    *((unsigned int *)t56) = (t78 | t79);
    t46 = (t7 + 4);
    t47 = (t44 + 4);
    t86 = *((unsigned int *)t7);
    t87 = (~(t86));
    t88 = *((unsigned int *)t46);
    t89 = (~(t88));
    t90 = *((unsigned int *)t44);
    t91 = (~(t90));
    t95 = *((unsigned int *)t47);
    t96 = (~(t95));
    t8 = (t87 & t89);
    t97 = (t91 & t96);
    t99 = (~(t8));
    t100 = (~(t97));
    t101 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t101 & t99);
    t102 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t102 & t100);
    t103 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t103 & t99);
    t104 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t104 & t100);
    goto LAB71;

LAB72:    xsi_set_current_line(145, ng0);

LAB75:    xsi_set_current_line(146, ng0);
    t49 = (t0 + 2116);
    t57 = (t49 + 36U);
    t58 = *((char **)t57);
    memset(t68, 0, 8);
    t59 = (t68 + 4);
    t60 = (t58 + 4);
    t110 = *((unsigned int *)t58);
    t111 = (t110 >> 5);
    *((unsigned int *)t68) = t111;
    t112 = *((unsigned int *)t60);
    t113 = (t112 >> 5);
    *((unsigned int *)t59) = t113;
    t114 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t114 & 7U);
    t115 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t115 & 7U);
    t61 = (t0 + 2116);
    t69 = (t61 + 36U);
    t70 = *((char **)t69);
    memset(t80, 0, 8);
    t71 = (t80 + 4);
    t72 = (t70 + 4);
    t116 = *((unsigned int *)t70);
    t117 = (t116 >> 0);
    *((unsigned int *)t80) = t117;
    t118 = *((unsigned int *)t72);
    t119 = (t118 >> 0);
    *((unsigned int *)t71) = t119;
    t120 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t120 & 7U);
    t121 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t121 & 7U);
    t73 = (t0 + 2116);
    t81 = (t73 + 36U);
    t82 = *((char **)t81);
    memset(t122, 0, 8);
    t83 = (t122 + 4);
    t84 = (t82 + 4);
    t123 = *((unsigned int *)t82);
    t124 = (t123 >> 3);
    *((unsigned int *)t122) = t124;
    t125 = *((unsigned int *)t84);
    t126 = (t125 >> 3);
    *((unsigned int *)t83) = t126;
    t127 = *((unsigned int *)t122);
    *((unsigned int *)t122) = (t127 & 3U);
    t128 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t128 & 3U);
    t85 = (t0 + 2208);
    t92 = (t85 + 36U);
    t93 = *((char **)t92);
    memset(t129, 0, 8);
    t94 = (t129 + 4);
    t130 = (t93 + 4);
    t132 = *((unsigned int *)t93);
    t133 = (t132 >> 5);
    *((unsigned int *)t129) = t133;
    t134 = *((unsigned int *)t130);
    t135 = (t134 >> 5);
    *((unsigned int *)t94) = t135;
    t136 = *((unsigned int *)t129);
    *((unsigned int *)t129) = (t136 & 7U);
    t137 = *((unsigned int *)t94);
    *((unsigned int *)t94) = (t137 & 7U);
    t131 = (t0 + 2208);
    t139 = (t131 + 36U);
    t140 = *((char **)t139);
    memset(t138, 0, 8);
    t141 = (t138 + 4);
    t142 = (t140 + 4);
    t144 = *((unsigned int *)t140);
    t145 = (t144 >> 0);
    *((unsigned int *)t138) = t145;
    t146 = *((unsigned int *)t142);
    t147 = (t146 >> 0);
    *((unsigned int *)t141) = t147;
    t148 = *((unsigned int *)t138);
    *((unsigned int *)t138) = (t148 & 7U);
    t149 = *((unsigned int *)t141);
    *((unsigned int *)t141) = (t149 & 7U);
    t143 = (t0 + 2208);
    t151 = (t143 + 36U);
    t152 = *((char **)t151);
    memset(t150, 0, 8);
    t153 = (t150 + 4);
    t154 = (t152 + 4);
    t156 = *((unsigned int *)t152);
    t157 = (t156 >> 3);
    *((unsigned int *)t150) = t157;
    t158 = *((unsigned int *)t154);
    t159 = (t158 >> 3);
    *((unsigned int *)t153) = t159;
    t160 = *((unsigned int *)t150);
    *((unsigned int *)t150) = (t160 & 3U);
    t161 = *((unsigned int *)t153);
    *((unsigned int *)t153) = (t161 & 3U);
    t155 = (t0 + 1840);
    t162 = (t155 + 36U);
    t163 = *((char **)t162);
    xsi_vlogfile_write(1, 0, 0, ng16, 8, t0, (char)118, t68, 3, (char)118, t80, 3, (char)118, t122, 2, (char)118, t129, 3, (char)118, t138, 3, (char)118, t150, 2, (char)119, t163, 32);
    goto LAB74;

LAB78:    *((unsigned int *)t6) = 1;
    goto LAB79;

LAB80:    xsi_set_current_line(151, ng0);

LAB83:    xsi_set_current_line(152, ng0);
    t14 = (t0 + 2116);
    t15 = (t14 + 36U);
    t21 = *((char **)t15);
    memset(t7, 0, 8);
    t22 = (t7 + 4);
    t23 = (t21 + 4);
    t26 = *((unsigned int *)t21);
    t27 = (t26 >> 5);
    *((unsigned int *)t7) = t27;
    t28 = *((unsigned int *)t23);
    t29 = (t28 >> 5);
    *((unsigned int *)t22) = t29;
    t30 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t30 & 7U);
    t31 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t31 & 7U);
    t24 = (t0 + 2116);
    t25 = (t24 + 36U);
    t33 = *((char **)t25);
    memset(t32, 0, 8);
    t34 = (t32 + 4);
    t35 = (t33 + 4);
    t38 = *((unsigned int *)t33);
    t39 = (t38 >> 0);
    *((unsigned int *)t32) = t39;
    t40 = *((unsigned int *)t35);
    t41 = (t40 >> 0);
    *((unsigned int *)t34) = t41;
    t42 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t42 & 7U);
    t43 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t43 & 7U);
    t36 = (t0 + 2116);
    t37 = (t36 + 36U);
    t45 = *((char **)t37);
    memset(t44, 0, 8);
    t46 = (t44 + 4);
    t47 = (t45 + 4);
    t50 = *((unsigned int *)t45);
    t51 = (t50 >> 3);
    *((unsigned int *)t44) = t51;
    t52 = *((unsigned int *)t47);
    t53 = (t52 >> 3);
    *((unsigned int *)t46) = t53;
    t54 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t54 & 3U);
    t55 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t55 & 3U);
    t48 = (t0 + 2208);
    t49 = (t48 + 36U);
    t57 = *((char **)t49);
    memset(t56, 0, 8);
    t58 = (t56 + 4);
    t59 = (t57 + 4);
    t62 = *((unsigned int *)t57);
    t63 = (t62 >> 5);
    *((unsigned int *)t56) = t63;
    t64 = *((unsigned int *)t59);
    t65 = (t64 >> 5);
    *((unsigned int *)t58) = t65;
    t66 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t66 & 7U);
    t67 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t67 & 7U);
    t60 = (t0 + 2208);
    t61 = (t60 + 36U);
    t69 = *((char **)t61);
    memset(t68, 0, 8);
    t70 = (t68 + 4);
    t71 = (t69 + 4);
    t74 = *((unsigned int *)t69);
    t75 = (t74 >> 0);
    *((unsigned int *)t68) = t75;
    t76 = *((unsigned int *)t71);
    t77 = (t76 >> 0);
    *((unsigned int *)t70) = t77;
    t78 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t78 & 7U);
    t79 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t79 & 7U);
    t72 = (t0 + 2208);
    t73 = (t72 + 36U);
    t81 = *((char **)t73);
    memset(t80, 0, 8);
    t82 = (t80 + 4);
    t83 = (t81 + 4);
    t86 = *((unsigned int *)t81);
    t87 = (t86 >> 3);
    *((unsigned int *)t80) = t87;
    t88 = *((unsigned int *)t83);
    t89 = (t88 >> 3);
    *((unsigned int *)t82) = t89;
    t90 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t90 & 3U);
    t91 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t91 & 3U);
    t84 = (t0 + 1840);
    t85 = (t84 + 36U);
    t92 = *((char **)t85);
    xsi_vlogfile_write(1, 0, 0, ng18, 8, t0, (char)118, t7, 3, (char)118, t32, 3, (char)118, t44, 2, (char)118, t56, 3, (char)118, t68, 3, (char)118, t80, 2, (char)119, t92, 32);
    goto LAB82;

LAB86:    *((unsigned int *)t6) = 1;
    goto LAB87;

LAB88:    xsi_set_current_line(157, ng0);

LAB91:    xsi_set_current_line(158, ng0);
    t14 = (t0 + 2116);
    t15 = (t14 + 36U);
    t21 = *((char **)t15);
    memset(t7, 0, 8);
    t22 = (t7 + 4);
    t23 = (t21 + 4);
    t26 = *((unsigned int *)t21);
    t27 = (t26 >> 5);
    *((unsigned int *)t7) = t27;
    t28 = *((unsigned int *)t23);
    t29 = (t28 >> 5);
    *((unsigned int *)t22) = t29;
    t30 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t30 & 7U);
    t31 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t31 & 7U);
    t24 = (t0 + 2116);
    t25 = (t24 + 36U);
    t33 = *((char **)t25);
    memset(t32, 0, 8);
    t34 = (t32 + 4);
    t35 = (t33 + 4);
    t38 = *((unsigned int *)t33);
    t39 = (t38 >> 0);
    *((unsigned int *)t32) = t39;
    t40 = *((unsigned int *)t35);
    t41 = (t40 >> 0);
    *((unsigned int *)t34) = t41;
    t42 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t42 & 7U);
    t43 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t43 & 7U);
    t36 = (t0 + 2116);
    t37 = (t36 + 36U);
    t45 = *((char **)t37);
    memset(t44, 0, 8);
    t46 = (t44 + 4);
    t47 = (t45 + 4);
    t50 = *((unsigned int *)t45);
    t51 = (t50 >> 3);
    *((unsigned int *)t44) = t51;
    t52 = *((unsigned int *)t47);
    t53 = (t52 >> 3);
    *((unsigned int *)t46) = t53;
    t54 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t54 & 3U);
    t55 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t55 & 3U);
    t48 = (t0 + 2208);
    t49 = (t48 + 36U);
    t57 = *((char **)t49);
    memset(t56, 0, 8);
    t58 = (t56 + 4);
    t59 = (t57 + 4);
    t62 = *((unsigned int *)t57);
    t63 = (t62 >> 5);
    *((unsigned int *)t56) = t63;
    t64 = *((unsigned int *)t59);
    t65 = (t64 >> 5);
    *((unsigned int *)t58) = t65;
    t66 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t66 & 7U);
    t67 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t67 & 7U);
    t60 = (t0 + 2208);
    t61 = (t60 + 36U);
    t69 = *((char **)t61);
    memset(t68, 0, 8);
    t70 = (t68 + 4);
    t71 = (t69 + 4);
    t74 = *((unsigned int *)t69);
    t75 = (t74 >> 0);
    *((unsigned int *)t68) = t75;
    t76 = *((unsigned int *)t71);
    t77 = (t76 >> 0);
    *((unsigned int *)t70) = t77;
    t78 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t78 & 7U);
    t79 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t79 & 7U);
    t72 = (t0 + 2208);
    t73 = (t72 + 36U);
    t81 = *((char **)t73);
    memset(t80, 0, 8);
    t82 = (t80 + 4);
    t83 = (t81 + 4);
    t86 = *((unsigned int *)t81);
    t87 = (t86 >> 3);
    *((unsigned int *)t80) = t87;
    t88 = *((unsigned int *)t83);
    t89 = (t88 >> 3);
    *((unsigned int *)t82) = t89;
    t90 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t90 & 3U);
    t91 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t91 & 3U);
    t84 = (t0 + 1840);
    t85 = (t84 + 36U);
    t92 = *((char **)t85);
    xsi_vlogfile_write(1, 0, 0, ng18, 8, t0, (char)118, t7, 3, (char)118, t32, 3, (char)118, t44, 2, (char)118, t56, 3, (char)118, t68, 3, (char)118, t80, 2, (char)119, t92, 32);
    goto LAB90;

}


extern void work_m_00000000001142193658_0115765590_init()
{
	static char *pe[] = {(void *)Initial_74_0,(void *)Always_117_1,(void *)Always_126_2};
	xsi_register_didat("work_m_00000000001142193658_0115765590", "isim/test_traffic_light_controller_isim_beh.exe.sim/work/m_00000000001142193658_0115765590.didat");
	xsi_register_executes(pe);
}
