screenRatio = viewWidth /viewHeight;

    glGenFramebuffers(1, &gaussianBlurHorizontalPass_fboId);    
    glGenTextures(1, &gaussianBlurHorizontal_TEXTURE);
    glBindTexture(GL_TEXTURE_2D, gaussianBlurHorizontal_TEXTURE);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_MIRRORED_REPEAT);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_MIRRORED_REPEAT);
        glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR);     
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, (GLsizei)viewWidth / resize_LIGHTS_FBO, (GLsizei)viewHeight / resize_LIGHTS_FBO, 0, GL_RGBA, GL_UNSIGNED_BYTE, NULL);  
    glBindFramebuffer(GL_FRAMEBUFFER, gaussianBlurHorizontalPass_fboId);
    glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, gaussianBlurHorizontal_TEXTURE, 0);
    glBindFramebuffer(GL_FRAMEBUFFER, 0);
    ////////////////////////////////////////////////////////
    glGenFramebuffers(1, &gaussianBlurVerticalPass_fboId);    
    glGenTextures(1, &gaussianBlurVertical_TEXTURE);
    glBindTexture(GL_TEXTURE_2D, gaussianBlurVertical_TEXTURE);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_MIRRORED_REPEAT);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_MIRRORED_REPEAT);
        glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR);     
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, (GLsizei)viewWidth / resize_LIGHTS_FBO, (GLsizei)viewHeight / resize_LIGHTS_FBO, 0, GL_RGBA, GL_UNSIGNED_BYTE, NULL);  
    glBindFramebuffer(GL_FRAMEBUFFER, gaussianBlurVerticalPass_fboId);
    glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, gaussianBlurVertical_TEXTURE, 0);
    glBindFramebuffer(GL_FRAMEBUFFER, 0);
    //====================================================================================================================
    #include "frameBufferPlane_GaussianHorizontal_Init.cpp"                                                                   
    #include "frameBufferPlane_GaussianVertical_Init.cpp"  
