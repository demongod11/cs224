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
    work_m_00000000003148448793_2776626703_init();
    work_m_00000000003246541943_3866583278_init();
    work_m_00000000003308415284_2725559894_init();
    work_m_00000000003979095964_0295930199_init();
    work_m_00000000001141805784_0921609935_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001141805784_0921609935");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
