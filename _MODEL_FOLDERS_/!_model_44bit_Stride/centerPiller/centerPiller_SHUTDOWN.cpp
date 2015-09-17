                    if(centerPiller_NORMALMAP != 0)                                                                                        
                    {                                                                                                              
                            glDeleteTextures(1, &centerPiller_NORMALMAP);                                                                  
                            centerPiller_NORMALMAP = 0;                                                                                    
                    }                                                                                                              
                    if(centerPiller_TEXTUREMAP  != 0)                                                                                      
                    {                                                                                                              
                            glDeleteTextures(1, &centerPiller_TEXTUREMAP);                                                                 
                            centerPiller_TEXTUREMAP  = 0;                                                                                  
                    }                                                                                                              
                    if(centerPiller_VBO  != 0)                                                                                             
                    {                                                                                                              
                            glDeleteBuffers(1, &centerPiller_VBO);                                                                         
                            centerPiller_VBO  = 0;                                                                                         
                    }                                                                                                              
                    if(centerPiller_INDICES_VBO  != 0)                                                                                             
                    {                                                                                                              
                            glDeleteBuffers(1, &centerPiller_INDICES_VBO);                                                                         
                            centerPiller_INDICES_VBO  = 0;                                                                                         
                    }                                                                                                              
