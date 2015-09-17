        glBindFramebuffer(GL_FRAMEBUFFER, geometryLightPass_fboId);//-----------------------F.B.O.   
        //---------------------------------
        glClearColor( 0.65, 0.65, 0.65, 1.0 );
        glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);
        //============================================================================================================================================
        glViewport(0, 0, (GLsizei)viewWidth / resize_LIGHTS_FBO, (GLsizei)viewHeight / resize_LIGHTS_FBO);
        PerspectiveMatrix(projection, fieldOfView, viewWidth / viewHeight, adjustNearFar[0],  adjustNearFar[1]);
        //============================================================================================================================================
        #ifdef __APPLE__
        Rotate(projection, 0.0, 0.0, 1.0, -90.0);//_____FOR_iOS_LANDSCAPE_VIEW 
        #endif        
        //============================================================================================================================================   
        LoadIdentity(modelView);                                                                                                              
        LookAt(modelView, eyeposition[0], eyeposition[1], eyeposition[2], lookAt[0], lookAt[1], lookAt[2], upVector[0], upVector[1], upVector[2]);                                                                                                               
        Rotate(modelView, 0.0, 1.0, 0.0, turnTable);
        //--------------------------------------------------------------------------------------
        Translate(modelView, moveSet[0] , moveSet[1] , moveSet[2] );
        Rotate(modelView, 1.0, 0.0, 0.0, rotateModelWithLeftMouse[0]);
        Rotate(modelView, 0.0, 1.0, 0.0, rotateModelWithLeftMouse[1]);     
        //-----------------
        Translate(modelView, matchColorModelToShadowPosition[0], matchColorModelToShadowPosition[1], matchColorModelToShadowPosition[2]);         
         //----------------------------------------------------------- 
        Translate(modelView,   spikyBall_0_POSITION[0], spikyBall_0_POSITION[1], spikyBall_0_POSITION[2]);      
        Rotate(modelView,      spikyBall_0_ROTATE[0], spikyBall_0_ROTATE[1], spikyBall_0_ROTATE[2], spikyBall_0_ROTATE[3]); 

        //====================================================================================                                          
        #include "lightSpheres_RenderModel.cpp" 
        //====================================================================================                                          
        //#############################################################################################################################################
       
        //============================================================================================================================================     
             for(int i = 0; i < numberOfGeometryLights; i++)    
             {    
                 
                 lightSpheres_POSITION_ARRAY[i][0] += lightSpheres_VELOCITY_ARRAY[i][0];
                 lightSpheres_POSITION_ARRAY[i][1] += lightSpheres_VELOCITY_ARRAY[i][1];
                 lightSpheres_POSITION_ARRAY[i][2] += lightSpheres_VELOCITY_ARRAY[i][2]; 
                 //---------------------------------------------------------------------
                 //lightSpheres_ROTATION_ARRAY[i][0] += ;
                 //lightSpheres_ROTATION_ARRAY[i][1] += ;
                 //lightSpheres_ROTATION_ARRAY[i][2] += ; 
                 //lightSpheres_ROTATION_ARRAY[i][3] += ;                                   
                 //---------------------------------------------------------------               
                 if(lightSpheres_POSITION_ARRAY[i][0] <= -7)///wall_Collision
                 {
                       lightSpheres_VELOCITY_ARRAY[i][0] *= -1;

                 }
                 if(lightSpheres_POSITION_ARRAY[i][0] >= 7)////wall_Collision
                 {
                       lightSpheres_VELOCITY_ARRAY[i][0] *= -1;

                 }                                                        
                 //------------------------------------------------------
                 if(lightSpheres_POSITION_ARRAY[i][1] < -0.0)///wall_Collision
                 {
                       lightSpheres_VELOCITY_ARRAY[i][1] *= -1.0;

                 }
                 if(lightSpheres_POSITION_ARRAY[i][1] > 4.0)///wall_Collision
                 {
                       lightSpheres_VELOCITY_ARRAY[i][1] *= -1.0;

                 }
                 //------------------------------------------------------
                 if(lightSpheres_POSITION_ARRAY[i][2] <= -5.0)///wall_Collision
                 {
                       lightSpheres_VELOCITY_ARRAY[i][2] *= -1;

                 }
                 if(lightSpheres_POSITION_ARRAY[i][2] >= 5)////wall_Collision
                 {
                       lightSpheres_VELOCITY_ARRAY[i][2] *= -1;
                 
                 }

             }                                                   
        //=================================================================================================================================
        
        for(int i = 0; i < numberOfGeometryLights; i++)    
        {        
                LoadIdentity(modelView);                                                                                                              
                LookAt(modelView, eyeposition[0], eyeposition[1], eyeposition[2], lookAt[0], lookAt[1], lookAt[2], upVector[0], upVector[1], upVector[2]);                                                                                                               
                Rotate(modelView, 0.0, 1.0, 0.0, turnTable);
                //--------------------------------------------------------------
                Translate(modelView, moveSet[0] , moveSet[1] , moveSet[2] );
                Rotate(modelView, 1.0, 0.0, 0.0, rotateModelWithLeftMouse[0]);
                Rotate(modelView, 0.0, 1.0, 0.0, rotateModelWithLeftMouse[1]);     
                //--------------------------------------------------------------
                Translate(modelView, matchColorModelToShadowPosition[0], matchColorModelToShadowPosition[1], matchColorModelToShadowPosition[2]);         
                //-------------------------------------------------------------- 
                Translate(modelView,   lightSpheres_POSITION_ARRAY[i][0], lightSpheres_POSITION_ARRAY[i][1], lightSpheres_POSITION_ARRAY[i][2]);      
                Rotate(modelView,      lightSpheres_ROTATION_ARRAY[i][0], lightSpheres_ROTATION_ARRAY[i][1], lightSpheres_ROTATION_ARRAY[i][2], lightSpheres_ROTATION_ARRAY[i][3]++); 
                Scale(modelView,       lightSpheres_SCALE_ARRAY[i][0],    lightSpheres_SCALE_ARRAY[i][1],    lightSpheres_SCALE_ARRAY[i][2]); 
                //====================================================================================                                          
                #include "lightSpheres_RenderModel.cpp" 
                //====================================================================================                                          
        
        }
        
        
glBindFramebuffer(GL_FRAMEBUFFER, 0);        
