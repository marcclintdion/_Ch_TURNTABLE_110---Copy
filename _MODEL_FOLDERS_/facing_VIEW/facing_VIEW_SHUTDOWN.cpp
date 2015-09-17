                    if(facing_VIEW_NORMALMAP != 0)                                                                                        
                    {                                                                                                              
                            glDeleteTextures(1, &facing_VIEW_NORMALMAP);                                                                  
                            facing_VIEW_NORMALMAP = 0;                                                                                    
                    }                                                                                                              
                    if(facing_VIEW_TEXTUREMAP  != 0)                                                                                      
                    {                                                                                                              
                            glDeleteTextures(1, &facing_VIEW_TEXTUREMAP);                                                                 
                            facing_VIEW_TEXTUREMAP  = 0;                                                                                  
                    }                    
                    //------------------------------------------------------------                                                                                                              
                    if(facing_VIEW_backWall_VBO  != 0)                                                                                             
                    {                                                                                                              
                            glDeleteBuffers(1, &facing_VIEW_backWall_VBO);                                                                         
                            facing_VIEW_backWall_VBO  = 0;                                                                                         
                    }                                                                                                              
                    if(facing_VIEW_backWall_INDEX_VBO  != 0)                                                                                             
                    {                                                                                                              
                            glDeleteBuffers(1, &facing_VIEW_backWall_INDEX_VBO);                                                                         
                            facing_VIEW_backWall_INDEX_VBO  = 0;                                                                                         
                    }                                                                                                              
                    //------------------------------------------------------------
                    if(facing_VIEW_blocks_01_VBO  != 0)                                                                                             
                    {                                                                                                              
                            glDeleteBuffers(1, &facing_VIEW_blocks_01_VBO);                                                                         
                            facing_VIEW_blocks_01_VBO  = 0;                                                                                         
                    }                                                                                                              
                    if(facing_VIEW_blocks_01_INDICES_VBO  != 0)                                                                                             
                    {                                                                                                              
                            glDeleteBuffers(1, &facing_VIEW_blocks_01_INDICES_VBO);                                                                         
                            facing_VIEW_blocks_01_INDICES_VBO  = 0;                                                                                         
                    }                                                                                                              
