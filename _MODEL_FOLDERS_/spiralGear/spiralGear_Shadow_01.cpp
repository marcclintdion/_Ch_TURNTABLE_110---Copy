

       //------------------------------------------------------------------------------------------------
       Translate(LightModelViewMatrix, spiralGear_POSITION[0] * scaleMoveShadows[0], 
                                       spiralGear_POSITION[1] * scaleMoveShadows[1], 
                                       spiralGear_POSITION[2] * scaleMoveShadows[2]);        
                                  //--------------------------------------------
       Rotate(LightModelViewMatrix,    spiralGear_ROTATE[0], 
                                       spiralGear_ROTATE[1], 
                                       spiralGear_ROTATE[2], 
                                       spiralGear_ROTATE[3]);        
                                  //-------------------------------------------- 
//================================================================================================================================
glBindBuffer(GL_ARRAY_BUFFER, spiralGear_VBO);
glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, spiralGear_INDEX_VBO);

//=================================================================================================================         
SelectShader(shaderNumber);
//=================================================================================================================

                    
    glDrawElements(GL_TRIANGLES, 1092, GL_UNSIGNED_INT, 0);
//================================================================================================================================ 
