glBindBuffer(GL_ARRAY_BUFFER, plant_v005_VBO);    
glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, plant_v005_INDICES_VBO);                                                                                                                                 
//=================================================================================================================     
    
       //---------------------------------------------------------------------------
       Translate(LightModelViewMatrix, plant_v005_POSITION[0] * scaleMoveShadows[0], 
                                       plant_v005_POSITION[1] * scaleMoveShadows[1], 
                                       plant_v005_POSITION[2] * scaleMoveShadows[2]);        
       //---------------------------------------------------------------------------
       Rotate(LightModelViewMatrix,    plant_v005_ROTATE[0], 
                                       plant_v005_ROTATE[1], 
                                       plant_v005_ROTATE[2], 
                                       plant_v005_ROTATE[3]);        

 
//=================================================================================================================         
SelectShader(shaderNumber);
//=================================================================================================================
                                                                                                                                           
    //--------------------------------------------------------------------------------------------------------------------      
    glDrawElements(GL_TRIANGLES, 4620, GL_UNSIGNED_INT, 0);  
