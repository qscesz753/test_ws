/**
 * @file hello_world.cpp
 * @brief
 * @author Fayin Yu (2847915121@qq.com)
 * @date 2024-03-07
 *
 * @copyright Copyright (C) 2023.
 *
 */
#include "ros/ros.h"

int main(int argc, char *argv[])
{
    ros::init(argc,argv,"hello");//ros initialize
    ros::NodeHandle n;
    ROS_INFO("hello world!");

    return 0;
}