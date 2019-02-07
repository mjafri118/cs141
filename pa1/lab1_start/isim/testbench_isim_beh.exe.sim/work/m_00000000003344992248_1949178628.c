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
static int ng7[] = {2, 0};
static int ng8[] = {3, 0};
static int ng9[] = {4, 0};
static int ng10[] = {5, 0};
static int ng11[] = {6, 0};
static int ng12[] = {7, 0};
static const char *ng13 = "ERROR: Sum is %d, but led is %b";
static const char *ng14 = "ERROR: switch[4]=%b, led[3]=%b, led[0]=%b, led[1]=%b";
static const char *ng15 = "Finished with %d errors";



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
    char t201[8];
    char t204[8];
    char t208[8];
    char t216[8];
    char t222[8];
    char t225[8];
    char t229[8];
    char t232[8];
    char t236[8];
    char t239[8];
    char t243[8];
    char t246[8];
    char t250[8];
    char t253[8];
    char t257[8];
    char t260[8];
    char t264[8];
    char t267[8];
    char t270[8];
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
    char *t200;
    char *t202;
    char *t203;
    char *t205;
    char *t206;
    char *t207;
    char *t209;
    char *t210;
    char *t211;
    char *t212;
    char *t213;
    char *t214;
    char *t215;
    char *t217;
    char *t218;
    char *t219;
    char *t220;
    char *t221;
    char *t223;
    char *t224;
    char *t226;
    char *t227;
    char *t228;
    char *t230;
    char *t231;
    char *t233;
    char *t234;
    char *t235;
    char *t237;
    char *t238;
    char *t240;
    char *t241;
    char *t242;
    char *t244;
    char *t245;
    char *t247;
    char *t248;
    char *t249;
    char *t251;
    char *t252;
    char *t254;
    char *t255;
    char *t256;
    char *t258;
    char *t259;
    char *t261;
    char *t262;
    char *t263;
    char *t265;
    char *t266;
    char *t268;
    char *t269;
    char *t271;

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

LAB11:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1344);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB107;

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
    t5 = (t0 + 828);
    t7 = (t5 + 44U);
    t8 = *((char **)t7);
    t21 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t4, t8, 2, t21, 32, 1);
    t22 = (t0 + 828);
    t28 = (t22 + 36U);
    t30 = *((char **)t28);
    t31 = (t0 + 828);
    t33 = (t31 + 44U);
    t34 = *((char **)t33);
    t38 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t29, 32, t30, t34, 2, t38, 32, 1);
    memset(t32, 0, 8);
    xsi_vlog_unsigned_add(t32, 32, t6, 32, t29, 32);
    t39 = (t0 + 828);
    t41 = (t39 + 36U);
    t49 = *((char **)t41);
    t50 = (t0 + 828);
    t52 = (t50 + 44U);
    t58 = *((char **)t52);
    t63 = ((char*)((ng7)));
    xsi_vlog_generic_get_index_select_value(t40, 32, t49, t58, 2, t63, 32, 1);
    memset(t48, 0, 8);
    xsi_vlog_unsigned_add(t48, 32, t32, 32, t40, 32);
    t64 = (t0 + 828);
    t65 = (t64 + 36U);
    t73 = *((char **)t65);
    t74 = (t0 + 828);
    t91 = (t74 + 44U);
    t97 = *((char **)t91);
    t98 = ((char*)((ng8)));
    xsi_vlog_generic_get_index_select_value(t51, 32, t73, t97, 2, t98, 32, 1);
    memset(t59, 0, 8);
    xsi_vlog_unsigned_add(t59, 32, t48, 32, t51, 32);
    t99 = (t0 + 828);
    t101 = (t99 + 36U);
    t102 = *((char **)t101);
    t109 = (t0 + 828);
    t110 = (t109 + 44U);
    t111 = *((char **)t110);
    t113 = ((char*)((ng9)));
    xsi_vlog_generic_get_index_select_value(t100, 32, t102, t111, 2, t113, 32, 1);
    memset(t112, 0, 8);
    xsi_vlog_unsigned_add(t112, 32, t59, 32, t100, 32);
    t114 = (t0 + 828);
    t121 = (t114 + 36U);
    t122 = *((char **)t121);
    t124 = (t0 + 828);
    t150 = (t124 + 44U);
    t158 = *((char **)t150);
    t159 = ((char*)((ng10)));
    xsi_vlog_generic_get_index_select_value(t123, 32, t122, t158, 2, t159, 32, 1);
    memset(t149, 0, 8);
    xsi_vlog_unsigned_add(t149, 32, t112, 32, t123, 32);
    t160 = (t0 + 828);
    t166 = (t160 + 36U);
    t167 = *((char **)t166);
    t168 = (t0 + 828);
    t170 = (t168 + 44U);
    t171 = *((char **)t170);
    t178 = ((char*)((ng11)));
    xsi_vlog_generic_get_index_select_value(t157, 32, t167, t171, 2, t178, 32, 1);
    memset(t169, 0, 8);
    xsi_vlog_unsigned_add(t169, 32, t149, 32, t157, 32);
    t179 = (t0 + 828);
    t180 = (t179 + 36U);
    t182 = *((char **)t180);
    t183 = (t0 + 828);
    t190 = (t183 + 44U);
    t191 = *((char **)t190);
    t193 = ((char*)((ng12)));
    xsi_vlog_generic_get_index_select_value(t181, 32, t182, t191, 2, t193, 32, 1);
    memset(t192, 0, 8);
    xsi_vlog_unsigned_add(t192, 32, t169, 32, t181, 32);
    t200 = ((char*)((ng7)));
    memset(t201, 0, 8);
    xsi_vlog_unsigned_mod(t201, 32, t192, 32, t200, 32);
    t202 = (t0 + 600U);
    t203 = *((char **)t202);
    t202 = (t0 + 576U);
    t205 = (t202 + 44U);
    t206 = *((char **)t205);
    t207 = ((char*)((ng7)));
    xsi_vlog_generic_get_index_select_value(t204, 32, t203, t206, 2, t207, 32, 1);
    memset(t208, 0, 8);
    t209 = (t201 + 4);
    t210 = (t204 + 4);
    t9 = *((unsigned int *)t201);
    t10 = *((unsigned int *)t204);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t209);
    t13 = *((unsigned int *)t210);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t209);
    t17 = *((unsigned int *)t210);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB77;

