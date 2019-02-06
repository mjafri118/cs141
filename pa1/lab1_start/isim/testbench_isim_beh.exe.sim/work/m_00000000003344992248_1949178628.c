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
static const char *ng0 = "//vmware-host/Shared Folders/shared_folder/cs141/pa1/lab1_start/testbench.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {255U, 0U};
static const char *ng3 = "switch=%b, led=%b";
static const char *ng4 = "ERROR: switch[0]=%b, switch[1]=%b, led[0]=%b";
static int ng5[] = {1, 0};
static const char *ng6 = "ERROR: switch[2]=%b, switch[3]=%b, led[1]=%b";
static const char *ng7 = "ERROR: switch[4]=%b, led[3]=%b, led[0]=%b";
static const char *ng8 = "ERROR: switch[4]=%b, led[3]=%b, led[1]=%b";
static const char *ng9 = "Finished with %d errors";



static void Initial_16_0(char *t0)
{
    char t6[8];
    char t29[8];
    char t32[8];
    char t40[8];
    char t48[8];
    char t51[8];
    char t59[8];
    char t100[8];
    char t112[8];
    char t123[8];
    char t149[8];
    char t157[8];
    char t169[8];
    char t181[8];
    char t192[8];
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
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t49;
    char *t50;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    int t83;
    int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    char *t99;
    char *t101;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    char *t110;
    char *t111;
    char *t113;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    char *t121;
    char *t122;
    char *t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    char *t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    char *t158;
    char *t159;
    char *t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    char *t166;
    char *t167;
    char *t168;
    char *t170;
    char *t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    char *t178;
    char *t179;
    char *t180;
    char *t182;
    char *t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    char *t190;
    char *t191;
    char *t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;

LAB0:    t1 = (t0 + 1444U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16, ng0);

LAB4:    xsi_set_current_line(17, ng0);
    xsi_set_current_line(17, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB5:    t2 = (t0 + 828);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
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

LAB11:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1344);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB122;

LAB1:    return;
LAB7:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(17, ng0);

LAB12:    xsi_set_current_line(18, ng0);
    t28 = (t0 + 1344);
    xsi_process_wait(t28, 10000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 828);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 600U);
    t7 = *((char **)t5);
    xsi_vlogfile_write(1, 0, 0, ng3, 3, t0, (char)118, t4, 8, (char)118, t7, 8);
    xsi_set_current_line(22, ng0);
    t2 = (t0 + 828);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t5) = t14;
    memset(t29, 0, 8);
    t8 = (t6 + 4);
    t15 = *((unsigned int *)t8);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t8) != 0)
        goto LAB16;

LAB17:    t22 = (t29 + 4);
    t20 = *((unsigned int *)t29);
    t23 = *((unsigned int *)t22);
    t24 = (t20 || t23);
    if (t24 > 0)
        goto LAB18;

LAB19:    memcpy(t59, t29, 8);

LAB20:    t91 = (t59 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t59);
    t95 = (t94 & t93);
    t96 = (t95 != 0);
    if (t96 > 0)
        goto LAB31;

LAB32:
LAB33:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 828);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t29, 0, 8);
    t5 = (t29 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 2);
    t11 = (t10 & 1);
    *((unsigned int *)t29) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 2);
    t14 = (t13 & 1);
    *((unsigned int *)t5) = t14;
    memset(t6, 0, 8);
    t8 = (t29 + 4);
    t15 = *((unsigned int *)t8);
    t16 = (~(t15));
    t17 = *((unsigned int *)t29);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB38;

LAB36:    if (*((unsigned int *)t8) == 0)
        goto LAB35;

LAB37:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;

LAB38:    memset(t32, 0, 8);
    t22 = (t6 + 4);
    t20 = *((unsigned int *)t22);
    t23 = (~(t20));
    t24 = *((unsigned int *)t6);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t22) != 0)
        goto LAB41;

LAB42:    t30 = (t32 + 4);
    t27 = *((unsigned int *)t32);
    t35 = (!(t27));
    t36 = *((unsigned int *)t30);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB43;

LAB44:    memcpy(t123, t32, 8);

