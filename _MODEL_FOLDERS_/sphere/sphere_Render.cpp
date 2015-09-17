glBindBuffer(GL_ARRAY_BUFFER, sphere_VBO);   
glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, sphere_INDEX_VBO);                                                                                                                                     
//---------------------------------------------------------------------------------------------------------------------------------------------------|__MODEL             
                                                                                                                   
        Translate(modelView, spikyBall_0_POSITION[0], spikyBall_0_POSITION[1], spikyBall_0_POSITION[2]);                                                                                         
        Rotate(modelView, spikyBall_0_ROTATE[0], spikyBall_0_ROTATE[1], spikyBall_0_ROTATE[2], spikyBall_0_ROTATE[3]);  
//=================================================================================================================         
SelectShader(shaderNumber);
//=================================================================================================================
  
   
    glActiveTexture ( GL_TEXTURE1 );                                                                                                                                          
    glBindTexture(GL_TEXTURE_2D, sphere_NORMALMAP);                                                                                                                          
    //---                                                                                                                                                                     
    glActiveTexture (GL_TEXTURE0);                                                                                                                                            
    glBindTexture(GL_TEXTURE_2D, sphere_TEXTUREMAP);                                                                                                                            
    //---------------------------------------------------------------------------------------------------------------------------------------------------|__DRAW              
    //glDrawArrays(GL_TRIANGLES, 0, 6624);                                                                                                     

    glDrawElements(GL_TRIANGLES, 6624, GL_UNSIGNED_INT, 0);
