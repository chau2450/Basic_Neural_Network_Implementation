
#include "../include/Dense.h"


Dense::Dense(int inputSize, int outputSize) {

    this->weights = Eigen::MatrixXd::Random(inputSize, outputSize);
    this->bias = this->weights = Eigen::MatrixXd::Random(outputSize, outputSize);



}

Dense::~Dense() {

}

Eigen::MatrixXd Dense::forward(Eigen::MatrixXd input) {
    return Eigen::MatrixXd();
}

Eigen::MatrixXd Dense::backward(Eigen::MatrixXd input) {
    return Eigen::MatrixXd();
}