LAB45:    t122 = (t0 + 600U);
    t124 = *((char **)t122);
    memset(t149, 0, 8);
    t122 = (t149 + 4);
    t150 = (t124 + 4);
    t151 = *((unsigned int *)t124);
    t152 = (t151 >> 1);
    t153 = (t152 & 1);
    *((unsigned int *)t149) = t153;
    t154 = *((unsigned int *)t150);
    t155 = (t154 >> 1);
    t156 = (t155 & 1);
    *((unsigned int *)t122) = t156;
    memset(t157, 0, 8);
    if (*((unsigned int *)t123) != *((unsigned int *)t149))
        goto LAB68;

LAB67:    t158 = (t123 + 4);
    t159 = (t149 + 4);
    if (*((unsigned int *)t158) != *((unsigned int *)t159))
        goto LAB68;

LAB69:    t160 = (t157 + 4);
    t161 = *((unsigned int *)t160);
    t162 = (~(t161));
    t163 = *((unsigned int *)t157);
    t164 = (t163 & t162);
    t165 = (t164 != 0);
    if (t165 > 0)
        goto LAB70;

LAB71:
LAB72:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 828);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 4);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 4);
    t14 = (t13 & 1);
    *((unsigned int *)t5) = t14;
    memset(t29, 0, 8);
    t8 = (t6 + 4);
    t15 = *((unsigned int *)t8);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t8) != 0)
        goto LAB76;

LAB77:    t22 = (t29 + 4);
    t20 = *((unsigned int *)t29);
    t23 = *((unsigned int *)t22);
    t24 = (t20 || t23);
    if (t24 > 0)
        goto LAB78;

LAB79:    memcpy(t59, t29, 8);

LAB80:    t74 = (t59 + 4);
    t116 = *((unsigned int *)t74);
    t117 = (~(t116));
    t118 = *((unsigned int *)t59);
    t119 = (t118 & t117);
    t120 = (t119 != 0);
    if (t120 > 0)
        goto LAB92;

LAB93:
LAB94:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 828);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t29, 0, 8);
    t5 = (t29 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 4);
    t11 = (t10 & 1);
    *((unsigned int *)t29) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 4);
    t14 = (t13 & 1);
    *((unsigned int *)t5) = t14;
    memset(t6, 0, 8);
    t8 = (t29 + 4);
    t15 = *((unsigned int *)t8);
    t16 = (~(t15));
    t17 = *((unsigned int *)t29);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB99;

LAB97:    if (*((unsigned int *)t8) == 0)
        goto LAB96;

LAB98:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;

LAB99:    memset(t32, 0, 8);
    t22 = (t6 + 4);
    t20 = *((unsigned int *)t22);
    t23 = (~(t20));
    t24 = *((unsigned int *)t6);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB100;

LAB101:    if (*((unsigned int *)t22) != 0)
        goto LAB102;

LAB103:    t30 = (t32 + 4);
    t27 = *((unsigned int *)t32);
    t35 = *((unsigned int *)t30);
    t36 = (t27 || t35);
    if (t36 > 0)
        goto LAB104;

LAB105:    memcpy(t100, t32, 8);

LAB106:    t97 = (t100 + 4);
    t125 = *((unsigned int *)t97);
    t126 = (~(t125));
    t127 = *((unsigned int *)t100);
    t128 = (t127 & t126);
    t129 = (t128 != 0);
    if (t129 > 0)
        goto LAB118;

LAB119:
LAB120:    xsi_set_current_line(17, ng0);
    t2 = (t0 + 828);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 8, t5, 32);
    t7 = (t0 + 828);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    goto LAB5;

LAB14:    *((unsigned int *)t29) = 1;
    goto LAB17;

LAB16:    t21 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB17;

