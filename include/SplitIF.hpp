#ifndef _SPLITIF_HPP_
#define _SPLITIF_HPP

#include <iostream>
#include <vector>
#include <opencv2/features2d/features2d.hpp>
#include <opencv2/photo.hpp>
#include <opencv2/highgui/highgui_c.h>
#include <memory>
#include <time.h>
#include <string>

namespace SplitObjIF
{
    // 图像位置
    struct Postiion
    {
        int top;
        int left;
        int width;
        int height; 
    };
    struct GpsPostion
    {
        double longtitude;
        double latititude;
    };
    struct RadarPostion
    {
        float x;
        float y;
    };

    struct SplitObjSender
    {
        int SplitID;
        Postiion m_pixelRect;
        GpsPostion m_gps;
        RadarPostion m_radarpos;
        long timestamp;
    };

    struct SplitObjReceiver
    {
       cv::Mat frame;
       unsigned int framenum;
       long timestamp;
       std::vector<Postiion> v_inferout;
        /* data */
    };
    

    void SplitWork(SplitObjReceiver &receiverpin, SplitObjSender &senderpin);

    
} // namespace SplitObj

#endif // !_SPLITIF_HPP_








