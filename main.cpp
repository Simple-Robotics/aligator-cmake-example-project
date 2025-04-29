#include <aligator/solvers/proxddp/solver-proxddp.hpp>
#include <aligator/modelling/linear-discrete-dynamics.hpp>

int main() 
{
  constexpr Eigen::Index nx = 10;
  constexpr Eigen::Index nu = 4;
  Eigen::MatrixXd A{nx, nx}, B{nx, nu};
  Eigen::VectorXd c{nx};
  aligator::dynamics::LinearDiscreteDynamicsTpl<double> dynamics{A, B, c};

  auto data = dynamics.createData();

  return 0;
}
