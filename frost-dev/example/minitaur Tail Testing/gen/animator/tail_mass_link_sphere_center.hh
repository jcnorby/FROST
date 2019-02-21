/*
 * Automatically Generated from Mathematica.
 * Mon 6 Aug 2018 16:06:40 GMT-04:00
 */

#ifndef TAIL_MASS_LINK_SPHERE_CENTER_HH
#define TAIL_MASS_LINK_SPHERE_CENTER_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void tail_mass_link_sphere_center_raw(double *p_output1, const double *var1);

  inline void tail_mass_link_sphere_center(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 9, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    tail_mass_link_sphere_center_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // TAIL_MASS_LINK_SPHERE_CENTER_HH
