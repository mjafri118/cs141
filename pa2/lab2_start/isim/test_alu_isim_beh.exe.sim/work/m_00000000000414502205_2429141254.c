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
static const char *ng0 = "//vmware-host/Shared Folders/shared_folder/cs141/pa2/lab2_start/test_alu.v";
static int ng1[] = {0, 0};
static int ng2[] = {34, 0};
static int ng3[] = {36, 0};
static int ng4[] = {38, 0};
static unsigned int ng5[] = {0U, 0U};
static unsigned int ng6[] = {7U, 0U};
static int ng7[] = {1, 0};
static unsigned int ng8[] = {1879048174U, 0U};
static unsigned int ng9[] = {1878523902U, 0U};
static unsigned int ng10[] = {5U, 0U};
static unsigned int ng11[] = {2415915007U, 0U};
static unsigned int ng12[] = {2415394814U, 0U};
static int ng13[] = {31, 0};
static unsigned int ng14[] = {6U, 0U};
static unsigned int ng15[] = {1U, 0U};
static const char *ng16 = "ERROR: AND:  op_code = %b, X = %h, Y = %h, Z = %h";
static unsigned int ng17[] = {2U, 0U};
static const char *ng18 = "ERROR: XOR:  op_code = %b, X = %h, Y = %h, Z = %h";
static const char *ng19 = "ERROR: OR:  op_code = %b, X = %h, Y = %h, Z = %h";
static unsigned int ng20[] = {3U, 0U};
static const char *ng21 = "ERROR: NOR:  op_code = %b, X = %h, Y = %h, Z = %h";
static const char *ng22 = "ERROR: ADD (wrong number):  op_code = %b, X = %h, Y = %h, Z = %h, overflow = %b";
static const char *ng23 = "WARNING: ADD (overflow):  op_code = %b, X = %h, Y = %h, Z = %h, overflow = %b";
static const char *ng24 = "ERROR: SUB (wrong number):  op_code = %b, X = %h, Y = %h, Z = %h, overflow = %b";
static const char *ng25 = "WARNING: SUB (overflow):  op_code = %b, X = %h, Y = %h, Z = %h, overflow = %b";
static unsigned int ng26[] = {8U, 0U};
static unsigned int ng27[] = {9U, 0U};
static unsigned int ng28[] = {10U, 0U};
static const char *ng29 = "ERROR HAPPENED! invalid op code, Z was not zero, op_code = %b, X = %h, Y = %h, Z = %h";



static void Initial_38_0(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
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
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    int t29;

LAB0:    t1 = (t0 + 1904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);

LAB4:    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(52, ng0);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB5:    t2 = (t0 + 1104);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1804);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB24;

LAB1:    return;
LAB7:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(52, ng0);

LAB12:    xsi_set_current_line(53, ng0);
    t28 = (t0 + 1804);
    xsi_process_wait(t28, 10000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(54, ng0);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB14:    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB16;

LAB15:    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB16;

LAB19:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB17;

LAB18:    t22 = (t6 + 4);
    t9 = *((unsigned int *)t22);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1104);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1104);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB5;

LAB16:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB18;

LAB17:    *((unsigned int *)t6) = 1;
    goto LAB18;

LAB20:    xsi_set_current_line(54, ng0);

LAB22:    xsi_set_current_line(55, ng0);
    t28 = (t0 + 1804);
    xsi_process_wait(t28, 10000LL);
    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB23:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 4, t5, 32);
    t7 = (t0 + 1288);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    goto LAB14;

LAB24:    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1804);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB25:    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1104);
    t4 = (t0 + 1104);
    t5 = (t4 + 44U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng13)));
    xsi_vlog_generic_convert_bit_index(t6, t7, 2, t8, 32, 1);
    t21 = (t6 + 4);
    t9 = *((unsigned int *)t21);
    t29 = (!(t9));
    if (t29 == 1)
        goto LAB26;

LAB27:    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1196);
    t4 = (t0 + 1196);
    t5 = (t4 + 44U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng13)));
    xsi_vlog_generic_convert_bit_index(t6, t7, 2, t8, 32, 1);
    t21 = (t6 + 4);
    t9 = *((unsigned int *)t21);
    t29 = (!(t9));
    if (t29 == 1)
        goto LAB28;

LAB29:    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1804);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB30;
    goto LAB1;

LAB26:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t6), 1);
    goto LAB27;

LAB28:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t6), 1);
    goto LAB29;

LAB30:    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1804);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB31:    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 1804);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB32;
    goto LAB1;

LAB32:    xsi_set_current_line(87, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}

static void Always_94_1(char *t0)
{
    char t14[8];
    char t46[8];
    char t66[8];
    char t71[8];
    char t72[8];
    char t73[8];
    char t91[8];
    char t92[8];
    char t93[8];
    char t94[8];
    char t95[8];
    char t131[8];
    char t144[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
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
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
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
    char *t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    char *t122;
    char *t123;
    char *t124;
    char *t125;
    char *t126;
    char *t127;
    char *t128;
    char *t129;
    char *t130;
    char *t132;
    char *t133;
    char *t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    char *t143;
    char *t145;
    char *t146;

LAB0:    t1 = (t0 + 2048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 2244);
    *((int *)t2) = 1;
    t3 = (t0 + 2076);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(94, ng0);

LAB5:    xsi_set_current_line(95, ng0);
    t4 = (t0 + 1948);
    xsi_process_wait(t4, 1000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);

LAB7:    t5 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t5, 4);
    if (t6 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng20)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng26)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng27)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng28)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB26;

