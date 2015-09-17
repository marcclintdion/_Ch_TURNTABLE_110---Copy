glBindBuffer(GL_ARRAY_BUFFER, knight_VBO);    
glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, knight_INDEX_VBO);                                                                                                                                 
//---------------------------------------------------------------------------------------------------------------------------------------------------|__MODEL             
                                                                      
        Translate(modelView, knight_POSITION[0], knight_POSITION[1], knight_POSITION[2]);                                                                                         
        Rotate(modelView, knight_ROTATE[0], knight_ROTATE[1], knight_ROTATE[2], knight_ROTATE[3]);    
//=================================================================================================================         
SelectShader(shaderNumber);
//=================================================================================================================
  
 
    glActiveTexture ( GL_TEXTURE1 );                                                                                                                                          
    glBindTexture(GL_TEXTURE_2D, knight_NORMALMAP);                                                                                                                          
    //---                                                                                                                                                                     
    glActiveTexture (GL_TEXTURE0);                                                                                                                                            
    glBindTexture(GL_TEXTURE_2D, knight_TEXTUREMAP);                                                                                                                            
    //---------------------------------------------------------------------------------------------------------------------------------------------------|__DRAW              
    glDrawElements(GL_TRIANGLES, 1386, GL_UNSIGNED_INT, 0);                                                                                                

