#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
using namespace cv;

class M021_Capture {

    protected:

        M021_Capture(Mat & mat, int width, int height);

        ~M021_Capture(void);


    protected: 

        void * data;

        pthread_t video_thread;

    public:

        unsigned long long getCount(void);
};

class M021_1280x720_Capture : public M021_Capture{

    public:

        M021_1280x720_Capture(Mat & mat);
};

class M021_800x460_Capture : public M021_Capture{

    public:

        M021_800x460_Capture(Mat & mat);
};

class M021_640x480_Capture : public M021_Capture{

    public:

        M021_640x480_Capture(Mat & mat);
};