LAB18:    t28 = (t0 + 828);
    t30 = (t28 + 36U);
    t31 = *((char **)t30);
    memset(t32, 0, 8);
    t33 = (t32 + 4);
    t34 = (t31 + 4);
    t25 = *((unsigned int *)t31);
    t26 = (t25 >> 1);
    t27 = (t26 & 1);
    *((unsigned int *)t32) = t27;
    t35 = *((unsigned int *)t34);
    t36 = (t35 >> 1);
    t37 = (t36 & 1);
    *((unsigned int *)t33) = t37;
    t38 = (t0 + 600U);
    t39 = *((char **)t38);
    memset(t40, 0, 8);
    t38 = (t40 + 4);
    t41 = (t39 + 4);
    t42 = *((unsigned int *)t39);
    t43 = (t42 >> 0);
    t44 = (t43 & 1);
    *((unsigned int *)t40) = t44;
    t45 = *((unsigned int *)t41);
    t46 = (t45 >> 0);
    t47 = (t46 & 1);
    *((unsigned int *)t38) = t47;
    memset(t48, 0, 8);
    if (*((unsigned int *)t32) != *((unsigned int *)t40))
        goto LAB22;

LAB21:    t49 = (t32 + 4);
    t50 = (t40 + 4);
    if (*((unsigned int *)t49) != *((unsigned int *)t50))
        goto LAB22;

LAB23:    memset(t51, 0, 8);
    t52 = (t48 + 4);
    t53 = *((unsigned int *)t52);
    t54 = (~(t53));
    t55 = *((unsigned int *)t48);
    t56 = (t55 & t54);
    t57 = (t56 & 1U);
    if (t57 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t52) != 0)
        goto LAB26;

LAB27:    t60 = *((unsigned int *)t29);
    t61 = *((unsigned int *)t51);
    t62 = (t60 & t61);
    *((unsigned int *)t59) = t62;
    t63 = (t29 + 4);
    t64 = (t51 + 4);
    t65 = (t59 + 4);
    t66 = *((unsigned int *)t63);
    t67 = *((unsigned int *)t64);
    t68 = (t66 | t67);
    *((unsigned int *)t65) = t68;
    t69 = *((unsigned int *)t65);
    t70 = (t69 != 0);
    if (t70 == 1)
        goto LAB28;

LAB29:
LAB30:    goto LAB20;

LAB22:    *((unsigned int *)t48) = 1;
    goto LAB23;

LAB24:    *((unsigned int *)t51) = 1;
    goto LAB27;

LAB26:    t58 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB27;

LAB28:    t71 = *((unsigned int *)t59);
    t72 = *((unsigned int *)t65);
    *((unsigned int *)t59) = (t71 | t72);
    t73 = (t29 + 4);
    t74 = (t51 + 4);
    t75 = *((unsigned int *)t29);
    t76 = (~(t75));
    t77 = *((unsigned int *)t73);
    t78 = (~(t77));
    t79 = *((unsigned int *)t51);
    t80 = (~(t79));
    t81 = *((unsigned int *)t74);
    t82 = (~(t81));
    t83 = (t76 & t78);
    t84 = (t80 & t82);
    t85 = (~(t83));
    t86 = (~(t84));
    t87 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t87 & t85);
    t88 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t88 & t86);
    t89 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t89 & t85);
    t90 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t90 & t86);
    goto LAB30;

LAB31:    xsi_set_current_line(22, ng0);

LAB34:    xsi_set_current_line(23, ng0);
    t97 = (t0 + 828);
    t98 = (t97 + 36U);
    t99 = *((char **)t98);
    memset(t100, 0, 8);
    t101 = (t100 + 4);
    t102 = (t99 + 4);
    t103 = *((unsigned int *)t99);
    t104 = (t103 >> 0);
    t105 = (t104 & 1);
    *((unsigned int *)t100) = t105;
    t106 = *((unsigned int *)t102);
    t107 = (t106 >> 0);
    t108 = (t107 & 1);
    *((unsigned int *)t101) = t108;
    t109 = (t0 + 828);
    t110 = (t109 + 36U);
    t111 = *((char **)t110);
    memset(t112, 0, 8);
    t113 = (t112 + 4);
    t114 = (t111 + 4);
    t115 = *((unsigned int *)t111);
    t116 = (t115 >> 1);
    t117 = (t116 & 1);
    *((unsigned int *)t112) = t117;
    t118 = *((unsigned int *)t114);
    t119 = (t118 >> 1);
    t120 = (t119 & 1);
    *((unsigned int *)t113) = t120;
    t121 = (t0 + 600U);
    t122 = *((char **)t121);
    memset(t123, 0, 8);
    t121 = (t123 + 4);
    t124 = (t122 + 4);
    t125 = *((unsigned int *)t122);
    t126 = (t125 >> 0);
    t127 = (t126 & 1);
    *((unsigned int *)t123) = t127;
    t128 = *((unsigned int *)t124);
    t129 = (t128 >> 0);
    t130 = (t129 & 1);
    *((unsigned int *)t121) = t130;
    xsi_vlogfile_write(1, 0, 0, ng4, 4, t0, (char)118, t100, 1, (char)118, t112, 1, (char)118, t123, 1);
    xsi_set_current_line(24, ng0);
    t2 = (t0 + 920);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 920);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB33;

