                    if(wallStraps_NORMALMAP != 0)                                                                                                      
                    {                                                                                                                                              
                            glDeleteTextures(1, &wallStraps_NORMALMAP);                                                                                
                            wallStraps_NORMALMAP = 0;                                                                                                  
                    }                                                                                                                                              
                    if(wallStraps_TEXTUREMAP  != 0)                                                                                                    
                    {                                                                                                                                              
                            glDeleteTextures(1, &wallStraps_TEXTUREMAP);                                                                               
                            wallStraps_TEXTUREMAP  = 0;                                                                                                
                    }                                                                                                                                              
                    if(wallStraps_VBO  != 0)                                                                                                           
                    {                                                                                                                                              
                            glDeleteBuffers(1, &wallStraps_VBO);                                                                                       
                            wallStraps_VBO  = 0;                                                                                                       
                    }                                                                                                                                              
                    if(wallStraps_INDICES_VBO  != 0)                                                                                                   
                    {                                                                                                                                              
                            glDeleteBuffers(1, &wallStraps_INDICES_VBO);                                                                               
                            wallStraps_INDICES_VBO  = 0;                                                                                               
                    }                                                                                                                                              
