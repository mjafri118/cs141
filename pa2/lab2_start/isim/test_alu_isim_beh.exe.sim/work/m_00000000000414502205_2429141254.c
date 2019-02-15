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
static int ng2[] = {32, 0};
static int ng3[] = {43, 0};
static int ng4[] = {25, 0};
static unsigned int ng5[] = {0U, 0U};
static const char *ng6 = "ERROR: AND:  op_code = %b, X = %h, Y = %h, Z = %h";
static int ng7[] = {1, 0};
static unsigned int ng8[] = {2U, 0U};
static const char *ng9 = "ERROR: XOR:  op_code = %b, X = %h, Y = %h, Z = %h";
static unsigned int ng10[] = {1U, 0U};
static const char *ng11 = "ERROR: OR:  op_code = %b, X = %h, Y = %h, Z = %h";
static unsigned int ng12[] = {3U, 0U};
static const char *ng13 = "ERROR: NOR:  op_code = %b, X = %h, Y = %h, Z = %h";
static unsigned int ng14[] = {5U, 0U};
static unsigned int ng15[] = {6U, 0U};
static unsigned int ng16[] = {7U, 0U};
static unsigned int ng17[] = {8U, 0U};
static unsigned int ng18[] = {9U, 0U};
static unsigned int ng19[] = {10U, 0U};
static const char *ng20 = "ERROR HAPPENED! invalid op code, Z was not zero, op_code = %b, X = %h, Y = %h, Z = %h";



static void Initial_38_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

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
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1804);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1804);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(58, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}

static void Always_64_1(char *t0)
{
    char t14[8];
    char t46[8];
    char t69[8];
    char t78[8];
    char t105[8];
    char t132[8];
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
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
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
    int t97;
    int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    char *t133;
    char *t134;
    char *t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    char *t141;
    char *t142;
    char *t143;
    char *t144;
    char *t145;
    char *t146;
    char *t147;
    char *t148;
    char *t149;
    char *t150;
    char *t151;

LAB0:    t1 = (t0 + 2048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2244);
    *((int *)t2) = 1;
    t3 = (t0 + 2076);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(64, ng0);

LAB5:    xsi_set_current_line(65, ng0);
    t4 = (t0 + 1948);
    xsi_process_wait(t4, 1000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);

LAB7:    t5 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t5, 4);
    if (t6 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng18)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng19)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB26;

LAB27:
LAB29:
LAB28:    xsi_set_current_line(109, ng0);

LAB93:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t14, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB95;

LAB94:    t5 = (t3 + 4);
    t7 = (t2 + 4);
    if (*((unsigned int *)t5) != *((unsigned int *)t7))
        goto LAB95;

LAB96:    t8 = (t14 + 4);
    t15 = *((unsigned int *)t8);
    t16 = (~(t15));
    t17 = *((unsigned int *)t14);
    t21 = (t17 & t16);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB97;

LAB98:
LAB99:
LAB30:    goto LAB2;

LAB8:    xsi_set_current_line(67, ng0);

LAB31:    xsi_set_current_line(69, ng0);
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

LAB10:    xsi_set_current_line(79, ng0);

LAB42:    xsi_set_current_line(80, ng0);
    t3 = (t0 + 600U);
    t5 = *((char **)t3);
    t3 = (t0 + 1104);
    t7 = (t3 + 36U);
    t8 = *((char **)t7);
    t9 = (t0 + 1196);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    memset(t14, 0, 8);
    t12 = (t14 + 4);
    t13 = (t11 + 4);
    t15 = *((unsigned int *)t11);
    t16 = (~(t15));
    *((unsigned int *)t14) = t16;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t13) != 0)
        goto LAB44;

LAB43:    t24 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t24 & 4294967295U);
    t25 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t25 & 4294967295U);
    t26 = *((unsigned int *)t8);
    t27 = *((unsigned int *)t14);
    t30 = (t26 & t27);
    *((unsigned int *)t46) = t30;
    t18 = (t8 + 4);
    t19 = (t14 + 4);
    t20 = (t46 + 4);
    t31 = *((unsigned int *)t18);
    t32 = *((unsigned int *)t19);
    t33 = (t31 | t32);
    *((unsigned int *)t20) = t33;
    t34 = *((unsigned int *)t20);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB45;

