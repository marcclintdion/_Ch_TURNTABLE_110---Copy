                    if(chassisFan_NORMALMAP != 0)                                                                                                      
                    {                                                                                                                                              
                            glDeleteTextures(1, &chassisFan_NORMALMAP);                                                                                
                            chassisFan_NORMALMAP = 0;                                                                                                  
                    }                                                                                                                                              
                    if(chassisFan_TEXTUREMAP  != 0)                                                                                                    
                    {                                                                                                                                              
                            glDeleteTextures(1, &chassisFan_TEXTUREMAP);                                                                               
                            chassisFan_TEXTUREMAP  = 0;                                                                                                
                    }                                                                                                                                              
                    if(chassisFan_VBO  != 0)                                                                                                           
                    {                                                                                                                                              
                            glDeleteBuffers(1, &chassisFan_VBO);                                                                                       
                            chassisFan_VBO  = 0;                                                                                                       
                    }                                                                                                                                              
                    if(chassisFan_INDICES_VBO  != 0)                                                                                                   
                    {                                                                                                                                              
                            glDeleteBuffers(1, &chassisFan_INDICES_VBO);                                                                               
                            chassisFan_INDICES_VBO  = 0;                                                                                               
                    }                                                                                                                                              
