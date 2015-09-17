                    if(facing_UP_NORMALMAP != 0)                                                                                        
                    {                                                                                                              
                            glDeleteTextures(1, &facing_UP_NORMALMAP);                                                                  
                            facing_UP_NORMALMAP = 0;                                                                                    
                    }                                                                                                              
                    if(facing_UP_TEXTUREMAP  != 0)                                                                                      
                    {                                                                                                              
                            glDeleteTextures(1, &facing_UP_TEXTUREMAP);                                                                 
                            facing_UP_TEXTUREMAP  = 0;                                                                                  
                    }                                                                                                              
                    if(facing_UP_VBO  != 0)                                                                                             
                    {                                                                                                              
                            glDeleteBuffers(1, &facing_UP_VBO);                                                                         
                            facing_UP_VBO  = 0;                                                                                         
                    }                                                                                                              
                    if(facing_UP_INDICES_VBO  != 0)                                                                                             
                    {                                                                                                              
                            glDeleteBuffers(1, &facing_UP_INDICES_VBO);                                                                         
                            facing_UP_INDICES_VBO  = 0;                                                                                         
                    }                                                                                                              
