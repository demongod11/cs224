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
    work_m_06431764905307243545_2776626703_init();
    work_m_15284548669832055927_3866583278_init();
    work_m_15571303106304174388_2725559894_init();
    work_m_17044359612218310061_0295930199_init();
    work_m_05901738939456062978_3638609891_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_05901738939456062978_3638609891");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
