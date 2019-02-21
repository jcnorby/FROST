/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:08:46 GMT-04:00
 */

#ifndef LOWER_LEG_FRONT_RIGHTL_LINK_BAR_HH
#define LOWER_LEG_FRONT_RIGHTL_LINK_BAR_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void lower_leg_front_rightL_link_bar_raw(double *p_output1, const double *var1);

  inline void lower_leg_front_rightL_link_bar(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 25, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 20, 6);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    lower_leg_front_rightL_link_bar_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // LOWER_LEG_FRONT_RIGHTL_LINK_BAR_HH
