        glBindFramebuffer(GL_FRAMEBUFFER, gaussianBlurHorizontalPass_fboId);
        //-------------------------------------------------------------------------------------
        glClearColor( 1.0f, 0.0f, 0.0f, 0.5f );
        glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT); 
        glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA); 
        glViewport(0, 0, (GLsizei)viewWidth / resize_LIGHTS_FBO, (GLsizei)viewHeight / resize_LIGHTS_FBO);
        //----------------------------------------------------------------------------------
        glUseProgram(frameBufferPlane_GaussianHorizontal_SHADER);                                                                                                                                              
        glBindBuffer(GL_ARRAY_BUFFER, frameBufferPlane_VBO);                                                                                                                                
        //------------------------------------------------------------------------------------------------------------------------------------           
        glVertexAttribPointer(0,   3, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(0));                                                                                                  
        glEnableVertexAttribArray(0);	                                                                                                                                          
        glVertexAttribPointer(1,   2, GL_FLOAT, GL_FALSE, 20, BUFFER_OFFSET(12));                                                                                                 
        glEnableVertexAttribArray(1);                                                                                                                                             
        //---------------------------------------------------------------------------------------------------------------------------------------------------|__UNIFORMS          
        glUniform1f (UNIFORM_blurRadius_frameBufferPlane_GaussianHorizontal, frameBufferPlane_GaussianHorizontal_blurRadius);                                                                                                                           
        glUniform1i (UNIFORM_TEXTURE_frameBufferPlane_GaussianHorizontal, 0 );  
        //---------------------------------------------------------------------------------------------------------------------------------------------------|__DRAW              
        glDrawArrays(GL_TRIANGLES, 0, 6);                                                                                                     
        //-------------------------------------------------------------------------------------                                     
        glBindFramebuffer(GL_FRAMEBUFFER, 0); 
        
        
        
