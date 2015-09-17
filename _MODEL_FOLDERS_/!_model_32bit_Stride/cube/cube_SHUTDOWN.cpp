                    if(cube_NORMALMAP != 0)                                                                                                      
                    {                                                                                                                                              
                            glDeleteTextures(1, &cube_NORMALMAP);                                                                                
                            cube_NORMALMAP = 0;                                                                                                  
                    }                                                                                                                                              
                    if(cube_TEXTUREMAP  != 0)                                                                                                    
                    {                                                                                                                                              
                            glDeleteTextures(1, &cube_TEXTUREMAP);                                                                               
                            cube_TEXTUREMAP  = 0;                                                                                                
                    }                                                                                                                                              
                    if(cube_VBO  != 0)                                                                                                           
                    {                                                                                                                                              
                            glDeleteBuffers(1, &cube_VBO);                                                                                       
                            cube_VBO  = 0;                                                                                                       
                    }                                                                                                                                              
                    if(cube_INDICES_VBO  != 0)                                                                                                   
                    {                                                                                                                                              
                            glDeleteBuffers(1, &cube_INDICES_VBO);                                                                               
                            cube_INDICES_VBO  = 0;                                                                                               
                    }                                                                                                                                              