LAB74:    if (t18 != 0)
        goto LAB76;

LAB75:    *((unsigned int *)t208) = 1;

LAB77:    t212 = (t208 + 4);
    t23 = *((unsigned int *)t212);
    t24 = (~(t23));
    t25 = *((unsigned int *)t208);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB78;

LAB79:
LAB80:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 828);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t32, 0, 8);
    t5 = (t32 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 4);
    t11 = (t10 & 1);
    *((unsigned int *)t32) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 4);
    t14 = (t13 & 1);
    *((unsigned int *)t5) = t14;
    memset(t29, 0, 8);
    t8 = (t32 + 4);
    t15 = *((unsigned int *)t8);
    t16 = (~(t15));
    t17 = *((unsigned int *)t32);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t8) != 0)
        goto LAB84;

LAB85:    t22 = (t29 + 4);
    t20 = *((unsigned int *)t29);
    t23 = *((unsigned int *)t22);
    t24 = (t20 || t23);
    if (t24 > 0)
        goto LAB86;

LAB87:    t70 = *((unsigned int *)t29);
    t71 = (~(t70));
    t72 = *((unsigned int *)t22);
    t75 = (t71 || t72);
    if (t75 > 0)
        goto LAB88;

LAB89:    if (*((unsigned int *)t22) > 0)
        goto LAB90;

LAB91:    if (*((unsigned int *)t29) > 0)
        goto LAB92;

LAB93:    memcpy(t6, t112, 8);

LAB94:    t97 = (t6 + 4);
    t115 = *((unsigned int *)t97);
    t116 = (~(t115));
    t117 = *((unsigned int *)t6);
    t118 = (t117 & t116);
    t119 = (t118 != 0);
    if (t119 > 0)
        goto LAB103;

LAB104:
LAB105:    xsi_set_current_line(17, ng0);
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

LAB76:    t211 = (t208 + 4);
    *((unsigned int *)t208) = 1;
    *((unsigned int *)t211) = 1;
    goto LAB77;

LAB78:    xsi_set_current_line(35, ng0);

