        glActiveTexture (GL_TEXTURE0);                                                                                                                                            
        glBindTexture(GL_TEXTURE_2D, geometryLightPass_TEXTURE);         
        #include "../frameBufferPlane/frameBufferPlane_GaussianHorizontal_Render.cpp"                                                                 
        //-------------------------------------------------------------------------------------                                
        glActiveTexture (GL_TEXTURE0);                                                                                                                                            
        glBindTexture(GL_TEXTURE_2D, gaussianBlurHorizontal_TEXTURE);         
        #include "../frameBufferPlane/frameBufferPlane_GaussianVertical_Render.cpp"  
