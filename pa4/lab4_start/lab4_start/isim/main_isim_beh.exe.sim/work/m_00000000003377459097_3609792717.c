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
static const char *ng0 = "//vmware-host/Shared Folders/shared_with_vm/141git/cs141/pa4/lab4_start/lab4_start/remote_sources/_/_/common/debouncer.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};



static void Always_18_0(char *t0)
{
    char t13[8];
    char t21[8];
    char t28[8];
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
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    int t20;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;

LAB0:    t1 = (t0 + 1960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 2156);
    *((int *)t2) = 1;
    t3 = (t0 + 1988);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(18, ng0);

LAB5:    xsi_set_current_line(19, ng0);
    t4 = (t0 + 932U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(25, ng0);

LAB14:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 1024U);
    t3 = *((char **)t2);
    t2 = (t0 + 1436);
    t4 = (t0 + 1436);
    t5 = (t4 + 44U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t14 = (t13 + 4);
    t6 = *((unsigned int *)t14);
    t20 = (!(t6));
    if (t20 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1436);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 0);
    t19 = (t10 & 1);
    *((unsigned int *)t5) = t19;
    t12 = (t0 + 1436);
    t14 = (t0 + 1436);
    t15 = (t14 + 44U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t21, t16, 2, t17, 32, 1);
    t18 = (t21 + 4);
    t22 = *((unsigned int *)t18);
    t20 = (!(t22));
    if (t20 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1436);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 0);
    t19 = (t10 & 1);
    *((unsigned int *)t5) = t19;
    t12 = (t0 + 1436);
    t14 = (t12 + 36U);
    t15 = *((char **)t14);
    memset(t21, 0, 8);
    t16 = (t21 + 4);
    t17 = (t15 + 4);
    t22 = *((unsigned int *)t15);
    t23 = (t22 >> 1);
    t24 = (t23 & 1);
    *((unsigned int *)t21) = t24;
    t25 = *((unsigned int *)t17);
    t26 = (t25 >> 1);
    t27 = (t26 & 1);
    *((unsigned int *)t16) = t27;
    t29 = *((unsigned int *)t13);
    t30 = *((unsigned int *)t21);
    t31 = (t29 ^ t30);
    *((unsigned int *)t28) = t31;
    t18 = (t13 + 4);
    t32 = (t21 + 4);
    t33 = (t28 + 4);
    t34 = *((unsigned int *)t18);
    t35 = *((unsigned int *)t32);
    t36 = (t34 | t35);
    *((unsigned int *)t33) = t36;
    t37 = *((unsigned int *)t33);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB19;

LAB20:
LAB21:    t41 = (t28 + 4);
    t42 = *((unsigned int *)t41);
    t43 = (~(t42));
    t44 = *((unsigned int *)t28);
    t45 = (t44 & t43);
    t46 = (t45 != 0);
    if (t46 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1344);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 264);
    t11 = *((char **)t5);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB27;

LAB26:    t12 = (t11 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB27;

LAB30:    if (*((unsigned int *)t4) < *((unsigned int *)t11))
        goto LAB28;

LAB29:    t15 = (t13 + 4);
    t6 = *((unsigned int *)t15);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(35, ng0);

LAB35:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1436);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 1);
    t19 = (t10 & 1);
    *((unsigned int *)t5) = t19;
    t12 = (t0 + 1252);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 1, 0LL);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1344);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB33:
LAB24:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(19, ng0);

LAB9:    xsi_set_current_line(20, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1436);
    t14 = (t0 + 1436);
    t15 = (t14 + 44U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t13, t16, 2, t17, 32, 1);
    t18 = (t13 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    if (t20 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(21, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1436);
    t4 = (t0 + 1436);
    t5 = (t4 + 44U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t14 = (t13 + 4);
    t6 = *((unsigned int *)t14);
    t20 = (!(t6));
    if (t20 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(22, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1252);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(23, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1344);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB8;

LAB10:    xsi_vlogvar_wait_assign_value(t12, t11, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB11;

LAB12:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB13;

LAB15:    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB16;

LAB17:    xsi_vlogvar_wait_assign_value(t12, t13, 0, *((unsigned int *)t21), 1, 0LL);
    goto LAB18;

LAB19:    t39 = *((unsigned int *)t28);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t28) = (t39 | t40);
    goto LAB21;

LAB22:    xsi_set_current_line(29, ng0);

LAB25:    xsi_set_current_line(30, ng0);
    t47 = ((char*)((ng2)));
    t48 = (t0 + 1344);
    xsi_vlogvar_wait_assign_value(t48, t47, 0, 0, 32, 0LL);
    goto LAB24;

LAB27:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB29;

LAB28:    *((unsigned int *)t13) = 1;
    goto LAB29;

LAB31:    xsi_set_current_line(32, ng0);

LAB34:    xsi_set_current_line(33, ng0);
    t16 = (t0 + 1344);
    t17 = (t16 + 36U);
    t18 = *((char **)t17);
    t32 = ((char*)((ng3)));
    memset(t21, 0, 8);
    xsi_vlog_unsigned_add(t21, 32, t18, 32, t32, 32);
    t33 = (t0 + 1344);
    xsi_vlogvar_wait_assign_value(t33, t21, 0, 0, 32, 0LL);
    goto LAB33;

}


extern void work_m_00000000003377459097_3609792717_init()
{
	static char *pe[] = {(void *)Always_18_0};
	xsi_register_didat("work_m_00000000003377459097_3609792717", "isim/main_isim_beh.exe.sim/work/m_00000000003377459097_3609792717.didat");
	xsi_register_executes(pe);
}
