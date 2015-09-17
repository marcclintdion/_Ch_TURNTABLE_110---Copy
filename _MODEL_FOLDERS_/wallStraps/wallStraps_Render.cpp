    glBindBuffer(GL_ARRAY_BUFFER, wallStraps_VBO);                                                                                                                                
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, wallStraps_INDICES_VBO);                                                                                                                                


        Translate(modelView, wallStraps_POSITION[0], wallStraps_POSITION[1], wallStraps_POSITION[2]);                                                                                         
        Rotate(modelView, wallStraps_ROTATE[0], wallStraps_ROTATE[1], wallStraps_ROTATE[2], wallStraps_ROTATE[3]);
        
//=================================================================================================================         
SelectShader(shaderNumber);
//=================================================================================================================
                                                                
                                                               
    glActiveTexture ( GL_TEXTURE1 );                                                                                                                                          
    glBindTexture(GL_TEXTURE_2D, wallStraps_NORMALMAP);                                                                                                                          
    //---                                                                                                                                                                     
    glActiveTexture (GL_TEXTURE0);                                                                                                                                            
    glBindTexture(GL_TEXTURE_2D, wallStraps_TEXTUREMAP);                                                                                                                            
    //---------------------------------------------------------------------------------------------------------------------------------------------------|__DRAW              
    glDrawElements(GL_TRIANGLES, 984, GL_UNSIGNED_INT, 0);                                                                                                     

