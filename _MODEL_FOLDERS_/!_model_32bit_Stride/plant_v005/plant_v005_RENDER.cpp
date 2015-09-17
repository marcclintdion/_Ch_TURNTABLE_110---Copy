    glBindBuffer(GL_ARRAY_BUFFER, plant_v005_VBO);                                                                                                                                
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, plant_v005_INDICES_VBO);                                                                                                                                
    //----------------------------------------------------------------------------------------------------------------------------------------------          
    LoadIdentity(modelView);                                                                                                                                   
    Translate(modelView, plant_v005_POSITION[0], plant_v005_POSITION[1], plant_v005_POSITION[2]);                          
    Rotate(modelView, plant_v005_ROTATE[0], plant_v005_ROTATE[1], plant_v005_ROTATE[2], plant_v005_ROTATE[3]); 
    MultiplyMatrix(mvpMatrix, projection, modelView);                                                                                                          
    //-------------------------------------------------------------------------------------------------------------------------------------------              
    LoadIdentity(lightMatrix);                                                                                                                                 
    InvertMatrix(lightMatrix, modelView);                                                                                                                      
    //Translate(lightMatrix, 1.0, -10.0, 2.0);                                                                                                                 
    //======================================================================================================                                                   
    glVertexAttribPointer(0,   3, GL_FLOAT, GL_FALSE, 32, BUFFER_OFFSET(0));                                                                                   
    glEnableVertexAttribArray(0);	                                                                                                                           
    glVertexAttribPointer(1,   3, GL_FLOAT, GL_FALSE, 32, BUFFER_OFFSET(12));                                                                                  
    glEnableVertexAttribArray(1);	                                                                                                                           
    glVertexAttribPointer(2,   2, GL_FLOAT, GL_FALSE, 32, BUFFER_OFFSET(24));                                                                                  
    glEnableVertexAttribArray(2);                                                                                                                              
    //======================================================================================================                                                   
    glActiveTexture ( GL_TEXTURE1 );                                                                                                                           
    glBindTexture(GL_TEXTURE_2D, plant_v005_NORMALMAP);                                                                                            
    //---                                                                                                                                                      
    glActiveTexture (GL_TEXTURE0);                                                                                                                             
    glBindTexture(GL_TEXTURE_2D, plant_v005_TEXTUREMAP);                                                                                           
    //---------------------------------------------------------------------------------------------------------------------------------------------------      
    glDrawElements(GL_TRIANGLES, 4620, GL_UNSIGNED_INT, 0);                                                                                                     