LAB27:
LAB29:
LAB28:    xsi_set_current_line(161, ng0);

LAB191:    xsi_set_current_line(163, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t14, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB193;

LAB192:    t5 = (t3 + 4);
    t7 = (t2 + 4);
    if (*((unsigned int *)t5) != *((unsigned int *)t7))
        goto LAB193;

LAB194:    t8 = (t14 + 4);
    t15 = *((unsigned int *)t8);
    t16 = (~(t15));
    t17 = *((unsigned int *)t14);
    t21 = (t17 & t16);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB195;

LAB196:
LAB197:
LAB30:    goto LAB2;

LAB8:    xsi_set_current_line(101, ng0);

LAB31:    xsi_set_current_line(103, ng0);
    t7 = (t0 + 600U);
    t8 = *((char **)t7);
    t7 = (t0 + 1104);
    t9 = (t7 + 36U);
    t10 = *((char **)t9);
    t11 = (t0 + 1196);
    t12 = (t11 + 36U);
    t13 = *((char **)t12);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t13);
    t17 = (t15 & t16);
    *((unsigned int *)t14) = t17;
    t18 = (t10 + 4);
    t19 = (t13 + 4);
    t20 = (t14 + 4);
    t21 = *((unsigned int *)t18);
    t22 = *((unsigned int *)t19);
    t23 = (t21 | t22);
    *((unsigned int *)t20) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB32;

LAB33:
LAB34:    memset(t46, 0, 8);
    if (*((unsigned int *)t8) != *((unsigned int *)t14))
        goto LAB36;

LAB35:    t47 = (t8 + 4);
    t48 = (t14 + 4);
    if (*((unsigned int *)t47) != *((unsigned int *)t48))
        goto LAB36;

LAB37:    t49 = (t46 + 4);
    t50 = *((unsigned int *)t49);
    t51 = (~(t50));
    t52 = *((unsigned int *)t46);
    t53 = (t52 & t51);
    t54 = (t53 != 0);
    if (t54 > 0)
        goto LAB38;

LAB39:
LAB40:    goto LAB30;

LAB10:    xsi_set_current_line(109, ng0);

LAB42:    xsi_set_current_line(110, ng0);
    t3 = (t0 + 600U);
    t5 = *((char **)t3);
    t3 = (t0 + 1104);
    t7 = (t3 + 36U);
    t8 = *((char **)t7);
    t9 = (t0 + 1196);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    *((unsigned int *)t14) = t17;
    t12 = (t8 + 4);
    t13 = (t11 + 4);
    t18 = (t14 + 4);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    *((unsigned int *)t18) = t23;
    t24 = *((unsigned int *)t18);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB43;

LAB44:
LAB45:    memset(t46, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t14))
        goto LAB47;

LAB46:    t19 = (t5 + 4);
    t20 = (t14 + 4);
    if (*((unsigned int *)t19) != *((unsigned int *)t20))
        goto LAB47;

LAB48:    t28 = (t46 + 4);
    t30 = *((unsigned int *)t28);
    t31 = (~(t30));
    t32 = *((unsigned int *)t46);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB49;

LAB50:
LAB51:    goto LAB30;

LAB12:    xsi_set_current_line(115, ng0);

LAB53:    xsi_set_current_line(116, ng0);
    t3 = (t0 + 600U);
    t5 = *((char **)t3);
    t3 = (t0 + 1104);
    t7 = (t3 + 36U);
    t8 = *((char **)t7);
    t9 = (t0 + 1196);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t11);
    t17 = (t15 | t16);
    *((unsigned int *)t14) = t17;
    t12 = (t8 + 4);
    t13 = (t11 + 4);
    t18 = (t14 + 4);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    *((unsigned int *)t18) = t23;
    t24 = *((unsigned int *)t18);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB54;

LAB55:
LAB56:    memset(t46, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t14))
        goto LAB58;

LAB57:    t28 = (t5 + 4);
    t29 = (t14 + 4);
    if (*((unsigned int *)t28) != *((unsigned int *)t29))
        goto LAB58;

LAB59:    t47 = (t46 + 4);
    t42 = *((unsigned int *)t47);
    t43 = (~(t42));
    t44 = *((unsigned int *)t46);
    t45 = (t44 & t43);
    t50 = (t45 != 0);
    if (t50 > 0)
        goto LAB60;

LAB61:
LAB62:    goto LAB30;

LAB14:    xsi_set_current_line(121, ng0);

LAB64:    xsi_set_current_line(122, ng0);
    t3 = (t0 + 600U);
    t5 = *((char **)t3);
    t3 = (t0 + 1104);
    t7 = (t3 + 36U);
    t8 = *((char **)t7);
    t9 = (t0 + 1196);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t11);
    t17 = (t15 | t16);
    *((unsigned int *)t46) = t17;
    t12 = (t8 + 4);
    t13 = (t11 + 4);
    t18 = (t46 + 4);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    *((unsigned int *)t18) = t23;
    t24 = *((unsigned int *)t18);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB65;

LAB66:
LAB67:    memset(t14, 0, 8);
    t28 = (t14 + 4);
    t29 = (t46 + 4);
    t42 = *((unsigned int *)t46);
    t43 = (~(t42));
    *((unsigned int *)t14) = t43;
    *((unsigned int *)t28) = 0;
    if (*((unsigned int *)t29) != 0)
        goto LAB69;

