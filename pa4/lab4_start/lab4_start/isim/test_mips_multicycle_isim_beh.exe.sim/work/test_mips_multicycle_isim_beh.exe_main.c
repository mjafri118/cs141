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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000000511471136_0794791112_init();
    work_m_00000000002912778239_0254944361_init();
    work_m_00000000002912778239_4144566460_init();
    work_m_00000000004140874025_3214250594_init();
    work_m_00000000002912778239_0752731064_init();
    work_m_00000000004140874025_0928715183_init();
    work_m_00000000004140874025_3577147383_init();
    work_m_00000000003475029898_0216023881_init();
    work_m_00000000001788519692_2725559894_init();
    work_m_00000000002834159239_1233845728_init();
    work_m_00000000002834159239_3913188552_init();
    work_m_00000000003369707680_0995678097_init();
    work_m_00000000002834159239_1883927387_init();
    work_m_00000000000353597147_0278921292_init();
    work_m_00000000002686594337_0032016439_init();
    work_m_00000000002686594337_3251284117_init();
    work_m_00000000001865182114_1020968299_init();
    work_m_00000000003733624810_1697483925_init();
    work_m_00000000003625193476_1602209333_init();
    work_m_00000000000253588458_3459225917_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000253588458_3459225917");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
