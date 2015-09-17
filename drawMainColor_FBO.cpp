
//glBindFramebuffer(GL_FRAMEBUFFER, mainLightPass_fboId);
//glFramebufferRenderbuffer(GL_FRAMEBUFFER, GL_DEPTH_ATTACHMENT, GL_RENDERBUFFER, mainLightPass_depth);
 

        //=======================================================================================================================
        glClearColor( 0.0f, 0.0f, 0.0f, 1.0 );
        glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);
        //----------------------------------------------------------------------------------
        
           //=======================================================================================================================
        #ifdef WIN32
                
                //-------------------------------------------------------------------------------------------------------               
                glViewport(0, 0, (GLsizei)viewWidth, (GLsizei)viewHeight);
                PerspectiveMatrix(projection, fieldOfView, (GLfloat)viewWidth / (GLfloat)viewHeight, adjustNearFar[0],  adjustNearFar[1]);
                //-------------------------------------------------------------------------------------------------------          
        #endif
        //=======================================================================================================================
     
        //=======================================================================================================================
        #ifdef __APPLE__
                
                //-------------------------------------------------------------------------------------------------------               
                glViewport(0, 0, (GLsizei)viewWidth, (GLsizei)viewHeight);
                PerspectiveMatrix(projection, fieldOfView, (GLfloat)viewWidth / (GLfloat)viewHeight, adjustNearFar[0],  adjustNearFar[1]);
                //-------------------------------------------------------------------------------------------------------  
                Rotate(projection, 0.0, 0.0, 1.0, -90.0);//_____FOR_iOS_LANDSCAPE_VIEW 
                //-------------------------------------------------------------------------------------------------------          
        #endif
        //=======================================================================================================================

    
        //=======================================================================================================
        shaderNumber = 26;//plastic/rubber/
        setupTransforms_MainColor();
        #include "_MODEL_FOLDERS_/flowerShield/flowerShield_Render.cpp"
        //=======================================================================================================
        shaderNumber = 26;//plastic/rubber/
        setupTransforms_MainColor();
        #include "_MODEL_FOLDERS_/sculptris/sculptris_Render.cpp"
        //=======================================================================================================
        shaderNumber = 26;//plastic/rubber/
        setupTransforms_MainColor();
        #include  "ADD_COLLISION_BALL/RENDER_1.cpp"
        #include "_MODEL_FOLDERS_/sphere/sphere_Render.cpp"
        //=======================================================================================================
        shaderNumber = 26;//plastic/rubber/
        setupTransforms_MainColor();
        #include "_MODEL_FOLDERS_/spiralGear/spiralGear_Render.cpp"
        //=======================================================================================================
        shaderNumber = 26;//plastic/rubber/
        setupTransforms_MainColor();
        #include "_MODEL_FOLDERS_/knight/knight_Render.cpp"
        //=======================================================================================================
        shaderNumber = 45;//ConeStep_01/shallowRound
        setupTransforms_MainColor();
        #include "_MODEL_FOLDERS_/facing_UP/facing_UP_Render.cpp"
        //=======================================================================================================
        shaderNumber = 45;//ConeStep_01/shallowRound
        setupTransforms_MainColor();
        #include "_MODEL_FOLDERS_/facing_Sideways_blocks_01/facing_Sideways_blocks_01_RENDER.cpp"
        //=======================================================================================================
        shaderNumber = 45;//ConeStep_01/shallowRound
        setupTransforms_MainColor();
        #include "_MODEL_FOLDERS_/facing_UP/facing_UP_blocks_01/facing_UP_blocks_01_RENDER.cpp"
        //=======================================================================================================
        shaderNumber = 44;//ConeStep_01/steepPointy
        setupTransforms_MainColor();
        #include "_MODEL_FOLDERS_/facing_VIEW/facing_VIEW_Render.cpp"
        //=======================================================================================================
        shaderNumber = 44;//ConeStep_01/steepPointy
        setupTransforms_MainColor();
        #include "_MODEL_FOLDERS_/facing_VIEW/facing_VIEW_blocks_01_Render.cpp"
        //=======================================================================================================
        shaderNumber = 46;//wood/goldenSunset/
        setupTransforms_MainColor();
        #include "_MODEL_FOLDERS_/floorStraps/floorStraps_Render.cpp"
        //=======================================================================================================
        shaderNumber = 46;//wood/goldenSunset/
        setupTransforms_MainColor();
        #include "_MODEL_FOLDERS_/wallStraps/wallStraps_Render.cpp"
        //=======================================================================================================
        shaderNumber = 46;//wood/goldenSunset/
        setupTransforms_MainColor();
        #include "_MODEL_FOLDERS_/blocksEdging/blocksEdging_Render.cpp"
        //=======================================================================================================
        shaderNumber = 49;//marble/geod_A/
        setupTransforms_MainColor();
        #include "_MODEL_FOLDERS_/pillerPlantPot/pillerPlantPot_Render.cpp"
        //=======================================================================================================
        shaderNumber = 50;//leaves/A/
        setupTransforms_MainColor();
        #include "_MODEL_FOLDERS_/plant_v005/plant_v005_Render.cpp"                                                                 
        //====================================================================================                                                                
        shaderNumber = 46;//wood/goldenSunset/
        setupTransforms_MainColor();     
        #include "_MODEL_FOLDERS_/mouldings/mouldings_Render.cpp"                                                                 
        //====================================================================================                                                                
        shaderNumber = 51;//plastic/hardShinyBumpPlastic/
        setupTransforms_MainColor();     
        #include "_MODEL_FOLDERS_/chassisFan/chassisFan_Render.cpp"                                                                 
        //====================================================================================   

//--------------------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------------------