LAB46:
LAB47:    t47 = (t0 + 1104);
    t48 = (t47 + 36U);
    t49 = *((char **)t48);
    memset(t69, 0, 8);
    t55 = (t69 + 4);
    t56 = (t49 + 4);
    t70 = *((unsigned int *)t49);
    t71 = (~(t70));
    *((unsigned int *)t69) = t71;
    *((unsigned int *)t55) = 0;
    if (*((unsigned int *)t56) != 0)
        goto LAB49;

LAB48:    t76 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t76 & 4294967295U);
    t77 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t77 & 4294967295U);
    t57 = (t0 + 1196);
    t58 = (t57 + 36U);
    t59 = *((char **)t58);
    t79 = *((unsigned int *)t69);
    t80 = *((unsigned int *)t59);
    t81 = (t79 & t80);
    *((unsigned int *)t78) = t81;
    t60 = (t69 + 4);
    t61 = (t59 + 4);
    t62 = (t78 + 4);
    t82 = *((unsigned int *)t60);
    t83 = *((unsigned int *)t61);
    t84 = (t82 | t83);
    *((unsigned int *)t62) = t84;
    t85 = *((unsigned int *)t62);
    t86 = (t85 != 0);
    if (t86 == 1)
        goto LAB50;

LAB51:
LAB52:    t106 = *((unsigned int *)t46);
    t107 = *((unsigned int *)t78);
    t108 = (t106 | t107);
    *((unsigned int *)t105) = t108;
    t65 = (t46 + 4);
    t109 = (t78 + 4);
    t110 = (t105 + 4);
    t111 = *((unsigned int *)t65);
    t112 = *((unsigned int *)t109);
    t113 = (t111 | t112);
    *((unsigned int *)t110) = t113;
    t114 = *((unsigned int *)t110);
    t115 = (t114 != 0);
    if (t115 == 1)
        goto LAB53;

LAB54:
LAB55:    memset(t132, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t105))
        goto LAB57;

LAB56:    t133 = (t5 + 4);
    t134 = (t105 + 4);
    if (*((unsigned int *)t133) != *((unsigned int *)t134))
        goto LAB57;

LAB58:    t135 = (t132 + 4);
    t136 = *((unsigned int *)t135);
    t137 = (~(t136));
    t138 = *((unsigned int *)t132);
    t139 = (t138 & t137);
    t140 = (t139 != 0);
    if (t140 > 0)
        goto LAB59;

LAB60:
LAB61:    goto LAB30;

LAB12:    xsi_set_current_line(85, ng0);

LAB63:    xsi_set_current_line(86, ng0);
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
        goto LAB64;

LAB65:
LAB66:    memset(t46, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t14))
        goto LAB68;

LAB67:    t28 = (t5 + 4);
    t29 = (t14 + 4);
    if (*((unsigned int *)t28) != *((unsigned int *)t29))
        goto LAB68;

LAB69:    t47 = (t46 + 4);
    t42 = *((unsigned int *)t47);
    t43 = (~(t42));
    t44 = *((unsigned int *)t46);
    t45 = (t44 & t43);
    t50 = (t45 != 0);
    if (t50 > 0)
        goto LAB70;

LAB71:
LAB72:    goto LAB30;

LAB14:    xsi_set_current_line(91, ng0);

LAB74:    xsi_set_current_line(92, ng0);
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
        goto LAB75;

LAB76:
LAB77:    memset(t14, 0, 8);
    t28 = (t14 + 4);
    t29 = (t46 + 4);
    t42 = *((unsigned int *)t46);
    t43 = (~(t42));
    *((unsigned int *)t14) = t43;
    *((unsigned int *)t28) = 0;
    if (*((unsigned int *)t29) != 0)
        goto LAB79;