LAB35:    *((unsigned int *)t6) = 1;
    goto LAB38;

LAB39:    *((unsigned int *)t32) = 1;
    goto LAB42;

LAB41:    t28 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB42;

LAB43:    t31 = (t0 + 828);
    t33 = (t31 + 36U);
    t34 = *((char **)t33);
    memset(t40, 0, 8);
    t38 = (t40 + 4);
    t39 = (t34 + 4);
    t42 = *((unsigned int *)t34);
    t43 = (t42 >> 2);
    t44 = (t43 & 1);
    *((unsigned int *)t40) = t44;
    t45 = *((unsigned int *)t39);
    t46 = (t45 >> 2);
    t47 = (t46 & 1);
    *((unsigned int *)t38) = t47;
    memset(t48, 0, 8);
    t41 = (t40 + 4);
    t53 = *((unsigned int *)t41);
    t54 = (~(t53));
    t55 = *((unsigned int *)t40);
    t56 = (t55 & t54);
    t57 = (t56 & 1U);
    if (t57 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t41) != 0)
        goto LAB48;

LAB49:    t50 = (t48 + 4);
    t60 = *((unsigned int *)t48);
    t61 = *((unsigned int *)t50);
    t62 = (t60 || t61);
    if (t62 > 0)
        goto LAB50;

LAB51:    memcpy(t100, t48, 8);

LAB52:    memset(t112, 0, 8);
    t102 = (t100 + 4);
    t118 = *((unsigned int *)t102);
    t119 = (~(t118));
    t120 = *((unsigned int *)t100);
    t125 = (t120 & t119);
    t126 = (t125 & 1U);
    if (t126 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t102) != 0)
        goto LAB62;

LAB63:    t127 = *((unsigned int *)t32);
    t128 = *((unsigned int *)t112);
    t129 = (t127 | t128);
    *((unsigned int *)t123) = t129;
    t110 = (t32 + 4);
    t111 = (t112 + 4);
    t113 = (t123 + 4);
    t130 = *((unsigned int *)t110);
    t131 = *((unsigned int *)t111);
    t132 = (t130 | t131);
    *((unsigned int *)t113) = t132;
    t133 = *((unsigned int *)t113);
    t134 = (t133 != 0);
    if (t134 == 1)
        goto LAB64;

LAB65:
LAB66:    goto LAB45;

LAB46:    *((unsigned int *)t48) = 1;
    goto LAB49;

LAB48:    t49 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB49;

LAB50:    t52 = (t0 + 828);
    t58 = (t52 + 36U);
    t63 = *((char **)t58);
    memset(t51, 0, 8);
    t64 = (t51 + 4);
    t65 = (t63 + 4);
    t66 = *((unsigned int *)t63);
    t67 = (t66 >> 3);
    t68 = (t67 & 1);
    *((unsigned int *)t51) = t68;
    t69 = *((unsigned int *)t65);
    t70 = (t69 >> 3);
    t71 = (t70 & 1);
    *((unsigned int *)t64) = t71;
    memset(t59, 0, 8);
    t73 = (t51 + 4);
    t72 = *((unsigned int *)t73);
    t75 = (~(t72));
    t76 = *((unsigned int *)t51);
    t77 = (t76 & t75);
    t78 = (t77 & 1U);
    if (t78 != 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t73) != 0)
        goto LAB55;

