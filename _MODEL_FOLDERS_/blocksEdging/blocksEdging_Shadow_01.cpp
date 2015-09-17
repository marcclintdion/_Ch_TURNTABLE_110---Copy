          

       //----------------------------------------------------------------------------------------
       Translate(LightModelViewMatrix, blocksEdging_POSITION[0] * scaleMoveShadows[0], 
                                       blocksEdging_POSITION[1] * scaleMoveShadows[1], 
                                       blocksEdging_POSITION[2] * scaleMoveShadows[2]);                                                                                         
                                       //------------------------------------------------------
       Rotate(LightModelViewMatrix,    blocksEdging_ROTATE[0], 
                                       blocksEdging_ROTATE[1], 
                                       blocksEdging_ROTATE[2], 
                                       blocksEdging_ROTATE[3]);         

//================================================================================================================= 
glBindBuffer(GL_ARRAY_BUFFER, blocksEdging_VBO);                                                                                                                                
glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, blocksEdging_INDICES_VBO);       
//=================================================================================================================         
SelectShader(shaderNumber);
//=================================================================================================================

                                                                                                                                     
    glDrawElements(GL_TRIANGLES, 2286, GL_UNSIGNED_INT, 0);