LAB81:    xsi_set_current_line(36, ng0);
    t213 = (t0 + 828);
    t214 = (t213 + 36U);
    t215 = *((char **)t214);
    memset(t216, 0, 8);
    t217 = (t216 + 4);
    t218 = (t215 + 4);
    t35 = *((unsigned int *)t215);
    t36 = (t35 >> 0);
    t37 = (t36 & 1);
    *((unsigned int *)t216) = t37;
    t42 = *((unsigned int *)t218);
    t43 = (t42 >> 0);
    t44 = (t43 & 1);
    *((unsigned int *)t217) = t44;
    t219 = (t0 + 828);
    t220 = (t219 + 36U);
    t221 = *((char **)t220);
    memset(t222, 0, 8);
    t223 = (t222 + 4);
    t224 = (t221 + 4);
    t45 = *((unsigned int *)t221);
    t46 = (t45 >> 1);
    t47 = (t46 & 1);
    *((unsigned int *)t222) = t47;
    t53 = *((unsigned int *)t224);
    t54 = (t53 >> 1);
    t55 = (t54 & 1);
    *((unsigned int *)t223) = t55;
    memset(t225, 0, 8);
    xsi_vlog_unsigned_add(t225, 1, t216, 1, t222, 1);
    t226 = (t0 + 828);
    t227 = (t226 + 36U);
    t228 = *((char **)t227);
    memset(t229, 0, 8);
    t230 = (t229 + 4);
    t231 = (t228 + 4);
    t56 = *((unsigned int *)t228);
    t57 = (t56 >> 2);
    t60 = (t57 & 1);
    *((unsigned int *)t229) = t60;
    t61 = *((unsigned int *)t231);
    t62 = (t61 >> 2);
    t66 = (t62 & 1);
    *((unsigned int *)t230) = t66;
    memset(t232, 0, 8);
    xsi_vlog_unsigned_add(t232, 1, t225, 1, t229, 1);
    t233 = (t0 + 828);
    t234 = (t233 + 36U);
    t235 = *((char **)t234);
    memset(t236, 0, 8);
    t237 = (t236 + 4);
    t238 = (t235 + 4);
    t67 = *((unsigned int *)t235);
    t68 = (t67 >> 3);
    t69 = (t68 & 1);
    *((unsigned int *)t236) = t69;
    t70 = *((unsigned int *)t238);
    t71 = (t70 >> 3);
    t72 = (t71 & 1);
    *((unsigned int *)t237) = t72;
    memset(t239, 0, 8);
    xsi_vlog_unsigned_add(t239, 1, t232, 1, t236, 1);
    t240 = (t0 + 828);
    t241 = (t240 + 36U);
    t242 = *((char **)t241);
    memset(t243, 0, 8);
    t244 = (t243 + 4);
    t245 = (t242 + 4);
    t75 = *((unsigned int *)t242);
    t76 = (t75 >> 4);
    t77 = (t76 & 1);
    *((unsigned int *)t243) = t77;
    t78 = *((unsigned int *)t245);
    t79 = (t78 >> 4);
    t80 = (t79 & 1);
    *((unsigned int *)t244) = t80;
    memset(t246, 0, 8);
    xsi_vlog_unsigned_add(t246, 1, t239, 1, t243, 1);
    t247 = (t0 + 828);
    t248 = (t247 + 36U);
    t249 = *((char **)t248);
    memset(t250, 0, 8);
    t251 = (t250 + 4);
    t252 = (t249 + 4);
    t81 = *((unsigned int *)t249);
    t82 = (t81 >> 5);
    t85 = (t82 & 1);
    *((unsigned int *)t250) = t85;
    t86 = *((unsigned int *)t252);
    t87 = (t86 >> 5);
    t88 = (t87 & 1);
    *((unsigned int *)t251) = t88;
    memset(t253, 0, 8);
    xsi_vlog_unsigned_add(t253, 1, t246, 1, t250, 1);
    t254 = (t0 + 828);
    t255 = (t254 + 36U);
    t256 = *((char **)t255);
    memset(t257, 0, 8);
    t258 = (t257 + 4);
    t259 = (t256 + 4);
    t89 = *((unsigned int *)t256);
    t90 = (t89 >> 6);
    t92 = (t90 & 1);
    *((unsigned int *)t257) = t92;
    t93 = *((unsigned int *)t259);
    t94 = (t93 >> 6);
    t95 = (t94 & 1);
    *((unsigned int *)t258) = t95;
    memset(t260, 0, 8);
    xsi_vlog_unsigned_add(t260, 1, t253, 1, t257, 1);
    t261 = (t0 + 828);
    t262 = (t261 + 36U);
    t263 = *((char **)t262);
    memset(t264, 0, 8);
    t265 = (t264 + 4);
    t266 = (t263 + 4);
    t96 = *((unsigned int *)t263);
    t103 = (t96 >> 7);
    t104 = (t103 & 1);
    *((unsigned int *)t264) = t104;
    t105 = *((unsigned int *)t266);
    t106 = (t105 >> 7);
    t107 = (t106 & 1);
    *((unsigned int *)t265) = t107;
    memset(t267, 0, 8);
    xsi_vlog_unsigned_add(t267, 1, t260, 1, t264, 1);
    t268 = (t0 + 600U);
    t269 = *((char **)t268);
    memset(t270, 0, 8);
    t268 = (t270 + 4);
    t271 = (t269 + 4);
    t108 = *((unsigned int *)t269);
    t115 = (t108 >> 2);
    t116 = (t115 & 1);
    *((unsigned int *)t270) = t116;
    t117 = *((unsigned int *)t271);
    t118 = (t117 >> 2);
    t119 = (t118 & 1);
    *((unsigned int *)t268) = t119;
    xsi_vlogfile_write(1, 0, 0, ng13, 3, t0, (char)118, t267, 1, (char)118, t270, 1);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 920);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 920);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB80;