LAB68:    t52 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t52 & 4294967295U);
    t53 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t53 & 4294967295U);
    memset(t66, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t14))
        goto LAB71;

LAB70:    t47 = (t5 + 4);
    t48 = (t14 + 4);
    if (*((unsigned int *)t47) != *((unsigned int *)t48))
        goto LAB71;

LAB72:    t49 = (t66 + 4);
    t54 = *((unsigned int *)t49);
    t67 = (~(t54));
    t68 = *((unsigned int *)t66);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB73;

LAB74:
LAB75:    goto LAB30;

LAB16:    xsi_set_current_line(127, ng0);

LAB77:    xsi_set_current_line(128, ng0);
    t3 = (t0 + 600U);
    t5 = *((char **)t3);
    t3 = (t0 + 1104);
    t7 = (t3 + 36U);
    t8 = *((char **)t7);
    t9 = (t0 + 1196);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t8, 32, t11, 32);
    memset(t46, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t14))
        goto LAB79;

LAB78:    t12 = (t5 + 4);
    t13 = (t14 + 4);
    if (*((unsigned int *)t12) != *((unsigned int *)t13))
        goto LAB79;

LAB80:    memset(t66, 0, 8);
    t18 = (t46 + 4);
    t15 = *((unsigned int *)t18);
    t16 = (~(t15));
    t17 = *((unsigned int *)t46);
    t21 = (t17 & t16);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB81;

LAB82:    if (*((unsigned int *)t18) != 0)
        goto LAB83;

LAB84:    t20 = (t66 + 4);
    t23 = *((unsigned int *)t66);
    t24 = *((unsigned int *)t20);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB85;

LAB86:    memcpy(t73, t66, 8);

LAB87:    t61 = (t73 + 4);
    t78 = *((unsigned int *)t61);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (t80 & t79);
    t82 = (t81 != 0);
    if (t82 > 0)
        goto LAB98;

LAB99:
LAB100:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t2);
    t17 = (t15 ^ t16);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 ^ t22);
    t24 = (t17 | t23);
    t25 = *((unsigned int *)t5);
    t26 = *((unsigned int *)t7);
    t27 = (t25 | t26);
    t30 = (~(t27));
    t31 = (t24 & t30);
    if (t31 != 0)
        goto LAB105;

LAB102:    if (t27 != 0)
        goto LAB104;

LAB103:    *((unsigned int *)t14) = 1;

LAB105:    t9 = (t14 + 4);
    t32 = *((unsigned int *)t9);
    t33 = (~(t32));
    t34 = *((unsigned int *)t14);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB106;

LAB107:
LAB108:    goto LAB30;

LAB18:    xsi_set_current_line(136, ng0);

LAB110:    xsi_set_current_line(137, ng0);
    t3 = (t0 + 600U);
    t5 = *((char **)t3);
    t3 = (t0 + 576U);
    t7 = (t3 + 44U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng13)));
    xsi_vlog_generic_get_index_select_value(t14, 32, t5, t8, 2, t9, 32, 1);
    t10 = ((char*)((ng7)));
    memset(t46, 0, 8);
    t11 = (t14 + 4);
    t12 = (t10 + 4);
    t15 = *((unsigned int *)t14);
    t16 = *((unsigned int *)t10);
    t17 = (t15 ^ t16);
    t21 = *((unsigned int *)t11);
    t22 = *((unsigned int *)t12);
    t23 = (t21 ^ t22);
    t24 = (t17 | t23);
    t25 = *((unsigned int *)t11);
    t26 = *((unsigned int *)t12);
    t27 = (t25 | t26);
    t30 = (~(t27));
    t31 = (t24 & t30);
    if (t31 != 0)
        goto LAB114;

LAB111:    if (t27 != 0)
        goto LAB113;

LAB112:    *((unsigned int *)t46) = 1;

LAB114:    t18 = (t46 + 4);
    t32 = *((unsigned int *)t18);
    t33 = (~(t32));
    t34 = *((unsigned int *)t46);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB115;

LAB116:
LAB117:    xsi_set_current_line(143, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = (t0 + 576U);
    t5 = (t2 + 44U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng13)));
    xsi_vlog_generic_get_index_select_value(t14, 32, t3, t7, 2, t8, 32, 1);
    t9 = ((char*)((ng1)));
    memset(t46, 0, 8);
    t10 = (t14 + 4);
    t11 = (t9 + 4);
    t15 = *((unsigned int *)t14);
    t16 = *((unsigned int *)t9);
    t17 = (t15 ^ t16);
    t21 = *((unsigned int *)t10);
    t22 = *((unsigned int *)t11);
    t23 = (t21 ^ t22);
    t24 = (t17 | t23);
    t25 = *((unsigned int *)t10);
    t26 = *((unsigned int *)t11);
    t27 = (t25 | t26);
    t30 = (~(t27));
    t31 = (t24 & t30);
    if (t31 != 0)
        goto LAB150;

LAB147:    if (t27 != 0)
        goto LAB149;

LAB148:    *((unsigned int *)t46) = 1;

LAB150:    t13 = (t46 + 4);
    t32 = *((unsigned int *)t13);
    t33 = (~(t32));
    t34 = *((unsigned int *)t46);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB151;

LAB152:
LAB153:    xsi_set_current_line(149, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t2);
    t17 = (t15 ^ t16);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 ^ t22);
    t24 = (t17 | t23);
    t25 = *((unsigned int *)t5);
    t26 = *((unsigned int *)t7);
    t27 = (t25 | t26);
    t30 = (~(t27));
    t31 = (t24 & t30);
    if (t31 != 0)
        goto LAB182;

