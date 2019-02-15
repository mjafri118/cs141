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
static const char *ng0 = "//vmware-host/Shared Folders/shared_with_vm/141git/cs141/pa2/lab2_start/test_adder_cascaded32.v";
static int ng1[] = {0, 0};
static int ng2[] = {31, 0};
static int ng3[] = {1, 0};
static const char *ng4 = "%b + %b is %b with carryover %b";
static unsigned int ng5[] = {1U, 0U, 0U, 0U};
static unsigned int ng6[] = {10U, 0U, 0U, 0U};
static const char *ng7 = "Error: %d + %d is %d with carryover %d";
static int ng8[] = {1, 0, 0, 0};
static const char *ng9 = "Completed.";



static void Initial_44_0(char *t0)
{
    char t3[8];
    char t13[8];
    char t14[8];
    char t15[8];
    char t39[16];
    char t61[8];
    char t87[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    int t23;
    char *t24;
    unsigned int t25;
    int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;
    char *t38;
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
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t88;

LAB0:    t1 = (t0 + 1628U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);

LAB4:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng1)));
    memset(t3, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    memcpy(t3, t2, 8);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t7 | t8);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 4294967295U);
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 4294967295U);
    t12 = (t0 + 920);
    t16 = (t0 + 920);
    t17 = (t16 + 44U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng2)));
    t20 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t13, t14, t15, ((int*)(t18)), 2, t19, 32, 1, t20, 32, 1);
    t21 = (t13 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 1012);
    t5 = (t0 + 1012);
    t12 = (t5 + 44U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng2)));
    t18 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t3, t13, t14, ((int*)(t16)), 2, t17, 32, 1, t18, 32, 1);
    t19 = (t3 + 4);
    t6 = *((unsigned int *)t19);
    t23 = (!(t6));
    t20 = (t13 + 4);
    t7 = *((unsigned int *)t20);
    t26 = (!(t7));
    t27 = (t23 && t26);
    t21 = (t14 + 4);
    t8 = *((unsigned int *)t21);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 1012);
    t5 = (t0 + 1012);
    t12 = (t5 + 44U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t3, t16, 2, t17, 32, 1);
    t18 = (t3 + 4);
    t6 = *((unsigned int *)t18);
    t23 = (!(t6));
    if (t23 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB6:    t32 = *((unsigned int *)t15);
    t33 = (t32 + 0);
    t34 = *((unsigned int *)t13);
    t35 = *((unsigned int *)t14);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t12, t3, t33, *((unsigned int *)t14), t37);
    goto LAB7;

LAB8:    t9 = *((unsigned int *)t14);
    t33 = (t9 + 0);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t13);
    t36 = (t10 - t11);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t4, t2, t33, *((unsigned int *)t13), t37);
    goto LAB9;

LAB10:    xsi_vlogvar_assign_value(t4, t2, 0, *((unsigned int *)t3), 1);
    goto LAB11;

LAB12:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 920);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t12 = (t3 + 4);
    t16 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t16);
    t9 = (t8 >> 0);
    *((unsigned int *)t12) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 4294967295U);
    t11 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t11 & 4294967295U);
    t17 = (t0 + 1012);
    t18 = (t17 + 36U);
    t19 = *((char **)t18);
    memset(t13, 0, 8);
    t20 = (t13 + 4);
    t21 = (t19 + 4);
    t22 = *((unsigned int *)t19);
    t25 = (t22 >> 0);
    *((unsigned int *)t13) = t25;
    t29 = *((unsigned int *)t21);
    t32 = (t29 >> 0);
    *((unsigned int *)t20) = t32;
    t34 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t34 & 4294967295U);
    t35 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t35 & 4294967295U);
    t24 = (t0 + 692U);
    t28 = *((char **)t24);
    t24 = (t0 + 600U);
    t38 = *((char **)t24);
    xsi_vlogfile_write(1, 0, 0, ng4, 5, t0, (char)118, t3, 32, (char)118, t13, 32, (char)118, t28, 32, (char)118, t38, 1);
    xsi_set_current_line(58, ng0);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 1012);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 33);

LAB13:    t2 = (t0 + 1012);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    t12 = ((char*)((ng6)));
    xsi_vlog_unsigned_not_equal(t39, 33, t5, 33, t12, 33);
    t16 = (t39 + 4);
    t6 = *((unsigned int *)t16);
    t7 = (~(t6));
    t8 = *((unsigned int *)t39);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(72, ng0);
    xsi_vlogfile_write(1, 0, 0, ng9, 1, t0);
    goto LAB1;

LAB14:    xsi_set_current_line(58, ng0);

LAB16:    xsi_set_current_line(59, ng0);
    xsi_set_current_line(59, ng0);
    t17 = ((char*)((ng5)));
    t18 = (t0 + 920);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 33);

LAB17:    t2 = (t0 + 920);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    t12 = ((char*)((ng6)));
    xsi_vlog_unsigned_not_equal(t39, 33, t5, 33, t12, 33);
    t16 = (t39 + 4);
    t6 = *((unsigned int *)t16);
    t7 = (~(t6));
    t8 = *((unsigned int *)t39);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1012);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    t12 = ((char*)((ng8)));
    xsi_vlog_unsigned_add(t39, 33, t5, 33, t12, 32);
    t16 = (t0 + 1012);
    xsi_vlogvar_assign_value(t16, t39, 0, 0, 33);
    goto LAB13;

LAB18:    xsi_set_current_line(59, ng0);