LAB56:    t79 = *((unsigned int *)t48);
    t80 = *((unsigned int *)t59);
    t81 = (t79 & t80);
    *((unsigned int *)t100) = t81;
    t91 = (t48 + 4);
    t97 = (t59 + 4);
    t98 = (t100 + 4);
    t82 = *((unsigned int *)t91);
    t85 = *((unsigned int *)t97);
    t86 = (t82 | t85);
    *((unsigned int *)t98) = t86;
    t87 = *((unsigned int *)t98);
    t88 = (t87 != 0);
    if (t88 == 1)
        goto LAB57;

LAB58:
LAB59:    goto LAB52;

LAB53:    *((unsigned int *)t59) = 1;
    goto LAB56;

LAB55:    t74 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t74) = 1;
    goto LAB56;

LAB57:    t89 = *((unsigned int *)t100);
    t90 = *((unsigned int *)t98);
    *((unsigned int *)t100) = (t89 | t90);
    t99 = (t48 + 4);
    t101 = (t59 + 4);
    t92 = *((unsigned int *)t48);
    t93 = (~(t92));
    t94 = *((unsigned int *)t99);
    t95 = (~(t94));
    t96 = *((unsigned int *)t59);
    t103 = (~(t96));
    t104 = *((unsigned int *)t101);
    t105 = (~(t104));
    t83 = (t93 & t95);
    t84 = (t103 & t105);
    t106 = (~(t83));
    t107 = (~(t84));
    t108 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t108 & t106);
    t115 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t115 & t107);
    t116 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t116 & t106);
    t117 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t117 & t107);
    goto LAB59;

LAB60:    *((unsigned int *)t112) = 1;
    goto LAB63;

LAB62:    t109 = (t112 + 4);
    *((unsigned int *)t112) = 1;
    *((unsigned int *)t109) = 1;
    goto LAB63;

LAB64:    t135 = *((unsigned int *)t123);
    t136 = *((unsigned int *)t113);
    *((unsigned int *)t123) = (t135 | t136);
    t114 = (t32 + 4);
    t121 = (t112 + 4);
    t137 = *((unsigned int *)t114);
    t138 = (~(t137));
    t139 = *((unsigned int *)t32);
    t140 = (t139 & t138);
    t141 = *((unsigned int *)t121);
    t142 = (~(t141));
    t143 = *((unsigned int *)t112);
    t144 = (t143 & t142);
    t145 = (~(t140));
    t146 = (~(t144));
    t147 = *((unsigned int *)t113);
    *((unsigned int *)t113) = (t147 & t145);
    t148 = *((unsigned int *)t113);
    *((unsigned int *)t113) = (t148 & t146);
    goto LAB66;

LAB68:    *((unsigned int *)t157) = 1;
    goto LAB69;

LAB70:    xsi_set_current_line(29, ng0);

LAB73:    xsi_set_current_line(30, ng0);
    t166 = (t0 + 828);
    t167 = (t166 + 36U);
    t168 = *((char **)t167);
    memset(t169, 0, 8);
    t170 = (t169 + 4);
    t171 = (t168 + 4);
    t172 = *((unsigned int *)t168);
    t173 = (t172 >> 2);
    t174 = (t173 & 1);
    *((unsigned int *)t169) = t174;
    t175 = *((unsigned int *)t171);
    t176 = (t175 >> 2);
    t177 = (t176 & 1);
    *((unsigned int *)t170) = t177;
    t178 = (t0 + 828);
    t179 = (t178 + 36U);
    t180 = *((char **)t179);
    memset(t181, 0, 8);
    t182 = (t181 + 4);
    t183 = (t180 + 4);
    t184 = *((unsigned int *)t180);
    t185 = (t184 >> 3);
    t186 = (t185 & 1);
    *((unsigned int *)t181) = t186;
    t187 = *((unsigned int *)t183);
    t188 = (t187 >> 3);
    t189 = (t188 & 1);
    *((unsigned int *)t182) = t189;
    t190 = (t0 + 600U);
    t191 = *((char **)t190);
    memset(t192, 0, 8);
    t190 = (t192 + 4);
    t193 = (t191 + 4);
    t194 = *((unsigned int *)t191);
    t195 = (t194 >> 1);
    t196 = (t195 & 1);
    *((unsigned int *)t192) = t196;
    t197 = *((unsigned int *)t193);
    t198 = (t197 >> 1);
    t199 = (t198 & 1);
    *((unsigned int *)t190) = t199;
    xsi_vlogfile_write(1, 0, 0, ng6, 4, t0, (char)118, t169, 1, (char)118, t181, 1, (char)118, t192, 1);
    xsi_set_current_line(31, ng0);
    t2 = (t0 + 920);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 920);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB72;

