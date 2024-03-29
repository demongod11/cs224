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
    work_m_00506834123032337012_2776626703_init();
    work_m_14220055312613656660_3866583278_init();
    work_m_07118653467967906694_2725559894_init();
    work_m_05951972426488057587_0295930199_init();
    work_m_08996382425971210818_4120148092_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_08996382425971210818_4120148092");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
