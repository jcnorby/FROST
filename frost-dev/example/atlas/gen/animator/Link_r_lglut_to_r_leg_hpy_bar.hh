/*
 * Automatically Generated from Mathematica.
 * Wed 27 Dec 2017 22:39:07 GMT-06:00
 */

#ifndef LINK_R_LGLUT_TO_R_LEG_HPY_BAR_HH
#define LINK_R_LGLUT_TO_R_LEG_HPY_BAR_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void Link_r_lglut_to_r_leg_hpy_bar_raw(double *p_output1, const double *var1);

  inline void Link_r_lglut_to_r_leg_hpy_bar(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 21, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 20, 6);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Link_r_lglut_to_r_leg_hpy_bar_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // LINK_R_LGLUT_TO_R_LEG_HPY_BAR_HH
