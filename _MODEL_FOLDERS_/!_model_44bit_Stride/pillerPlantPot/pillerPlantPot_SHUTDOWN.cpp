                    if(pillerPlantPot_NORMALMAP != 0)                                                                                        
                    {                                                                                                              
                            glDeleteTextures(1, &pillerPlantPot_NORMALMAP);                                                                  
                            pillerPlantPot_NORMALMAP = 0;                                                                                    
                    }                                                                                                              
                    if(pillerPlantPot_TEXTUREMAP  != 0)                                                                                      
                    {                                                                                                              
                            glDeleteTextures(1, &pillerPlantPot_TEXTUREMAP);                                                                 
                            pillerPlantPot_TEXTUREMAP  = 0;                                                                                  
                    }                                                                                                              
                    if(pillerPlantPot_VBO  != 0)                                                                                             
                    {                                                                                                              
                            glDeleteBuffers(1, &pillerPlantPot_VBO);                                                                         
                            pillerPlantPot_VBO  = 0;                                                                                         
                    }                                                                                                              
                    if(pillerPlantPot_INDICES_VBO  != 0)                                                                                             
                    {                                                                                                              
                            glDeleteBuffers(1, &pillerPlantPot_INDICES_VBO);                                                                         
                            pillerPlantPot_INDICES_VBO  = 0;                                                                                         
                    }                                                                                                              