LAB179:    if (t27 != 0)
        goto LAB181;

LAB180:    *((unsigned int *)t14) = 1;

LAB182:    t9 = (t14 + 4);
    t32 = *((unsigned int *)t9);
    t33 = (~(t32));
    t34 = *((unsigned int *)t14);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB183;

LAB184:
LAB185:    goto LAB30;

LAB20:    xsi_set_current_line(153, ng0);

LAB187:    goto LAB30;

LAB22:    xsi_set_current_line(155, ng0);

LAB188:    goto LAB30;

LAB24:    xsi_set_current_line(157, ng0);

LAB189:    goto LAB30;

LAB26:    xsi_set_current_line(159, ng0);

LAB190:    goto LAB30;

LAB32:    t26 = *((unsigned int *)t14);
    t27 = *((unsigned int *)t20);
    *((unsigned int *)t14) = (t26 | t27);
    t28 = (t10 + 4);
    t29 = (t13 + 4);
    t30 = *((unsigned int *)t10);
    t31 = (~(t30));
    t32 = *((unsigned int *)t28);
    t33 = (~(t32));
    t34 = *((unsigned int *)t13);
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
    goto LAB34;

LAB36:    *((unsigned int *)t46) = 1;
    goto LAB37;

LAB38:    xsi_set_current_line(103, ng0);

LAB41:    xsi_set_current_line(104, ng0);
    t55 = (t0 + 1288);
    t56 = (t55 + 36U);
    t57 = *((char **)t56);
    t58 = (t0 + 1104);
    t59 = (t58 + 36U);
    t60 = *((char **)t59);
    t61 = (t0 + 1196);
    t62 = (t61 + 36U);
    t63 = *((char **)t62);
    t64 = (t0 + 600U);
    t65 = *((char **)t64);
    xsi_vlogfile_write(1, 0, 0, ng16, 5, t0, (char)118, t57, 4, (char)118, t60, 32, (char)118, t63, 32, (char)118, t65, 32);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng7)));
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 32, t5, 32, t7, 32);
    t8 = (t0 + 1380);
    xsi_vlogvar_assign_value(t8, t14, 0, 0, 32);
    goto LAB40;

LAB43:    t26 = *((unsigned int *)t14);
    t27 = *((unsigned int *)t18);
    *((unsigned int *)t14) = (t26 | t27);
    goto LAB45;

LAB47:    *((unsigned int *)t46) = 1;
    goto LAB48;

LAB49:    xsi_set_current_line(110, ng0);

LAB52:    xsi_set_current_line(111, ng0);
    t29 = (t0 + 1288);
    t47 = (t29 + 36U);
    t48 = *((char **)t47);
    t49 = (t0 + 1104);
    t55 = (t49 + 36U);
    t56 = *((char **)t55);
    t57 = (t0 + 1196);
    t58 = (t57 + 36U);
    t59 = *((char **)t58);
    t60 = (t0 + 600U);
    t61 = *((char **)t60);
    xsi_vlogfile_write(1, 0, 0, ng18, 5, t0, (char)118, t48, 4, (char)118, t56, 32, (char)118, t59, 32, (char)118, t61, 32);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng7)));
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 32, t5, 32, t7, 32);
    t8 = (t0 + 1380);
    xsi_vlogvar_assign_value(t8, t14, 0, 0, 32);
    goto LAB51;

LAB54:    t26 = *((unsigned int *)t14);
    t27 = *((unsigned int *)t18);
    *((unsigned int *)t14) = (t26 | t27);
    t19 = (t8 + 4);
    t20 = (t11 + 4);
    t30 = *((unsigned int *)t19);
    t31 = (~(t30));
    t32 = *((unsigned int *)t8);
    t38 = (t32 & t31);
    t33 = *((unsigned int *)t20);
    t34 = (~(t33));
    t35 = *((unsigned int *)t11);
    t39 = (t35 & t34);
    t36 = (~(t38));
    t37 = (~(t39));
    t40 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t40 & t36);
    t41 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t41 & t37);
    goto LAB56;

LAB58:    *((unsigned int *)t46) = 1;
    goto LAB59;

LAB60:    xsi_set_current_line(116, ng0);

LAB63:    xsi_set_current_line(117, ng0);
    t48 = (t0 + 1288);
    t49 = (t48 + 36U);
    t55 = *((char **)t49);
    t56 = (t0 + 1104);
    t57 = (t56 + 36U);
    t58 = *((char **)t57);
    t59 = (t0 + 1196);
    t60 = (t59 + 36U);
    t61 = *((char **)t60);
    t62 = (t0 + 600U);
    t63 = *((char **)t62);
    xsi_vlogfile_write(1, 0, 0, ng19, 5, t0, (char)118, t55, 4, (char)118, t58, 32, (char)118, t61, 32, (char)118, t63, 32);
    xsi_set_current_line(118, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng7)));
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 32, t5, 32, t7, 32);
    t8 = (t0 + 1380);
    xsi_vlogvar_assign_value(t8, t14, 0, 0, 32);
    goto LAB62;

LAB65:    t26 = *((unsigned int *)t46);
    t27 = *((unsigned int *)t18);
    *((unsigned int *)t46) = (t26 | t27);
    t19 = (t8 + 4);
    t20 = (t11 + 4);
    t30 = *((unsigned int *)t19);
    t31 = (~(t30));
    t32 = *((unsigned int *)t8);
    t38 = (t32 & t31);
    t33 = *((unsigned int *)t20);
    t34 = (~(t33));
    t35 = *((unsigned int *)t11);
    t39 = (t35 & t34);
    t36 = (~(t38));
    t37 = (~(t39));
    t40 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t40 & t36);
    t41 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t41 & t37);
    goto LAB67;

