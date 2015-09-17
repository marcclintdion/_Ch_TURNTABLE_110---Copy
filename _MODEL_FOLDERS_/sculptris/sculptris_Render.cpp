glBindBuffer(GL_ARRAY_BUFFER, sculptris_VBO);   
glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, sculptris_INDEX_VBO);                                                                                                                                
//---------------------------------------------------------------------------------------------------------------------------------------------------|__MODEL             
                                                                                                                                                
        Translate(modelView, sculptris_POSITION[0], sculptris_POSITION[1], sculptris_POSITION[2]);                                                                                         
        Rotate(modelView, sculptris_ROTATE[0], sculptris_ROTATE[1], sculptris_ROTATE[2], sculptris_ROTATE[3]);         
//=================================================================================================================         
SelectShader(shaderNumber);
//=================================================================================================================
       
    glActiveTexture ( GL_TEXTURE1 );                                                                                                                                          
    glBindTexture(GL_TEXTURE_2D, sculptris_NORMALMAP);                                                                                                                          
    //---                                                                                                                                                                     
    glActiveTexture (GL_TEXTURE0);                                                                                                                                            
    glBindTexture(GL_TEXTURE_2D, sculptris_TEXTUREMAP);                                                                                                                            
    //---------------------------------------------------------------------------------------------------------------------------------------------------|__DRAW              
    glDrawElements(GL_TRIANGLES, 1584, GL_UNSIGNED_INT, 0);                                                                                                    