LAB82:    *((unsigned int *)t29) = 1;
    goto LAB85;

LAB84:    t21 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB85;

LAB86:    t28 = (t0 + 600U);
    t30 = *((char **)t28);
    memset(t40, 0, 8);
    t28 = (t40 + 4);
    t31 = (t30 + 4);
    t25 = *((unsigned int *)t30);
    t26 = (t25 >> 3);
    t27 = (t26 & 1);
    *((unsigned int *)t40) = t27;
    t35 = *((unsigned int *)t31);
    t36 = (t35 >> 3);
    t37 = (t36 & 1);
    *((unsigned int *)t28) = t37;
    t33 = (t0 + 600U);
    t34 = *((char **)t33);
    memset(t48, 0, 8);
    t33 = (t48 + 4);
    t38 = (t34 + 4);
    t42 = *((unsigned int *)t34);
    t43 = (t42 >> 0);
    t44 = (t43 & 1);
    *((unsigned int *)t48) = t44;
    t45 = *((unsigned int *)t38);
    t46 = (t45 >> 0);
    t47 = (t46 & 1);
    *((unsigned int *)t33) = t47;
    memset(t51, 0, 8);
    t39 = (t40 + 4);
    t41 = (t48 + 4);
    t53 = *((unsigned int *)t40);
    t54 = *((unsigned int *)t48);
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
        goto LAB96;

LAB95:    if (t67 != 0)
        goto LAB97;

LAB98:    goto LAB87;

LAB88:    t50 = (t0 + 600U);
    t52 = *((char **)t50);
    memset(t59, 0, 8);
    t50 = (t59 + 4);
    t58 = (t52 + 4);
    t76 = *((unsigned int *)t52);
    t77 = (t76 >> 3);
    t78 = (t77 & 1);
    *((unsigned int *)t59) = t78;
    t79 = *((unsigned int *)t58);
    t80 = (t79 >> 3);
    t81 = (t80 & 1);
    *((unsigned int *)t50) = t81;
    t63 = (t0 + 600U);
    t64 = *((char **)t63);
    memset(t100, 0, 8);
    t63 = (t100 + 4);
    t65 = (t64 + 4);
    t82 = *((unsigned int *)t64);
    t85 = (t82 >> 1);
    t86 = (t85 & 1);
    *((unsigned int *)t100) = t86;
    t87 = *((unsigned int *)t65);
    t88 = (t87 >> 1);
    t89 = (t88 & 1);
    *((unsigned int *)t63) = t89;
    memset(t112, 0, 8);
    t73 = (t59 + 4);
    t74 = (t100 + 4);
    t90 = *((unsigned int *)t59);
    t92 = *((unsigned int *)t100);
    t93 = (t90 ^ t92);
    t94 = *((unsigned int *)t73);
    t95 = *((unsigned int *)t74);
    t96 = (t94 ^ t95);
    t103 = (t93 | t96);
    t104 = *((unsigned int *)t73);
    t105 = *((unsigned int *)t74);
    t106 = (t104 | t105);
    t107 = (~(t106));
    t108 = (t103 & t107);
    if (t108 != 0)
        goto LAB100;

