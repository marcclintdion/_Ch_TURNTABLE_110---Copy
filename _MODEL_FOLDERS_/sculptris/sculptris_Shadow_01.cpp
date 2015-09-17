    
               


       //---------------------------------------------------------------------------
       Translate(LightModelViewMatrix, sculptris_POSITION[0] * scaleMoveShadows[0], 
                                       sculptris_POSITION[1] * scaleMoveShadows[1], 
                                       sculptris_POSITION[2] * scaleMoveShadows[2]);        
       //---------------------------------------------------------------------------
       Rotate(LightModelViewMatrix,    sculptris_ROTATE[0], 
                                       sculptris_ROTATE[1], 
                                       sculptris_ROTATE[2], 
                                       sculptris_ROTATE[3]);        

//=================================================================================================================     
glBindBuffer(GL_ARRAY_BUFFER, sculptris_VBO);    
glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, sculptris_INDEX_VBO);                                                                                                                                 
//=================================================================================================================         
SelectShader(shaderNumber);
//=================================================================================================================
                                                                                                                                           
    //--------------------------------------------------------------------------------------------------------------------      
    glDrawElements(GL_TRIANGLES, 1584, GL_UNSIGNED_INT, 0);  