LAB69:    t44 = *((unsigned int *)t14);
    t45 = *((unsigned int *)t29);
    *((unsigned int *)t14) = (t44 | t45);
    t50 = *((unsigned int *)t28);
    t51 = *((unsigned int *)t29);
    *((unsigned int *)t28) = (t50 | t51);
    goto LAB68;

LAB71:    *((unsigned int *)t66) = 1;
    goto LAB72;

LAB73:    xsi_set_current_line(122, ng0);

LAB76:    xsi_set_current_line(123, ng0);
    t55 = (t0 + 1288);
    t56 = (t55 + 36U);
    t57 = *((char **)t56);
    t58 = (t0 + 1104);
    t59 = (t58 + 36U);
    t60 = *((char **)t59);
    t61 = (t0 + 1196);
    t62 = (t61 + 36U);
    t63 = *((char **)t62);
    t64 = (t0 + 600U);
    t65 = *((char **)t64);
    xsi_vlogfile_write(1, 0, 0, ng21, 5, t0, (char)118, t57, 4, (char)118, t60, 32, (char)118, t63, 32, (char)118, t65, 32);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng7)));
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 32, t5, 32, t7, 32);
    t8 = (t0 + 1380);
    xsi_vlogvar_assign_value(t8, t14, 0, 0, 32);
    goto LAB75;

LAB79:    *((unsigned int *)t46) = 1;
    goto LAB80;

LAB81:    *((unsigned int *)t66) = 1;
    goto LAB84;

LAB83:    t19 = (t66 + 4);
    *((unsigned int *)t66) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB84;

LAB85:    t28 = (t0 + 784U);
    t29 = *((char **)t28);
    t28 = ((char*)((ng7)));
    memset(t71, 0, 8);
    if (*((unsigned int *)t29) != *((unsigned int *)t28))
        goto LAB89;

LAB88:    t47 = (t29 + 4);
    t48 = (t28 + 4);
    if (*((unsigned int *)t47) != *((unsigned int *)t48))
        goto LAB89;

LAB90:    memset(t72, 0, 8);
    t49 = (t71 + 4);
    t26 = *((unsigned int *)t49);
    t27 = (~(t26));
    t30 = *((unsigned int *)t71);
    t31 = (t30 & t27);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB91;

LAB92:    if (*((unsigned int *)t49) != 0)
        goto LAB93;

LAB94:    t33 = *((unsigned int *)t66);
    t34 = *((unsigned int *)t72);
    t35 = (t33 & t34);
    *((unsigned int *)t73) = t35;
    t56 = (t66 + 4);
    t57 = (t72 + 4);
    t58 = (t73 + 4);
    t36 = *((unsigned int *)t56);
    t37 = *((unsigned int *)t57);
    t40 = (t36 | t37);
    *((unsigned int *)t58) = t40;
    t41 = *((unsigned int *)t58);
    t42 = (t41 != 0);
    if (t42 == 1)
        goto LAB95;

LAB96:
LAB97:    goto LAB87;

LAB89:    *((unsigned int *)t71) = 1;
    goto LAB90;

LAB91:    *((unsigned int *)t72) = 1;
    goto LAB94;

LAB93:    t55 = (t72 + 4);
    *((unsigned int *)t72) = 1;
    *((unsigned int *)t55) = 1;
    goto LAB94;

LAB95:    t43 = *((unsigned int *)t73);
    t44 = *((unsigned int *)t58);
    *((unsigned int *)t73) = (t43 | t44);
    t59 = (t66 + 4);
    t60 = (t72 + 4);
    t45 = *((unsigned int *)t66);
    t50 = (~(t45));
    t51 = *((unsigned int *)t59);
    t52 = (~(t51));
    t53 = *((unsigned int *)t72);
    t54 = (~(t53));
    t67 = *((unsigned int *)t60);
    t68 = (~(t67));
    t38 = (t50 & t52);
    t39 = (t54 & t68);
    t69 = (~(t38));
    t70 = (~(t39));
    t74 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t74 & t69);
    t75 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t75 & t70);
    t76 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t76 & t69);
    t77 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t77 & t70);
    goto LAB97;

LAB98:    xsi_set_current_line(128, ng0);

LAB101:    xsi_set_current_line(129, ng0);
    t62 = (t0 + 1288);
    t63 = (t62 + 36U);
    t64 = *((char **)t63);
    t65 = (t0 + 1104);
    t83 = (t65 + 36U);
    t84 = *((char **)t83);
    t85 = (t0 + 1196);
    t86 = (t85 + 36U);
    t87 = *((char **)t86);
    t88 = (t0 + 600U);
    t89 = *((char **)t88);
    t88 = (t0 + 784U);
    t90 = *((char **)t88);
    xsi_vlogfile_write(1, 0, 0, ng22, 6, t0, (char)118, t64, 4, (char)118, t84, 32, (char)118, t87, 32, (char)118, t89, 32, (char)118, t90, 1);
    xsi_set_current_line(130, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng7)));
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 32, t5, 32, t7, 32);
    t8 = (t0 + 1380);
    xsi_vlogvar_assign_value(t8, t14, 0, 0, 32);
    goto LAB100;

LAB104:    t8 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB105;

