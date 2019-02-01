#include "voxblox_ros/tsdf_server.h"
// #include "sensor_msgs/PointCloud.h"

// sensor_msgs::PointCloud2::Ptr cloud_message(new sensor_msgs::PointCloud2);

// void pcdCallback(const sensor_msgs::PointCloud2& msg) {
//   *cloud_message = msg;
//   // ROS_INFO("pointcloud of size %d recieved", cloud_message->width);

// }

int main(int argc, char** argv) {
  ros::init(argc, argv, "voxblox");
  google::InitGoogleLogging(argv[0]);
  google::ParseCommandLineFlags(&argc, &argv, false);
  google::InstallFailureSignalHandler();
  ros::NodeHandle nh;
  ros::NodeHandle nh_private("~");

  voxblox::TsdfServer node(nh, nh_private);
  ros::spin();
  return 0;
}
