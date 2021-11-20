#pragma once
#include "controller/pid_ctrl.h"
#include "controller/lqr_ctrl.h"

        enum 
        {
                yaw = 0,
                pitch,
                roll
        };

        typedef struct GimbleBodyData
        {
                /*---status---*/
                float pitch;
                float yaw;
                float roll;
        }BodyDataTypedef;

        class Gimble
        {
        private:
                /* data */
                pid_ctrl pid;
        public:
                Gimble(/* args */);
                ~Gimble();
                void init();
                void task();
                JointDataTypedef gimble_joint;
                BodyDataTypedef  gimble_body;
        };
        
        