LAB74:    *((unsigned int *)t29) = 1;
    goto LAB77;

LAB76:    t21 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB77;

LAB78:    t28 = (t0 + 600U);
    t30 = *((char **)t28);
    memset(t32, 0, 8);
    t28 = (t32 + 4);
    t31 = (t30 + 4);
    t25 = *((unsigned int *)t30);
    t26 = (t25 >> 3);
    t27 = (t26 & 1);
    *((unsigned int *)t32) = t27;
    t35 = *((unsigned int *)t31);
    t36 = (t35 >> 3);
    t37 = (t36 & 1);
    *((unsigned int *)t28) = t37;
    t33 = (t0 + 600U);
    t34 = *((char **)t33);
    memset(t40, 0, 8);
    t33 = (t40 + 4);
    t38 = (t34 + 4);
    t42 = *((unsigned int *)t34);
    t43 = (t42 >> 0);
    t44 = (t43 & 1);
    *((unsigned int *)t40) = t44;
    t45 = *((unsigned int *)t38);
    t46 = (t45 >> 0);
    t47 = (t46 & 1);
    *((unsigned int *)t33) = t47;
    memset(t48, 0, 8);
    t39 = (t32 + 4);
    t41 = (t40 + 4);
    t53 = *((unsigned int *)t32);
    t54 = *((unsigned int *)t40);
    t55 = (t53 ^ t54);
    t56 = *((unsigned int *)t39);
    t57 = *((unsigned int *)t41);
    t60 = (t56 ^ t57);
    t61 = (t55 | t60);
    t62 = *((unsigned int *)t39);
    t66 = *((unsigned int *)t41);
    t67 = (t62 | t66);
    t68 = (~(t67));
    t69 = (t61 & t68);
    if (t69 != 0)
        goto LAB82;

LAB81:    if (t67 != 0)
        goto LAB83;

LAB84:    memset(t51, 0, 8);
    t50 = (t48 + 4);
    t70 = *((unsigned int *)t50);
    t71 = (~(t70));
    t72 = *((unsigned int *)t48);
    t75 = (t72 & t71);
    t76 = (t75 & 1U);
    if (t76 != 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t50) != 0)
        goto LAB87;

LAB88:    t77 = *((unsigned int *)t29);
    t78 = *((unsigned int *)t51);
    t79 = (t77 & t78);
    *((unsigned int *)t59) = t79;
    t58 = (t29 + 4);
    t63 = (t51 + 4);
    t64 = (t59 + 4);
    t80 = *((unsigned int *)t58);
    t81 = *((unsigned int *)t63);
    t82 = (t80 | t81);
    *((unsigned int *)t64) = t82;
    t85 = *((unsigned int *)t64);
    t86 = (t85 != 0);
    if (t86 == 1)
        goto LAB89;

LAB90:
LAB91:    goto LAB80;

LAB82:    *((unsigned int *)t48) = 1;
    goto LAB84;

LAB83:    t49 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB84;

LAB85:    *((unsigned int *)t51) = 1;
    goto LAB88;

LAB87:    t52 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB88;

LAB89:    t87 = *((unsigned int *)t59);
    t88 = *((unsigned int *)t64);
    *((unsigned int *)t59) = (t87 | t88);
    t65 = (t29 + 4);
    t73 = (t51 + 4);
    t89 = *((unsigned int *)t29);
    t90 = (~(t89));
    t92 = *((unsigned int *)t65);
    t93 = (~(t92));
    t94 = *((unsigned int *)t51);
    t95 = (~(t94));
    t96 = *((unsigned int *)t73);
    t103 = (~(t96));
    t83 = (t90 & t93);
    t84 = (t95 & t103);
    t104 = (~(t83));
    t105 = (~(t84));
    t106 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t106 & t104);
    t107 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t107 & t105);
    t108 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t108 & t104);
    t115 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t115 & t105);
    goto LAB91;

