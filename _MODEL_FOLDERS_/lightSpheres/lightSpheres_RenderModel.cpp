   
    //==========================================================================================
    glUseProgram(lightSpheres_SHADER);                                                                                                                                              
    glBindBuffer(GL_ARRAY_BUFFER, lightSpheres_VBO); 
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, lightSpheres_INDEX_VBO);                                                                                                                                   
    
    //==========================================================================================
    MultiplyMatrix(mvpMatrix, projection, modelView);                                                                                                                         
    //---------------------------------------------------------------------------------------------------------------------------------------------------|__LIGHT             
    LoadIdentity(lightMatrix);                                                                                                                                                
    InvertMatrix(lightMatrix, modelView);                                                                                                                                     
    //---------------------------------------------------------------------------------------------------------------------------------------------------|__LIGHT             
    LoadIdentity(textureMatrix);
    Translate(textureMatrix, shadowsPositionOffset[0], shadowsPositionOffset[1], shadowsPositionOffset[2]);
    Scale(textureMatrix, scaleShadows, scaleShadows, scaleShadows);   
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
    glUniformMatrix4fv(UNIFORM_MODELVIEWPROJ_lightSpheres,   1,0,  mvpMatrix); 
    glUniformMatrix4fv(UNIFORM_MODELVIEW_lightSpheres,       1,0,  modelView);                                                                                                          
    glUniformMatrix4fv(UNIFORM_LIGHT_MATRIX_lightSpheres,    1,0,  lightMatrix);
    glUniformMatrix4fv(UNIFORM_textureMatrix_lightSpheres,   1,0,  textureMatrix);  
    glUniformMatrix4fv(UNIFORM_INVERSEMATRIX_lightSpheres,      1,0,  modelView);                                                                                                           
    //---------------------------------------------------------------------------------
    glUniform4f(UNIFORM_offset_lightSpheres,                        offsetFinalShadow[0], 
                                                                 offsetFinalShadow[1], 
                                                                 offsetFinalShadow[2], 
                                                                 offsetFinalShadow[3]);      
    //---------------------------------------------------------------------------------    
    glUniform4f(UNIFORM_LIGHT_POSITION_01_lightSpheres, lightSpheres_LIGHT_POSITION_01[0], 
                                                     lightSpheres_LIGHT_POSITION_01[1], 
                                                     lightSpheres_LIGHT_POSITION_01[2], 
                                                     lightSpheres_LIGHT_POSITION_01[3]);        
    //---------------------------------------------------------------------------------    
    glUniform1f(UNIFORM_QUADRATIC_ATTENUATION_lightSpheres, lightSpheres_quadraticAttenuation);    
    glUniform1f(UNIFORM_LINEAR_ATTENUATION_lightSpheres,    lightSpheres_linearAttenuation); 
    glUniform1f(UNIFORM_CONSTANT_ATTENUATION_lightSpheres,  lightSpheres_constantAttenuation); 
    //---------------------------------------------------------------------------------     
    glUniform1f(UNIFORM_SHININESS_lightSpheres, lightSpheres_SHININESS);     
    //---------------------------------------------------------------------------------    
    glUniform1i (UNIFORM_TEXTURE_SHADOW_lightSpheres, 2);    
    glUniform1i (UNIFORM_TEXTURE_DOT3_lightSpheres, 1);                                                                                                                             
    glUniform1i (UNIFORM_TEXTURE_lightSpheres, 0 );                                                                                                                                 
    //======================================================================================================                                                                  
    glActiveTexture ( GL_TEXTURE3 );                                                                                                                                          
    glBindTexture(GL_TEXTURE_2D, shadowMap_TEXTURE);                                                                                                                          
    //---     
    //glActiveTexture ( GL_TEXTURE2 );                                                                                                                                          
    //glBindTexture(GL_TEXTURE_2D, lightSpheres_HEIGHT);                                                                                                                          
    //---     
    glActiveTexture ( GL_TEXTURE1 );                                                                                                                                          
    glBindTexture(GL_TEXTURE_2D, lightSpheres_NORMALMAP);                                                                                                                          
    //---                                                                                                                                                                     
    glActiveTexture (GL_TEXTURE0);                                                                                                                                            
    glBindTexture(GL_TEXTURE_2D, lightSpheres_TEXTUREMAP );                                                                                                                            
    //---------------------------------------------------------------------------------------------------------------------------------------------------|__DRAW              
    glDrawElements(GL_TRIANGLES, 240, GL_UNSIGNED_INT, 0);
        
        //====================================================================================  
