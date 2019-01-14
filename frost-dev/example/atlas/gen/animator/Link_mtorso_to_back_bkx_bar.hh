/*
 * Automatically Generated from Mathematica.
 * Wed 27 Dec 2017 22:38:39 GMT-06:00
 */

#ifndef LINK_MTORSO_TO_BACK_BKX_BAR_HH
#define LINK_MTORSO_TO_BACK_BKX_BAR_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void Link_mtorso_to_back_bkx_bar_raw(double *p_output1, const double *var1);

  inline void Link_mtorso_to_back_bkx_bar(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 21, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 20, 6);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Link_mtorso_to_back_bkx_bar_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // LINK_MTORSO_TO_BACK_BKX_BAR_HH
