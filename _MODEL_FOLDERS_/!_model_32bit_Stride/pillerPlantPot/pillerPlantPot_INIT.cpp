      //------------------------------------------------------------------------------------------                                                       
      #ifdef __APPLE__                                                                                                                                   
      filePathName = [[NSBundle mainBundle] pathForResource:@"pillerPlantPot_DOT3" ofType:@"bmp"];                                           
      image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                                   
      glGenTextures(1, &pillerPlantPot_NORMALMAP);                                                                                               
      glBindTexture(GL_TEXTURE_2D, pillerPlantPot_NORMALMAP);                                                                                    
      ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                               
      imgDestroyImage(image);                                                                                                                            
      //---------------------                                                                                                                            
      filePathName = [[NSBundle mainBundle] pathForResource:@"pillerPlantPot" ofType:@"png"];                                                
      image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                                   
      glGenTextures(1, &pillerPlantPot_TEXTUREMAP);                                                                                              
      glBindTexture(GL_TEXTURE_2D, pillerPlantPot_TEXTUREMAP);                                                                                   
      ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                               
      imgDestroyImage(image);                                                                                                                            
      #endif                                                                                                                                             
      //------------------------------------------------------------------------------------------                                                       
      #ifdef WIN32                                                                                                                                       
      loadTexture("_MODEL_FOLDERS_/pillerPlantPot/pillerPlantPot_DOT3.bmp",          pillerPlantPot_NORMALMAP);                
      loadTexture("_MODEL_FOLDERS_/pillerPlantPot/pillerPlantPot.png",               pillerPlantPot_TEXTUREMAP);               
      #endif                                                                                                                                             
      //------------------------------------------------------------------------------------------------------------//___LOAD_VBO                        
      #include    "pillerPlantPot.cpp"                                                                                                         
      glGenBuffers(1,              &pillerPlantPot_VBO);                                                                                         
      glBindBuffer(GL_ARRAY_BUFFER, pillerPlantPot_VBO);                                                                                         
      glBufferData(GL_ARRAY_BUFFER, sizeof(pillerPlantPot), pillerPlantPot, GL_STATIC_DRAW);                                             
      glBindBuffer(GL_ARRAY_BUFFER, 0);                                                                                                                  
      //------------------------------------------------------------------------------------------------------------                                     
      #include    "pillerPlantPot_INDICES.cpp"                                                                                                 
      glGenBuffers(1,              &pillerPlantPot_INDICES_VBO);                                                                                 
      glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, pillerPlantPot_INDICES_VBO);                                                                         
      glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(pillerPlantPot_INDICES), pillerPlantPot_INDICES, GL_STATIC_DRAW);                     
      glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);                                                                                                          
      //------------------------------------------------------------------------------------------------------------                                     
      COLLISION_BOUNDS[0]-7.62396
      COLLISION_BOUNDS[1]7.71966
      COLLISION_BOUNDS[2]0.038972
      COLLISION_BOUNDS[3]2.11824
      COLLISION_BOUNDS[4]-4.16728
      COLLISION_BOUNDS[5]2.9456
