#include "ncnn/net.h"
#include "opencv2/core/core.hpp"
using namespace ncnn;
int main(int argc, char* argv[]){
 Net net;
 net.load_param("squeezenet_v1.1.param");
 net.load_model("squeezenet_v1.1.bin");
 printf("infer image %s\n", argv[0]);
 cv::Mat bgr = cv::imread(argv[0]);
 Mat in_mat = ncnn::Mat::from_pixel_resize(bgr.data, PIXEL_BGR, bgr.cols, bgr.rows, 227,227);

 int normal[3]={104., 117., 123.};
 in_mat.substract_mean_normalize(normal, 0);
// Exector exe = net.create_exector() ;
// exe.input("data", in_mat);
// Mat out;
// exe.extract("prob", out);
 return 0;
}