LAB20:    xsi_set_current_line(60, ng0);
    t17 = (t0 + 1528);
    xsi_process_wait(t17, 100000LL);
    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB21:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 920);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t12 = (t3 + 4);
    t16 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t16);
    t9 = (t8 >> 0);
    *((unsigned int *)t12) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 4294967295U);
    t11 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t11 & 4294967295U);
    t17 = (t0 + 1012);
    t18 = (t17 + 36U);
    t19 = *((char **)t18);
    memset(t13, 0, 8);
    t20 = (t13 + 4);
    t21 = (t19 + 4);
    t22 = *((unsigned int *)t19);
    t25 = (t22 >> 0);
    *((unsigned int *)t13) = t25;
    t29 = *((unsigned int *)t21);
    t32 = (t29 >> 0);
    *((unsigned int *)t20) = t32;
    t34 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t34 & 4294967295U);
    t35 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t35 & 4294967295U);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t3, 32, t13, 32);
    t24 = (t0 + 692U);
    t28 = *((char **)t24);
    memset(t15, 0, 8);
    t24 = (t14 + 4);
    t38 = (t28 + 4);
    t40 = *((unsigned int *)t14);
    t41 = *((unsigned int *)t28);
    t42 = (t40 ^ t41);
    t43 = *((unsigned int *)t24);
    t44 = *((unsigned int *)t38);
    t45 = (t43 ^ t44);
    t46 = (t42 | t45);
    t47 = *((unsigned int *)t24);
    t48 = *((unsigned int *)t38);
    t49 = (t47 | t48);
    t50 = (~(t49));
    t51 = (t46 & t50);
    if (t51 != 0)
        goto LAB23;

LAB22:    if (t49 != 0)
        goto LAB24;

LAB25:    t53 = (t15 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t15);
    t57 = (t56 & t55);
    t58 = (t57 != 0);
    if (t58 > 0)
        goto LAB26;

LAB27:
LAB28:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 920);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    t12 = ((char*)((ng8)));
    xsi_vlog_unsigned_add(t39, 33, t5, 33, t12, 32);
    t16 = (t0 + 920);
    xsi_vlogvar_assign_value(t16, t39, 0, 0, 33);
    goto LAB17;

LAB23:    *((unsigned int *)t15) = 1;
    goto LAB25;

LAB24:    t52 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(61, ng0);

LAB29:    xsi_set_current_line(62, ng0);
    t59 = (t0 + 600U);
    t60 = *((char **)t59);
    t59 = ((char*)((ng3)));
    memset(t61, 0, 8);
    t62 = (t60 + 4);
    t63 = (t59 + 4);
    t64 = *((unsigned int *)t60);
    t65 = *((unsigned int *)t59);
    t66 = (t64 ^ t65);
    t67 = *((unsigned int *)t62);
    t68 = *((unsigned int *)t63);
    t69 = (t67 ^ t68);
    t70 = (t66 | t69);
    t71 = *((unsigned int *)t62);
    t72 = *((unsigned int *)t63);
    t73 = (t71 | t72);
    t74 = (~(t73));
    t75 = (t70 & t74);
    if (t75 != 0)
        goto LAB31;

LAB30:    if (t73 != 0)
        goto LAB32;

LAB33:    t77 = (t61 + 4);
    t78 = *((unsigned int *)t77);
    t79 = (~(t78));
    t80 = *((unsigned int *)t61);
    t81 = (t80 & t79);
    t82 = (t81 != 0);
    if (t82 > 0)
        goto LAB34;

LAB35:
LAB36:    goto LAB28;

LAB31:    *((unsigned int *)t61) = 1;
    goto LAB33;

LAB32:    t76 = (t61 + 4);
    *((unsigned int *)t61) = 1;
    *((unsigned int *)t76) = 1;
    goto LAB33;

LAB34:    xsi_set_current_line(62, ng0);

LAB37:    xsi_set_current_line(63, ng0);
    t83 = (t0 + 1104);
    t84 = (t83 + 36U);
    t85 = *((char **)t84);
    t86 = ((char*)((ng3)));
    memset(t87, 0, 8);
    xsi_vlog_signed_add(t87, 32, t85, 32, t86, 32);
    t88 = (t0 + 1104);
    xsi_vlogvar_assign_value(t88, t87, 0, 0, 32);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 920);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t12 = (t3 + 4);
    t16 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t16);
    t9 = (t8 >> 0);
    *((unsigned int *)t12) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 4294967295U);
    t11 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t11 & 4294967295U);
    t17 = (t0 + 1012);
    t18 = (t17 + 36U);
    t19 = *((char **)t18);
    memset(t13, 0, 8);
    t20 = (t13 + 4);
    t21 = (t19 + 4);
    t22 = *((unsigned int *)t19);
    t25 = (t22 >> 0);
    *((unsigned int *)t13) = t25;
    t29 = *((unsigned int *)t21);
    t32 = (t29 >> 0);
    *((unsigned int *)t20) = t32;
    t34 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t34 & 4294967295U);
    t35 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t35 & 4294967295U);
    t24 = (t0 + 692U);
    t28 = *((char **)t24);
    t24 = (t0 + 600U);
    t38 = *((char **)t24);
    xsi_vlogfile_write(1, 0, 0, ng7, 5, t0, (char)118, t3, 32, (char)118, t13, 32, (char)118, t28, 32, (char)118, t38, 1);
    goto LAB36;

}


extern void work_m_00000000002850755767_2928194760_init()
{
	static char *pe[] = {(void *)Initial_44_0};
	xsi_register_didat("work_m_00000000002850755767_2928194760", "isim/test_adder_cascaded32_isim_beh.exe.sim/work/m_00000000002850755767_2928194760.didat");
	xsi_register_executes(pe);
}