LAB78:    t52 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t52 & 4294967295U);
    t53 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t53 & 4294967295U);
    memset(t69, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t14))
        goto LAB81;

LAB80:    t47 = (t5 + 4);
    t48 = (t14 + 4);
    if (*((unsigned int *)t47) != *((unsigned int *)t48))
        goto LAB81;

LAB82:    t49 = (t69 + 4);
    t54 = *((unsigned int *)t49);
    t66 = (~(t54));
    t67 = *((unsigned int *)t69);
    t68 = (t67 & t66);
    t70 = (t68 != 0);
    if (t70 > 0)
        goto LAB83;

LAB84:
LAB85:    goto LAB30;

LAB16:    xsi_set_current_line(97, ng0);

LAB87:    goto LAB30;

LAB18:    xsi_set_current_line(99, ng0);

LAB88:    goto LAB30;

LAB20:    xsi_set_current_line(101, ng0);

LAB89:    goto LAB30;

LAB22:    xsi_set_current_line(103, ng0);

LAB90:    goto LAB30;

LAB24:    xsi_set_current_line(105, ng0);

LAB91:    goto LAB30;

LAB26:    xsi_set_current_line(107, ng0);

LAB92:    goto LAB30;

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

LAB38:    xsi_set_current_line(69, ng0);

LAB41:    xsi_set_current_line(70, ng0);
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
    xsi_vlogfile_write(1, 0, 0, ng6, 5, t0, (char)118, t57, 4, (char)118, t60, 32, (char)118, t63, 32, (char)118, t65, 32);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng7)));
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 32, t5, 32, t7, 32);
    t8 = (t0 + 1380);
    xsi_vlogvar_assign_value(t8, t14, 0, 0, 32);
    goto LAB40;

LAB44:    t17 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t13);
    *((unsigned int *)t14) = (t17 | t21);
    t22 = *((unsigned int *)t12);
    t23 = *((unsigned int *)t13);
    *((unsigned int *)t12) = (t22 | t23);
    goto LAB43;

LAB45:    t36 = *((unsigned int *)t46);
    t37 = *((unsigned int *)t20);
    *((unsigned int *)t46) = (t36 | t37);
    t28 = (t8 + 4);
    t29 = (t14 + 4);
    t40 = *((unsigned int *)t8);
    t41 = (~(t40));
    t42 = *((unsigned int *)t28);
    t43 = (~(t42));
    t44 = *((unsigned int *)t14);
    t45 = (~(t44));
    t50 = *((unsigned int *)t29);
    t51 = (~(t50));
    t38 = (t41 & t43);
    t39 = (t45 & t51);
    t52 = (~(t38));
    t53 = (~(t39));
    t54 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t54 & t52);
    t66 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t66 & t53);
    t67 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t67 & t52);
    t68 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t68 & t53);
    goto LAB47;

LAB49:    t72 = *((unsigned int *)t69);
    t73 = *((unsigned int *)t56);
    *((unsigned int *)t69) = (t72 | t73);
    t74 = *((unsigned int *)t55);
    t75 = *((unsigned int *)t56);
    *((unsigned int *)t55) = (t74 | t75);
    goto LAB48;

LAB50:    t87 = *((unsigned int *)t78);
    t88 = *((unsigned int *)t62);
    *((unsigned int *)t78) = (t87 | t88);
    t63 = (t69 + 4);
    t64 = (t59 + 4);
    t89 = *((unsigned int *)t69);
    t90 = (~(t89));
    t91 = *((unsigned int *)t63);
    t92 = (~(t91));
    t93 = *((unsigned int *)t59);
    t94 = (~(t93));
    t95 = *((unsigned int *)t64);
    t96 = (~(t95));
    t97 = (t90 & t92);
    t98 = (t94 & t96);
    t99 = (~(t97));
    t100 = (~(t98));
    t101 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t101 & t99);
    t102 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t102 & t100);
    t103 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t103 & t99);
    t104 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t104 & t100);
    goto LAB52;

