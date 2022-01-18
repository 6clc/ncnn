int main(){
 Net net;
 net.load_param();
 net.load_bin();
 cv::Mat bgr = cv::imread();
 Mat in_mat = ncnn::Mat::from_pixel_resize(bgr.data, PIXEL_BGR, bgr.cols, bgr.rows, 227,227);

 normal[3]={104., 117., 123.};
 in_mat.substract_mean_normalize(normal, 0);
 Exector exe = net.create_exector() ;
 exe.input("data", in_mat);
 Mat out;
 exe.extract("prob", out);
 return 0;
}