LAB92:    xsi_set_current_line(35, ng0);

LAB95:    xsi_set_current_line(36, ng0);
    t91 = (t0 + 828);
    t97 = (t91 + 36U);
    t98 = *((char **)t97);
    memset(t100, 0, 8);
    t99 = (t100 + 4);
    t101 = (t98 + 4);
    t125 = *((unsigned int *)t98);
    t126 = (t125 >> 4);
    t127 = (t126 & 1);
    *((unsigned int *)t100) = t127;
    t128 = *((unsigned int *)t101);
    t129 = (t128 >> 4);
    t130 = (t129 & 1);
    *((unsigned int *)t99) = t130;
    t102 = (t0 + 600U);
    t109 = *((char **)t102);
    memset(t112, 0, 8);
    t102 = (t112 + 4);
    t110 = (t109 + 4);
    t131 = *((unsigned int *)t109);
    t132 = (t131 >> 3);
    t133 = (t132 & 1);
    *((unsigned int *)t112) = t133;
    t134 = *((unsigned int *)t110);
    t135 = (t134 >> 3);
    t136 = (t135 & 1);
    *((unsigned int *)t102) = t136;
    t111 = (t0 + 600U);
    t113 = *((char **)t111);
    memset(t123, 0, 8);
    t111 = (t123 + 4);
    t114 = (t113 + 4);
    t137 = *((unsigned int *)t113);
    t138 = (t137 >> 0);
    t139 = (t138 & 1);
    *((unsigned int *)t123) = t139;
    t141 = *((unsigned int *)t114);
    t142 = (t141 >> 0);
    t143 = (t142 & 1);
    *((unsigned int *)t111) = t143;
    xsi_vlogfile_write(1, 0, 0, ng7, 4, t0, (char)118, t100, 1, (char)118, t112, 1, (char)118, t123, 1);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 920);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 920);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB94;

LAB96:    *((unsigned int *)t6) = 1;
    goto LAB99;

LAB100:    *((unsigned int *)t32) = 1;
    goto LAB103;

LAB102:    t28 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB103;

LAB104:    t31 = (t0 + 600U);
    t33 = *((char **)t31);
    memset(t40, 0, 8);
    t31 = (t40 + 4);
    t34 = (t33 + 4);
    t37 = *((unsigned int *)t33);
    t42 = (t37 >> 3);
    t43 = (t42 & 1);
    *((unsigned int *)t40) = t43;
    t44 = *((unsigned int *)t34);
    t45 = (t44 >> 3);
    t46 = (t45 & 1);
    *((unsigned int *)t31) = t46;
    t38 = (t0 + 600U);
    t39 = *((char **)t38);
    memset(t48, 0, 8);
    t38 = (t48 + 4);
    t41 = (t39 + 4);
    t47 = *((unsigned int *)t39);
    t53 = (t47 >> 1);
    t54 = (t53 & 1);
    *((unsigned int *)t48) = t54;
    t55 = *((unsigned int *)t41);
    t56 = (t55 >> 1);
    t57 = (t56 & 1);
    *((unsigned int *)t38) = t57;
    memset(t51, 0, 8);
    t49 = (t40 + 4);
    t50 = (t48 + 4);
    t60 = *((unsigned int *)t40);
    t61 = *((unsigned int *)t48);
    t62 = (t60 ^ t61);
    t66 = *((unsigned int *)t49);
    t67 = *((unsigned int *)t50);
    t68 = (t66 ^ t67);
    t69 = (t62 | t68);
    t70 = *((unsigned int *)t49);
    t71 = *((unsigned int *)t50);
    t72 = (t70 | t71);
    t75 = (~(t72));
    t76 = (t69 & t75);
    if (t76 != 0)
        goto LAB108;

LAB107:    if (t72 != 0)
        goto LAB109;

LAB110:    memset(t59, 0, 8);
    t58 = (t51 + 4);
    t77 = *((unsigned int *)t58);
    t78 = (~(t77));
    t79 = *((unsigned int *)t51);
    t80 = (t79 & t78);
    t81 = (t80 & 1U);
    if (t81 != 0)
        goto LAB111;

LAB112:    if (*((unsigned int *)t58) != 0)
        goto LAB113;

