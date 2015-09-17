        //============================================================================================================
        #ifdef __APPLE__
        //---------------
        filePathName = [[NSBundle mainBundle] pathForResource:@"chassisFan_DOT3" ofType:@"png"];
        if(filePathName != nil)
        {
                image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);
                glGenTextures(1, &chassisFan_NORMALMAP);
                glBindTexture(GL_TEXTURE_2D, chassisFan_NORMALMAP);
                ConfigureAndLoadTexture(image->data,  image->width, image->height );
                imgDestroyImage(image);
                filePathName = nil;
        }
        //---------------------
        filePathName = [[NSBundle mainBundle] pathForResource:@"chassisFan" ofType:@"png"];
        if(filePathName != nil)
        {
                image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);
                glGenTextures(1, &chassisFan_TEXTUREMAP);
                glBindTexture(GL_TEXTURE_2D, chassisFan_TEXTUREMAP);
                ConfigureAndLoadTexture(image->data,  image->width, image->height );
                imgDestroyImage(image);
                filePathName = nil;
        }
        //---------------
        #endif
        //============================================================================================================
        #ifdef WIN32
        loadTexture("_MODEL_FOLDERS_/chassisFan/chassisFan_DOT3.png",          chassisFan_NORMALMAP);
        loadTexture("_MODEL_FOLDERS_/chassisFan/chassisFan.png",               chassisFan_TEXTUREMAP);
        #endif
        //------------------------------------------------------------------------------------------------------------
        #include    "chassisFan.cpp"
        glGenBuffers(1,              &chassisFan_VBO);
        glBindBuffer(GL_ARRAY_BUFFER, chassisFan_VBO);
        glBufferData(GL_ARRAY_BUFFER, sizeof(chassisFan), chassisFan, GL_STATIC_DRAW);
        glBindBuffer(GL_ARRAY_BUFFER, 0);
        //------------------------------------------------------------------------------------------------------------
        #include    "chassisFan_INDICES.cpp"
        glGenBuffers(1,              &chassisFan_INDICES_VBO);
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, chassisFan_INDICES_VBO);
        glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(chassisFan_INDICES), chassisFan_INDICES, GL_STATIC_DRAW);
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
        //------------------------------------------------------------------------------------------------------------