LAB53:    t116 = *((unsigned int *)t105);
    t117 = *((unsigned int *)t110);
    *((unsigned int *)t105) = (t116 | t117);
    t118 = (t46 + 4);
    t119 = (t78 + 4);
    t120 = *((unsigned int *)t118);
    t121 = (~(t120));
    t122 = *((unsigned int *)t46);
    t123 = (t122 & t121);
    t124 = *((unsigned int *)t119);
    t125 = (~(t124));
    t126 = *((unsigned int *)t78);
    t127 = (t126 & t125);
    t128 = (~(t123));
    t129 = (~(t127));
    t130 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t130 & t128);
    t131 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t131 & t129);
    goto LAB55;

LAB57:    *((unsigned int *)t132) = 1;
    goto LAB58;

LAB59:    xsi_set_current_line(80, ng0);

LAB62:    xsi_set_current_line(81, ng0);
    t141 = (t0 + 1288);
    t142 = (t141 + 36U);
    t143 = *((char **)t142);
    t144 = (t0 + 1104);
    t145 = (t144 + 36U);
    t146 = *((char **)t145);
    t147 = (t0 + 1196);
    t148 = (t147 + 36U);
    t149 = *((char **)t148);
    t150 = (t0 + 600U);
    t151 = *((char **)t150);
    xsi_vlogfile_write(1, 0, 0, ng9, 5, t0, (char)118, t143, 4, (char)118, t146, 32, (char)118, t149, 32, (char)118, t151, 32);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng7)));
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 32, t5, 32, t7, 32);
    t8 = (t0 + 1380);
    xsi_vlogvar_assign_value(t8, t14, 0, 0, 32);
    goto LAB61;

LAB64:    t26 = *((unsigned int *)t14);
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
    goto LAB66;

LAB68:    *((unsigned int *)t46) = 1;
    goto LAB69;

LAB70:    xsi_set_current_line(86, ng0);

LAB73:    xsi_set_current_line(87, ng0);
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
    xsi_vlogfile_write(1, 0, 0, ng11, 5, t0, (char)118, t55, 4, (char)118, t58, 32, (char)118, t61, 32, (char)118, t63, 32);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng7)));
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 32, t5, 32, t7, 32);
    t8 = (t0 + 1380);
    xsi_vlogvar_assign_value(t8, t14, 0, 0, 32);
    goto LAB72;

LAB75:    t26 = *((unsigned int *)t46);
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
    goto LAB77;

LAB79:    t44 = *((unsigned int *)t14);
    t45 = *((unsigned int *)t29);
    *((unsigned int *)t14) = (t44 | t45);
    t50 = *((unsigned int *)t28);
    t51 = *((unsigned int *)t29);
    *((unsigned int *)t28) = (t50 | t51);
    goto LAB78;

LAB81:    *((unsigned int *)t69) = 1;
    goto LAB82;

LAB83:    xsi_set_current_line(92, ng0);

LAB86:    xsi_set_current_line(93, ng0);
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
    xsi_vlogfile_write(1, 0, 0, ng13, 5, t0, (char)118, t57, 4, (char)118, t60, 32, (char)118, t63, 32, (char)118, t65, 32);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng7)));
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 32, t5, 32, t7, 32);
    t8 = (t0 + 1380);
    xsi_vlogvar_assign_value(t8, t14, 0, 0, 32);
    goto LAB85;

LAB95:    *((unsigned int *)t14) = 1;
    goto LAB96;

LAB97:    xsi_set_current_line(111, ng0);

LAB100:    xsi_set_current_line(112, ng0);
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
    xsi_vlogfile_write(1, 0, 0, ng20, 5, t0, (char)118, t11, 4, (char)118, t18, 32, (char)118, t28, 32, (char)118, t47, 32);
    goto LAB99;

}


extern void work_m_00000000000414502205_2429141254_init()
{
	static char *pe[] = {(void *)Initial_38_0,(void *)Always_64_1};
	xsi_register_didat("work_m_00000000000414502205_2429141254", "isim/test_alu_isim_beh.exe.sim/work/m_00000000000414502205_2429141254.didat");
	xsi_register_executes(pe);
}