LAB99:    if (t106 != 0)
        goto LAB101;

LAB102:    goto LAB89;

LAB90:    xsi_vlog_unsigned_bit_combine(t6, 1, t51, 1, t112, 1);
    goto LAB94;

LAB92:    memcpy(t6, t51, 8);
    goto LAB94;

LAB96:    *((unsigned int *)t51) = 1;
    goto LAB98;

LAB97:    t49 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB98;

LAB100:    *((unsigned int *)t112) = 1;
    goto LAB102;

LAB101:    t91 = (t112 + 4);
    *((unsigned int *)t112) = 1;
    *((unsigned int *)t91) = 1;
    goto LAB102;

LAB103:    xsi_set_current_line(41, ng0);

LAB106:    xsi_set_current_line(42, ng0);
    t98 = (t0 + 828);
    t99 = (t98 + 36U);
    t101 = *((char **)t99);
    memset(t123, 0, 8);
    t102 = (t123 + 4);
    t109 = (t101 + 4);
    t120 = *((unsigned int *)t101);
    t125 = (t120 >> 4);
    t126 = (t125 & 1);
    *((unsigned int *)t123) = t126;
    t127 = *((unsigned int *)t109);
    t128 = (t127 >> 4);
    t129 = (t128 & 1);
    *((unsigned int *)t102) = t129;
    t110 = (t0 + 600U);
    t111 = *((char **)t110);
    memset(t149, 0, 8);
    t110 = (t149 + 4);
    t113 = (t111 + 4);
    t130 = *((unsigned int *)t111);
    t131 = (t130 >> 3);
    t132 = (t131 & 1);
    *((unsigned int *)t149) = t132;
    t133 = *((unsigned int *)t113);
    t134 = (t133 >> 3);
    t135 = (t134 & 1);
    *((unsigned int *)t110) = t135;
    t114 = (t0 + 600U);
    t121 = *((char **)t114);
    memset(t157, 0, 8);
    t114 = (t157 + 4);
    t122 = (t121 + 4);
    t136 = *((unsigned int *)t121);
    t137 = (t136 >> 0);
    t138 = (t137 & 1);
    *((unsigned int *)t157) = t138;
    t139 = *((unsigned int *)t122);
    t141 = (t139 >> 0);
    t142 = (t141 & 1);
    *((unsigned int *)t114) = t142;
    t124 = (t0 + 600U);
    t150 = *((char **)t124);
    memset(t169, 0, 8);
    t124 = (t169 + 4);
    t158 = (t150 + 4);
    t143 = *((unsigned int *)t150);
    t145 = (t143 >> 1);
    t146 = (t145 & 1);
    *((unsigned int *)t169) = t146;
    t147 = *((unsigned int *)t158);
    t148 = (t147 >> 1);
    t151 = (t148 & 1);
    *((unsigned int *)t124) = t151;
    xsi_vlogfile_write(1, 0, 0, ng14, 5, t0, (char)118, t123, 1, (char)118, t149, 1, (char)118, t157, 1, (char)118, t169, 1);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 920);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 920);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB105;

LAB107:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 920);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    xsi_vlogfile_write(1, 0, 0, ng15, 2, t0, (char)119, t5, 32);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1344);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB108;
    goto LAB1;

LAB108:    xsi_set_current_line(56, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}


extern void work_m_00000000003344992248_1949178628_init()
{
	static char *pe[] = {(void *)Initial_16_0};
	xsi_register_didat("work_m_00000000003344992248_1949178628", "isim/testbench_isim_beh.exe.sim/work/m_00000000003344992248_1949178628.didat");
	xsi_register_executes(pe);
}