LAB106:    xsi_set_current_line(132, ng0);

LAB109:    xsi_set_current_line(133, ng0);
    t10 = (t0 + 1288);
    t11 = (t10 + 36U);
    t12 = *((char **)t11);
    t13 = (t0 + 1104);
    t18 = (t13 + 36U);
    t19 = *((char **)t18);
    t20 = (t0 + 1196);
    t28 = (t20 + 36U);
    t29 = *((char **)t28);
    t47 = (t0 + 600U);
    t48 = *((char **)t47);
    t47 = (t0 + 784U);
    t49 = *((char **)t47);
    xsi_vlogfile_write(1, 0, 0, ng23, 6, t0, (char)118, t12, 4, (char)118, t19, 32, (char)118, t29, 32, (char)118, t48, 32, (char)118, t49, 1);
    goto LAB108;

LAB113:    t13 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB114;

LAB115:    xsi_set_current_line(137, ng0);

LAB118:    xsi_set_current_line(138, ng0);
    t19 = (t0 + 600U);
    t20 = *((char **)t19);
    memset(t66, 0, 8);
    t19 = (t66 + 4);
    t28 = (t20 + 4);
    t37 = *((unsigned int *)t20);
    t40 = (~(t37));
    *((unsigned int *)t66) = t40;
    *((unsigned int *)t19) = 0;
    if (*((unsigned int *)t28) != 0)
        goto LAB120;

LAB119:    t45 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t45 & 4294967295U);
    t50 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t50 & 4294967295U);
    t29 = ((char*)((ng7)));
    memset(t71, 0, 8);
    xsi_vlog_unsigned_add(t71, 32, t66, 32, t29, 32);
    t47 = (t0 + 1104);
    t48 = (t47 + 36U);
    t49 = *((char **)t48);
    t55 = (t0 + 1196);
    t56 = (t55 + 36U);
    t57 = *((char **)t56);
    memset(t73, 0, 8);
    xsi_vlog_unsigned_minus(t73, 32, t49, 32, t57, 32);
    memset(t72, 0, 8);
    xsi_vlog_unsigned_unary_minus(t72, 32, t73, 32);
    memset(t91, 0, 8);
    if (*((unsigned int *)t71) != *((unsigned int *)t72))
        goto LAB122;

LAB121:    t58 = (t71 + 4);
    t59 = (t72 + 4);
    if (*((unsigned int *)t58) != *((unsigned int *)t59))
        goto LAB122;

LAB123:    memset(t92, 0, 8);
    t60 = (t91 + 4);
    t51 = *((unsigned int *)t60);
    t52 = (~(t51));
    t53 = *((unsigned int *)t91);
    t54 = (t53 & t52);
    t67 = (t54 & 1U);
    if (t67 != 0)
        goto LAB124;

LAB125:    if (*((unsigned int *)t60) != 0)
        goto LAB126;

LAB127:    t62 = (t92 + 4);
    t68 = *((unsigned int *)t92);
    t69 = *((unsigned int *)t62);
    t70 = (t68 || t69);
    if (t70 > 0)
        goto LAB128;

LAB129:    memcpy(t95, t92, 8);

LAB130:    t116 = (t95 + 4);
    t117 = *((unsigned int *)t116);
    t118 = (~(t117));
    t119 = *((unsigned int *)t95);
    t120 = (t119 & t118);
    t121 = (t120 != 0);
    if (t121 > 0)
        goto LAB141;

LAB142:
LAB143:    goto LAB117;

LAB120:    t41 = *((unsigned int *)t66);
    t42 = *((unsigned int *)t28);
    *((unsigned int *)t66) = (t41 | t42);
    t43 = *((unsigned int *)t19);
    t44 = *((unsigned int *)t28);
    *((unsigned int *)t19) = (t43 | t44);
    goto LAB119;

LAB122:    *((unsigned int *)t91) = 1;
    goto LAB123;

LAB124:    *((unsigned int *)t92) = 1;
    goto LAB127;

LAB126:    t61 = (t92 + 4);
    *((unsigned int *)t92) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB127;

LAB128:    t63 = (t0 + 784U);
    t64 = *((char **)t63);
    t63 = ((char*)((ng7)));
    memset(t93, 0, 8);
    if (*((unsigned int *)t64) != *((unsigned int *)t63))
        goto LAB132;

LAB131:    t65 = (t64 + 4);
    t83 = (t63 + 4);
    if (*((unsigned int *)t65) != *((unsigned int *)t83))
        goto LAB132;

LAB133:    memset(t94, 0, 8);
    t84 = (t93 + 4);
    t74 = *((unsigned int *)t84);
    t75 = (~(t74));
    t76 = *((unsigned int *)t93);
    t77 = (t76 & t75);
    t78 = (t77 & 1U);
    if (t78 != 0)
        goto LAB134;

LAB135:    if (*((unsigned int *)t84) != 0)
        goto LAB136;

LAB137:    t79 = *((unsigned int *)t92);
    t80 = *((unsigned int *)t94);
    t81 = (t79 & t80);
    *((unsigned int *)t95) = t81;
    t86 = (t92 + 4);
    t87 = (t94 + 4);
    t88 = (t95 + 4);
    t82 = *((unsigned int *)t86);
    t96 = *((unsigned int *)t87);
    t97 = (t82 | t96);
    *((unsigned int *)t88) = t97;
    t98 = *((unsigned int *)t88);
    t99 = (t98 != 0);
    if (t99 == 1)
        goto LAB138;

