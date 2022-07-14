#include "ros/ros.h"
#include "std_msgs/String.h"
/*
ʵ������:
        1.����ͷ�ļ�
        ROS���ı�����--->std_msgs/String.h
        2.��ʼ�� ROS �ڵ�:����(Ψһ)
        3.ʵ���� ROS ���
        4.������������ ����
        5.�����ĵ�����
        6.spin����
*/
void domsg(const std_msgs::String::ConstPtr& msg)
{//ͨ��msg��ȡ���������ĵ�������
    ROS_INFO("�߻����ĵ������ݣ�%s", msg->data.c_str());

}
int main(int argc, char* argv[])//constȥ��
{
    setlocale(LC_ALL, "");
    ros::init(argc, argv, "cuiHua");
    ros::NodeHandle nh;
    ros::Subscriber sub = nh.subscribe("chatter", 10, domsg);
    ros::spin();//�ٷ�����
    return 0;
}