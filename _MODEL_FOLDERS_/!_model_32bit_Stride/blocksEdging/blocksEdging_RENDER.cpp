    glBindBuffer(GL_ARRAY_BUFFER, blocksEdging_VBO);                                                                                                                                
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, blocksEdging_INDICES_VBO);                                                                                                                                
    //----------------------------------------------------------------------------------------------------------------------------------------------          
    LoadIdentity(modelView);                                                                                                                                   
    Translate(modelView, blocksEdging_POSITION[0], blocksEdging_POSITION[1], blocksEdging_POSITION[2]);                          
    Rotate(modelView, blocksEdging_ROTATE[0], blocksEdging_ROTATE[1], blocksEdging_ROTATE[2], blocksEdging_ROTATE[3]); 
    MultiplyMatrix(mvpMatrix, projection, modelView);                                                                                                          
    //-------------------------------------------------------------------------------------------------------------------------------------------              
    LoadIdentity(lightMatrix);                                                                                                                                 
    InvertMatrix(lightMatrix, modelView);                                                                                                                      
    //Translate(lightMatrix, 1.0, -10.0, 2.0);                                                                                                                 
    //======================================================================================================                                                   
    glVertexAttribPointer(0,   3, GL_FLOAT, GL_FALSE, 44, BUFFER_OFFSET(0));                                                                                   
    glEnableVertexAttribArray(0);	                                                                                                                           
    glVertexAttribPointer(1,   3, GL_FLOAT, GL_FALSE, 44, BUFFER_OFFSET(12));                                                                                  
    glEnableVertexAttribArray(1);	                                                                                                                           
    glVertexAttribPointer(2,   3, GL_FLOAT, GL_FALSE, 44, BUFFER_OFFSET(24));                                                                                  
    glEnableVertexAttribArray(2);                                                                                                                              
    glVertexAttribPointer(3,   2, GL_FLOAT, GL_FALSE, 44, BUFFER_OFFSET(36));                                                                                  
    glEnableVertexAttribArray(3);                                                                                                                              
    //======================================================================================================                                                   
    glActiveTexture ( GL_TEXTURE1 );                                                                                                                           
    glBindTexture(GL_TEXTURE_2D, blocksEdging_NORMALMAP);                                                                                            
    //---                                                                                                                                                      
    glActiveTexture (GL_TEXTURE0);                                                                                                                             
    glBindTexture(GL_TEXTURE_2D, blocksEdging_TEXTUREMAP);                                                                                           
    //---------------------------------------------------------------------------------------------------------------------------------------------------      
    glDrawElements(GL_TRIANGLES, 0, GL_UNSIGNED_INT, 0);                                                                                                     

