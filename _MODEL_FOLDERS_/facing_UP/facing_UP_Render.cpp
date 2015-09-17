    glBindBuffer(GL_ARRAY_BUFFER, facing_UP_VBO); 
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, facing_UP_INDEX_VBO);                                                                                                                                   
    
    
         Translate(modelView, facing_UP_POSITION[0], facing_UP_POSITION[1], facing_UP_POSITION[2]);            
        Rotate(modelView, facing_UP_ROTATE[0], facing_UP_ROTATE[1], facing_UP_ROTATE[2], facing_UP_ROTATE[3]);         
//=================================================================================================================         
SelectShader(shaderNumber);
//=================================================================================================================
      
  
    glActiveTexture ( GL_TEXTURE2 );                                                                                                                                          
    glBindTexture(GL_TEXTURE_2D, facing_UP_HEIGHT);                                                                                                                          
    //---     
    glActiveTexture ( GL_TEXTURE1 );                                                                                                                                          
    glBindTexture(GL_TEXTURE_2D, facing_UP_NORMALMAP);                                                                                                                          
    //---                                                                                                                                                                     
    glActiveTexture (GL_TEXTURE0);                                                                                                                                            
    glBindTexture(GL_TEXTURE_2D, facing_UP_TEXTUREMAP );                                                                                                                            
    //----------------------------------------------------------------------------------------------------          
glDrawElements(GL_TRIANGLES, 294, GL_UNSIGNED_INT, 0);
