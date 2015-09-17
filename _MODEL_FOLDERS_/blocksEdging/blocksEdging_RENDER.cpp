    glBindBuffer(GL_ARRAY_BUFFER, blocksEdging_VBO);                                                                                                                                
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, blocksEdging_INDICES_VBO);                                                                                                                                
    //---------------------------------------------------------------------------------------------------------------------------------------------------|__MODEL             
        Translate(modelView, blocksEdging_POSITION[0], blocksEdging_POSITION[1], blocksEdging_POSITION[2]);                                                                                         
        Rotate(modelView, blocksEdging_ROTATE[0], blocksEdging_ROTATE[1], blocksEdging_ROTATE[2], blocksEdging_ROTATE[3]);
//=================================================================================================================         
SelectShader(shaderNumber);
//=================================================================================================================
                                                                
                                                               
 
    glActiveTexture ( GL_TEXTURE1 );                                                                                                                                          
    glBindTexture(GL_TEXTURE_2D, blocksEdging_NORMALMAP);                                                                                                                          
    //---                                                                                                                                                                     
    glActiveTexture (GL_TEXTURE0);                                                                                                                                            
    glBindTexture(GL_TEXTURE_2D, blocksEdging_TEXTUREMAP);                                                                                                                            
    //---------------------------------------------------------------------------------------------------------------------------------------------------|__DRAW              
    glDrawElements(GL_TRIANGLES, 2286, GL_UNSIGNED_INT, 0);                                                                                                     

