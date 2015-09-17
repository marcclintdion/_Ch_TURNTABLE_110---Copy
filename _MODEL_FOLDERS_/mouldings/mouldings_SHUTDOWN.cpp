                    if(mouldings_NORMALMAP != 0)                                                                                                      
                    {                                                                                                                                              
                            glDeleteTextures(1, &mouldings_NORMALMAP);                                                                                
                            mouldings_NORMALMAP = 0;                                                                                                  
                    }                                                                                                                                              
                    if(mouldings_TEXTUREMAP  != 0)                                                                                                    
                    {                                                                                                                                              
                            glDeleteTextures(1, &mouldings_TEXTUREMAP);                                                                               
                            mouldings_TEXTUREMAP  = 0;                                                                                                
                    }                                                                                                                                              
                    if(mouldings_VBO  != 0)                                                                                                           
                    {                                                                                                                                              
                            glDeleteBuffers(1, &mouldings_VBO);                                                                                       
                            mouldings_VBO  = 0;                                                                                                       
                    }                                                                                                                                              
                    if(mouldings_INDICES_VBO  != 0)                                                                                                   
                    {                                                                                                                                              
                            glDeleteBuffers(1, &mouldings_INDICES_VBO);                                                                               
                            mouldings_INDICES_VBO  = 0;                                                                                               
                    }                                                                                                                                              
