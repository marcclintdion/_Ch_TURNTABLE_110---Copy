                    if(facing_VIEW_backWall_NORMALMAP != 0)                                                                                        
                    {                                                                                                              
                            glDeleteTextures(1, &facing_VIEW_backWall_NORMALMAP);                                                                  
                            facing_VIEW_backWall_NORMALMAP = 0;                                                                                    
                    }                                                                                                              
                    if(facing_VIEW_backWall_TEXTUREMAP  != 0)                                                                                      
                    {                                                                                                              
                            glDeleteTextures(1, &facing_VIEW_backWall_TEXTUREMAP);                                                                 
                            facing_VIEW_backWall_TEXTUREMAP  = 0;                                                                                  
                    }                                                                                                              
                    if(facing_VIEW_backWall_VBO  != 0)                                                                                             
                    {                                                                                                              
                            glDeleteBuffers(1, &facing_VIEW_backWall_VBO);                                                                         
                            facing_VIEW_backWall_VBO  = 0;                                                                                         
                    }                                                                                                              
                    if(facing_VIEW_backWall_INDICES_VBO  != 0)                                                                                             
                    {                                                                                                              
                            glDeleteBuffers(1, &facing_VIEW_backWall_INDICES_VBO);                                                                         
                            facing_VIEW_backWall_INDICES_VBO  = 0;                                                                                         
                    }                                                                                                              
