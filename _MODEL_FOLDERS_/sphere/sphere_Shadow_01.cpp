

       Translate(LightModelViewMatrix, spikyBall_0_POSITION[0] * scaleMoveShadows[0], 
                                  spikyBall_0_POSITION[1] * scaleMoveShadows[1], 
                                  spikyBall_0_POSITION[2] * scaleMoveShadows[2]);                                                                                         
                                  //------------------------------------------------
       Rotate(   LightModelViewMatrix, spikyBall_0_ROTATE[0], 
                                  spikyBall_0_ROTATE[1], 
                                  spikyBall_0_ROTATE[2], 
                                  spikyBall_0_ROTATE[3]);          

//=====================================================================================================
glBindBuffer(GL_ARRAY_BUFFER, sphere_VBO);    
glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, sphere_INDEX_VBO);       
//=================================================================================================================         
SelectShader(shaderNumber);
//=================================================================================================================


       glDrawElements(GL_TRIANGLES, 6624, GL_UNSIGNED_INT, 0);
