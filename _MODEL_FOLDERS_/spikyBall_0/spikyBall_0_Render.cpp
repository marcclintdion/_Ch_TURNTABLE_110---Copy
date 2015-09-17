                                                                                            
    //-----------------------------                                                                                                       
    glBindBuffer(GL_ARRAY_BUFFER, spikyBall_0_VBO);                                                                                       
    //-----------------------------------------------------------------------------|__TRANSFORMATIONS                                     
                              
    //-----------------------------------------------------------------------------|__MATRIX_MATH                                         
    MultiplyMatrix(mvpMatrix, projection, modelView);                                                                           
    //InvertMatrix(ModelViewProjectionInverse, ModelViewProjection);                                                                      
    //------------------------------------------------------------------------------|__LIGHT                                              
    LoadIdentity(lightMatrix);                                                                                                            
    InvertMatrix(lightMatrix, modelView);                                                                                                 
    //======================================================================================================                              
    #include  "../../_SHADERS/BACKGROUND/goldenSunset_RENDER.cpp"                                                                        
    //======================================================================================================                              
                                                                                       
    //----------------------------------------------------                                                                                
    glActiveTexture(GL_TEXTURE1);                                                                                                      
    glBindTexture(GL_TEXTURE_2D,  spikyBall_0_NORMAL_TEX);                                                                                   
    //----------------------------------------------------                                                                                
    glActiveTexture(GL_TEXTURE0);                                                                                                      
    glBindTexture(GL_TEXTURE_2D, spikyBall_0_TEXTURE1);                                                                                      
    //-------------------------------------------------------------------------------|__DRAW                                              
    glDrawArrays(GL_TRIANGLES, 0, 540);                                                                     