LAB139:
LAB140:    goto LAB130;

LAB132:    *((unsigned int *)t93) = 1;
    goto LAB133;

LAB134:    *((unsigned int *)t94) = 1;
    goto LAB137;

LAB136:    t85 = (t94 + 4);
    *((unsigned int *)t94) = 1;
    *((unsigned int *)t85) = 1;
    goto LAB137;

LAB138:    t100 = *((unsigned int *)t95);
    t101 = *((unsigned int *)t88);
    *((unsigned int *)t95) = (t100 | t101);
    t89 = (t92 + 4);
    t90 = (t94 + 4);
    t102 = *((unsigned int *)t92);
    t103 = (~(t102));
    t104 = *((unsigned int *)t89);
    t105 = (~(t104));
    t106 = *((unsigned int *)t94);
    t107 = (~(t106));
    t108 = *((unsigned int *)t90);
    t109 = (~(t108));
    t38 = (t103 & t105);
    t39 = (t107 & t109);
    t110 = (~(t38));
    t111 = (~(t39));
    t112 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t112 & t110);
    t113 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t113 & t111);
    t114 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t114 & t110);
    t115 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t115 & t111);
    goto LAB140;

LAB141:    xsi_set_current_line(138, ng0);

LAB144:    xsi_set_current_line(139, ng0);
    t122 = (t0 + 1288);
    t123 = (t122 + 36U);
    t124 = *((char **)t123);
    t125 = (t0 + 1104);
    t126 = (t125 + 36U);
    t127 = *((char **)t126);
    t128 = (t0 + 1196);
    t129 = (t128 + 36U);
    t130 = *((char **)t129);
    t132 = (t0 + 600U);
    t133 = *((char **)t132);
    memset(t131, 0, 8);
    t132 = (t131 + 4);
    t134 = (t133 + 4);
    t135 = *((unsigned int *)t133);
    t136 = (~(t135));
    *((unsigned int *)t131) = t136;
    *((unsigned int *)t132) = 0;
    if (*((unsigned int *)t134) != 0)
        goto LAB146;

LAB145:    t141 = *((unsigned int *)t131);
    *((unsigned int *)t131) = (t141 & 4294967295U);
    t142 = *((unsigned int *)t132);
    *((unsigned int *)t132) = (t142 & 4294967295U);
    t143 = ((char*)((ng7)));
    memset(t144, 0, 8);
    xsi_vlog_unsigned_add(t144, 32, t131, 32, t143, 32);
    t145 = (t0 + 784U);
    t146 = *((char **)t145);
    xsi_vlogfile_write(1, 0, 0, ng24, 6, t0, (char)118, t124, 4, (char)118, t127, 32, (char)118, t130, 32, (char)118, t144, 32, (char)118, t146, 1);
    xsi_set_current_line(140, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng7)));
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 32, t5, 32, t7, 32);
    t8 = (t0 + 1380);
    xsi_vlogvar_assign_value(t8, t14, 0, 0, 32);
    goto LAB143;

LAB146:    t137 = *((unsigned int *)t131);
    t138 = *((unsigned int *)t134);
    *((unsigned int *)t131) = (t137 | t138);
    t139 = *((unsigned int *)t132);
    t140 = *((unsigned int *)t134);
    *((unsigned int *)t132) = (t139 | t140);
    goto LAB145;

LAB149:    t12 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB150;

LAB151:    xsi_set_current_line(143, ng0);

LAB154:    xsi_set_current_line(144, ng0);
    t18 = (t0 + 600U);
    t19 = *((char **)t18);
    t18 = (t0 + 1104);
    t20 = (t18 + 36U);
    t28 = *((char **)t20);
    t29 = (t0 + 1196);
    t47 = (t29 + 36U);
    t48 = *((char **)t47);
    memset(t66, 0, 8);
    xsi_vlog_unsigned_minus(t66, 32, t28, 32, t48, 32);
    memset(t71, 0, 8);
    if (*((unsigned int *)t19) != *((unsigned int *)t66))
        goto LAB156;

LAB155:    t49 = (t19 + 4);
    t55 = (t66 + 4);
    if (*((unsigned int *)t49) != *((unsigned int *)t55))
        goto LAB156;

LAB157:    memset(t72, 0, 8);
    t56 = (t71 + 4);
    t37 = *((unsigned int *)t56);
    t40 = (~(t37));
    t41 = *((unsigned int *)t71);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB158;

LAB159:    if (*((unsigned int *)t56) != 0)
        goto LAB160;

LAB161:    t58 = (t72 + 4);
    t44 = *((unsigned int *)t72);
    t45 = *((unsigned int *)t58);
    t50 = (t44 || t45);
    if (t50 > 0)
        goto LAB162;

LAB163:    memcpy(t92, t72, 8);

LAB164:    t87 = (t92 + 4);
    t108 = *((unsigned int *)t87);
    t109 = (~(t108));
    t110 = *((unsigned int *)t92);
    t111 = (t110 & t109);
    t112 = (t111 != 0);
    if (t112 > 0)
        goto LAB175;

LAB176:
LAB177:    goto LAB153;

LAB156:    *((unsigned int *)t71) = 1;
    goto LAB157;

LAB158:    *((unsigned int *)t72) = 1;
    goto LAB161;

LAB160:    t57 = (t72 + 4);
    *((unsigned int *)t72) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB161;

LAB162:    t59 = (t0 + 784U);
    t60 = *((char **)t59);
    t59 = ((char*)((ng7)));
    memset(t73, 0, 8);
    if (*((unsigned int *)t60) != *((unsigned int *)t59))
        goto LAB166;

