      //------------------------------------------------------------------------------------------                                                       
      #ifdef __APPLE__                                                                                                                                   
      filePathName = [[NSBundle mainBundle] pathForResource:@"chassisFan_DOT3" ofType:@"bmp"];                                           
      image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                                   
      glGenTextures(1, &chassisFan_NORMALMAP);                                                                                               
      glBindTexture(GL_TEXTURE_2D, chassisFan_NORMALMAP);                                                                                    
      ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                               
      imgDestroyImage(image);                                                                                                                            
      //---------------------                                                                                                                            
      filePathName = [[NSBundle mainBundle] pathForResource:@"chassisFan" ofType:@"png"];                                                
      image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                                   
      glGenTextures(1, &chassisFan_TEXTUREMAP);                                                                                              
      glBindTexture(GL_TEXTURE_2D, chassisFan_TEXTUREMAP);                                                                                   
      ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                               
      imgDestroyImage(image);                                                                                                                            
      #endif                                                                                                                                             
      //------------------------------------------------------------------------------------------                                                       
      #ifdef WIN32                                                                                                                                       
      loadTexture("_MODEL_FOLDERS_/chassisFan/chassisFan_DOT3.bmp",          chassisFan_NORMALMAP);                
      loadTexture("_MODEL_FOLDERS_/chassisFan/chassisFan.png",               chassisFan_TEXTUREMAP);               
      #endif                                                                                                                                             
      //------------------------------------------------------------------------------------------------------------//___LOAD_VBO                        
      #include    "chassisFan.cpp"                                                                                                         
      glGenBuffers(1,              &chassisFan_VBO);                                                                                         
      glBindBuffer(GL_ARRAY_BUFFER, chassisFan_VBO);                                                                                         
      glBufferData(GL_ARRAY_BUFFER, sizeof(chassisFan), chassisFan, GL_STATIC_DRAW);                                             
      glBindBuffer(GL_ARRAY_BUFFER, 0);                                                                                                                  
      //------------------------------------------------------------------------------------------------------------                                     
      #include    "chassisFan_INDICES.cpp"                                                                                                 
      glGenBuffers(1,              &chassisFan_INDICES_VBO);                                                                                 
      glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, chassisFan_INDICES_VBO);                                                                         
      glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(chassisFan_INDICES), chassisFan_INDICES, GL_STATIC_DRAW);                     
      glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);                                                                                                          
      //------------------------------------------------------------------------------------------------------------                                     
      COLLISION_BOUNDS[0]-0.999977
      COLLISION_BOUNDS[1]0.999977
      COLLISION_BOUNDS[2]-0.251317
      COLLISION_BOUNDS[3]0.248683
      COLLISION_BOUNDS[4]-0.999977
      COLLISION_BOUNDS[5]0.999977
