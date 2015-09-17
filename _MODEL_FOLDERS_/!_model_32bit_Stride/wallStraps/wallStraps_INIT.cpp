      //------------------------------------------------------------------------------------------                                                       
      #ifdef __APPLE__                                                                                                                                   
      filePathName = [[NSBundle mainBundle] pathForResource:@"wallStraps_DOT3" ofType:@"bmp"];                                           
      image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                                   
      glGenTextures(1, &wallStraps_NORMALMAP);                                                                                               
      glBindTexture(GL_TEXTURE_2D, wallStraps_NORMALMAP);                                                                                    
      ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                               
      imgDestroyImage(image);                                                                                                                            
      //---------------------                                                                                                                            
      filePathName = [[NSBundle mainBundle] pathForResource:@"wallStraps" ofType:@"png"];                                                
      image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                                   
      glGenTextures(1, &wallStraps_TEXTUREMAP);                                                                                              
      glBindTexture(GL_TEXTURE_2D, wallStraps_TEXTUREMAP);                                                                                   
      ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                               
      imgDestroyImage(image);                                                                                                                            
      #endif                                                                                                                                             
      //------------------------------------------------------------------------------------------                                                       
      #ifdef WIN32                                                                                                                                       
      loadTexture("_MODEL_FOLDERS_/wallStraps/wallStraps_DOT3.bmp",          wallStraps_NORMALMAP);                
      loadTexture("_MODEL_FOLDERS_/wallStraps/wallStraps.png",               wallStraps_TEXTUREMAP);               
      #endif                                                                                                                                             
      //------------------------------------------------------------------------------------------------------------//___LOAD_VBO                        
      #include    "wallStraps.cpp"                                                                                                         
      glGenBuffers(1,              &wallStraps_VBO);                                                                                         
      glBindBuffer(GL_ARRAY_BUFFER, wallStraps_VBO);                                                                                         
      glBufferData(GL_ARRAY_BUFFER, sizeof(wallStraps), wallStraps, GL_STATIC_DRAW);                                             
      glBindBuffer(GL_ARRAY_BUFFER, 0);                                                                                                                  
      //------------------------------------------------------------------------------------------------------------                                     
      #include    "wallStraps_INDICES.cpp"                                                                                                 
      glGenBuffers(1,              &wallStraps_INDICES_VBO);                                                                                 
      glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, wallStraps_INDICES_VBO);                                                                         
      glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(wallStraps_INDICES), wallStraps_INDICES, GL_STATIC_DRAW);                     
      glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);                                                                                                          
      //------------------------------------------------------------------------------------------------------------                                     
      COLLISION_BOUNDS[0]-8.73181
      COLLISION_BOUNDS[1]8.76211
      COLLISION_BOUNDS[2]-0.011604
      COLLISION_BOUNDS[3]6.92589
      COLLISION_BOUNDS[4]-6.18303
      COLLISION_BOUNDS[5]1.17549e-038