LAB165:    t61 = (t60 + 4);
    t62 = (t59 + 4);
    if (*((unsigned int *)t61) != *((unsigned int *)t62))
        goto LAB166;

LAB167:    memset(t91, 0, 8);
    t63 = (t73 + 4);
    t51 = *((unsigned int *)t63);
    t52 = (~(t51));
    t53 = *((unsigned int *)t73);
    t54 = (t53 & t52);
    t67 = (t54 & 1U);
    if (t67 != 0)
        goto LAB168;

LAB169:    if (*((unsigned int *)t63) != 0)
        goto LAB170;

LAB171:    t68 = *((unsigned int *)t72);
    t69 = *((unsigned int *)t91);
    t70 = (t68 & t69);
    *((unsigned int *)t92) = t70;
    t65 = (t72 + 4);
    t83 = (t91 + 4);
    t84 = (t92 + 4);
    t74 = *((unsigned int *)t65);
    t75 = *((unsigned int *)t83);
    t76 = (t74 | t75);
    *((unsigned int *)t84) = t76;
    t77 = *((unsigned int *)t84);
    t78 = (t77 != 0);
    if (t78 == 1)
        goto LAB172;

LAB173:
LAB174:    goto LAB164;

LAB166:    *((unsigned int *)t73) = 1;
    goto LAB167;

LAB168:    *((unsigned int *)t91) = 1;
    goto LAB171;

LAB170:    t64 = (t91 + 4);
    *((unsigned int *)t91) = 1;
    *((unsigned int *)t64) = 1;
    goto LAB171;

LAB172:    t79 = *((unsigned int *)t92);
    t80 = *((unsigned int *)t84);
    *((unsigned int *)t92) = (t79 | t80);
    t85 = (t72 + 4);
    t86 = (t91 + 4);
    t81 = *((unsigned int *)t72);
    t82 = (~(t81));
    t96 = *((unsigned int *)t85);
    t97 = (~(t96));
    t98 = *((unsigned int *)t91);
    t99 = (~(t98));
    t100 = *((unsigned int *)t86);
    t101 = (~(t100));
    t6 = (t82 & t97);
    t38 = (t99 & t101);
    t102 = (~(t6));
    t103 = (~(t38));
    t104 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t104 & t102);
    t105 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t105 & t103);
    t106 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t106 & t102);
    t107 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t107 & t103);
    goto LAB174;

LAB175:    xsi_set_current_line(144, ng0);

LAB178:    xsi_set_current_line(145, ng0);
    t88 = (t0 + 1288);
    t89 = (t88 + 36U);
    t90 = *((char **)t89);
    t116 = (t0 + 1104);
    t122 = (t116 + 36U);
    t123 = *((char **)t122);
    t124 = (t0 + 1196);
    t125 = (t124 + 36U);
    t126 = *((char **)t125);
    t127 = (t0 + 600U);
    t128 = *((char **)t127);
    t127 = (t0 + 784U);
    t129 = *((char **)t127);
    xsi_vlogfile_write(1, 0, 0, ng24, 6, t0, (char)118, t90, 4, (char)118, t123, 32, (char)118, t126, 32, (char)118, t128, 32, (char)118, t129, 1);
    xsi_set_current_line(146, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng7)));
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 32, t5, 32, t7, 32);
    t8 = (t0 + 1380);
    xsi_vlogvar_assign_value(t8, t14, 0, 0, 32);
    goto LAB177;

LAB181:    t8 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB182;

LAB183:    xsi_set_current_line(149, ng0);

LAB186:    xsi_set_current_line(150, ng0);
    t10 = (t0 + 1288);
    t11 = (t10 + 36U);
    t12 = *((char **)t11);
    t13 = (t0 + 1104);
    t18 = (t13 + 36U);
    t19 = *((char **)t18);
    t20 = (t0 + 1196);
    t28 = (t20 + 36U);
    t29 = *((char **)t28);
    t47 = (t0 + 600U);
    t48 = *((char **)t47);
    t47 = (t0 + 784U);
    t49 = *((char **)t47);
    xsi_vlogfile_write(1, 0, 0, ng25, 6, t0, (char)118, t12, 4, (char)118, t19, 32, (char)118, t29, 32, (char)118, t48, 32, (char)118, t49, 1);
    goto LAB185;

LAB193:    *((unsigned int *)t14) = 1;
    goto LAB194;

LAB195:    xsi_set_current_line(163, ng0);

LAB198:    xsi_set_current_line(164, ng0);
    t9 = (t0 + 1288);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    t12 = (t0 + 1104);
    t13 = (t12 + 36U);
    t18 = *((char **)t13);
    t19 = (t0 + 1196);
    t20 = (t19 + 36U);
    t28 = *((char **)t20);
    t29 = (t0 + 600U);
    t47 = *((char **)t29);
    xsi_vlogfile_write(1, 0, 0, ng29, 5, t0, (char)118, t11, 4, (char)118, t18, 32, (char)118, t28, 32, (char)118, t47, 32);
    goto LAB197;

}


extern void work_m_00000000000414502205_2429141254_init()
{
	static char *pe[] = {(void *)Initial_38_0,(void *)Always_94_1};
	xsi_register_didat("work_m_00000000000414502205_2429141254", "isim/test_alu_isim_beh.exe.sim/work/m_00000000000414502205_2429141254.didat");
	xsi_register_executes(pe);
}
