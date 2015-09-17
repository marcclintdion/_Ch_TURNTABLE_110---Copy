                    if(blocksEdging_NORMALMAP != 0)                                                                                                      
                    {                                                                                                                                              
                            glDeleteTextures(1, &blocksEdging_NORMALMAP);                                                                                
                            blocksEdging_NORMALMAP = 0;                                                                                                  
                    }                                                                                                                                              
                    if(blocksEdging_TEXTUREMAP  != 0)                                                                                                    
                    {                                                                                                                                              
                            glDeleteTextures(1, &blocksEdging_TEXTUREMAP);                                                                               
                            blocksEdging_TEXTUREMAP  = 0;                                                                                                
                    }                                                                                                                                              
                    if(blocksEdging_VBO  != 0)                                                                                                           
                    {                                                                                                                                              
                            glDeleteBuffers(1, &blocksEdging_VBO);                                                                                       
                            blocksEdging_VBO  = 0;                                                                                                       
                    }                                                                                                                                              
                    if(blocksEdging_INDICES_VBO  != 0)                                                                                                   
                    {                                                                                                                                              
                            glDeleteBuffers(1, &blocksEdging_INDICES_VBO);                                                                               
                            blocksEdging_INDICES_VBO  = 0;                                                                                               
                    }                                                                                                                                              