LAB114:    t82 = *((unsigned int *)t32);
    t85 = *((unsigned int *)t59);
    t86 = (t82 & t85);
    *((unsigned int *)t100) = t86;
    t64 = (t32 + 4);
    t65 = (t59 + 4);
    t73 = (t100 + 4);
    t87 = *((unsigned int *)t64);
    t88 = *((unsigned int *)t65);
    t89 = (t87 | t88);
    *((unsigned int *)t73) = t89;
    t90 = *((unsigned int *)t73);
    t92 = (t90 != 0);
    if (t92 == 1)
        goto LAB115;

LAB116:
LAB117:    goto LAB106;

LAB108:    *((unsigned int *)t51) = 1;
    goto LAB110;

LAB109:    t52 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB110;

LAB111:    *((unsigned int *)t59) = 1;
    goto LAB114;

LAB113:    t63 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB114;

LAB115:    t93 = *((unsigned int *)t100);
    t94 = *((unsigned int *)t73);
    *((unsigned int *)t100) = (t93 | t94);
    t74 = (t32 + 4);
    t91 = (t59 + 4);
    t95 = *((unsigned int *)t32);
    t96 = (~(t95));
    t103 = *((unsigned int *)t74);
    t104 = (~(t103));
    t105 = *((unsigned int *)t59);
    t106 = (~(t105));
    t107 = *((unsigned int *)t91);
    t108 = (~(t107));
    t83 = (t96 & t104);
    t84 = (t106 & t108);
    t115 = (~(t83));
    t116 = (~(t84));
    t117 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t117 & t115);
    t118 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t118 & t116);
    t119 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t119 & t115);
    t120 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t120 & t116);
    goto LAB117;

LAB118:    xsi_set_current_line(40, ng0);

LAB121:    xsi_set_current_line(41, ng0);
    t98 = (t0 + 828);
    t99 = (t98 + 36U);
    t101 = *((char **)t99);
    memset(t112, 0, 8);
    t102 = (t112 + 4);
    t109 = (t101 + 4);
    t130 = *((unsigned int *)t101);
    t131 = (t130 >> 4);
    t132 = (t131 & 1);
    *((unsigned int *)t112) = t132;
    t133 = *((unsigned int *)t109);
    t134 = (t133 >> 4);
    t135 = (t134 & 1);
    *((unsigned int *)t102) = t135;
    t110 = (t0 + 600U);
    t111 = *((char **)t110);
    memset(t123, 0, 8);
    t110 = (t123 + 4);
    t113 = (t111 + 4);
    t136 = *((unsigned int *)t111);
    t137 = (t136 >> 3);
    t138 = (t137 & 1);
    *((unsigned int *)t123) = t138;
    t139 = *((unsigned int *)t113);
    t141 = (t139 >> 3);
    t142 = (t141 & 1);
    *((unsigned int *)t110) = t142;
    t114 = (t0 + 600U);
    t121 = *((char **)t114);
    memset(t149, 0, 8);
    t114 = (t149 + 4);
    t122 = (t121 + 4);
    t143 = *((unsigned int *)t121);
    t145 = (t143 >> 1);
    t146 = (t145 & 1);
    *((unsigned int *)t149) = t146;
    t147 = *((unsigned int *)t122);
    t148 = (t147 >> 1);
    t151 = (t148 & 1);
    *((unsigned int *)t114) = t151;
    xsi_vlogfile_write(1, 0, 0, ng8, 4, t0, (char)118, t112, 1, (char)118, t123, 1, (char)118, t149, 1);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 920);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 920);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB120;

LAB122:    xsi_set_current_line(48, ng0);
    t3 = (t0 + 920);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    xsi_vlogfile_write(1, 0, 0, ng9, 2, t0, (char)119, t5, 32);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1344);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB123;
    goto LAB1;

LAB123:    xsi_set_current_line(50, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}


extern void work_m_00000000003344992248_1949178628_init()
{
	static char *pe[] = {(void *)Initial_16_0};
	xsi_register_didat("work_m_00000000003344992248_1949178628", "isim/testbench_isim_beh.exe.sim/work/m_00000000003344992248_1949178628.didat");
	xsi_register_executes(pe);
}
