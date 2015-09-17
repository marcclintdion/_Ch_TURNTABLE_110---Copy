                    if(lightSpheres_NORMALMAP != 0)                                                                                        
                    {                                                                                                              
                            glDeleteTextures(1, &lightSpheres_NORMALMAP);                                                                  
                            lightSpheres_NORMALMAP = 0;                                                                                    
                    }                                                                                                              
                    if(lightSpheres_TEXTUREMAP  != 0)                                                                                      
                    {                                                                                                              
                            glDeleteTextures(1, &lightSpheres_TEXTUREMAP);                                                                 
                            lightSpheres_TEXTUREMAP  = 0;                                                                                  
                    }                                                                                                              
                    if(lightSpheres_VBO  != 0)                                                                                             
                    {                                                                                                              
                            glDeleteBuffers(1, &lightSpheres_VBO);                                                                         
                            lightSpheres_VBO  = 0;                                                                                         
                    }                                                                                                              
                    if(lightSpheres_INDICES_VBO  != 0)                                                                                             
                    {                                                                                                              
                            glDeleteBuffers(1, &lightSpheres_INDICES_VBO);                                                                         
                            lightSpheres_INDICES_VBO  = 0;                                                                                         
                    }                                                                                                              
