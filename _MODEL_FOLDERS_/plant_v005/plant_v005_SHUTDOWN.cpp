                    if(plant_v005_NORMALMAP != 0)                                                                                                      
                    {                                                                                                                                              
                            glDeleteTextures(1, &plant_v005_NORMALMAP);                                                                                
                            plant_v005_NORMALMAP = 0;                                                                                                  
                    }                                                                                                                                              
                    if(plant_v005_TEXTUREMAP  != 0)                                                                                                    
                    {                                                                                                                                              
                            glDeleteTextures(1, &plant_v005_TEXTUREMAP);                                                                               
                            plant_v005_TEXTUREMAP  = 0;                                                                                                
                    }                                                                                                                                              
                    if(plant_v005_VBO  != 0)                                                                                                           
                    {                                                                                                                                              
                            glDeleteBuffers(1, &plant_v005_VBO);                                                                                       
                            plant_v005_VBO  = 0;                                                                                                       
                    }                                                                                                                                              
                    if(plant_v005_INDICES_VBO  != 0)                                                                                                   
                    {                                                                                                                                              
                            glDeleteBuffers(1, &plant_v005_INDICES_VBO);                                                                               
                            plant_v005_INDICES_VBO  = 0;                                                                                               
                    }                                                                                                                                              
