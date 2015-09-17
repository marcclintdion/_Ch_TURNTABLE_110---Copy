glBindBuffer(GL_ARRAY_BUFFER, spiralGear_VBO);   
glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, spiralGear_INDEX_VBO);                                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------------------------------------|__MODEL             
                                                                                                                                                 
        Translate(modelView, spiralGear_POSITION[0], spiralGear_POSITION[1], spiralGear_POSITION[2]);                                                                                         
        Rotate(modelView, spiralGear_ROTATE[0], spiralGear_ROTATE[1], spiralGear_ROTATE[2], spiralGear_ROTATE[3]); 
//=================================================================================================================         
SelectShader(shaderNumber);
//=================================================================================================================
  
  
    glActiveTexture ( GL_TEXTURE1 );                                                                                                                                          
    glBindTexture(GL_TEXTURE_2D, spiralGear_NORMALMAP);                                                                                                                          
    //---                                                                                                                                                                     
    glActiveTexture (GL_TEXTURE0);                                                                                                                                            
    glBindTexture(GL_TEXTURE_2D, spiralGear_TEXTUREMAP);                                                                                                                            
    //---------------------------------------------------------------------------------------------------------------------------------------------------|__DRAW              
    glDrawElements(GL_TRIANGLES, 1092, GL_UNSIGNED_INT, 0);                                                                                                

