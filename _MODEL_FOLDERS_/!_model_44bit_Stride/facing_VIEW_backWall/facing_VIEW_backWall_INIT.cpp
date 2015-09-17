      //------------------------------------------------------------------------------------------                                              
      #ifdef __APPLE__                                                                                                                          
      filePathName = [[NSBundle mainBundle] pathForResource:@"facing_VIEW_backWall_DOT3" ofType:@"bmp"];                                                  
      image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                   
      glGenTextures(1, &facing_VIEW_backWall_NORMALMAP);                                                                                                     
      glBindTexture(GL_TEXTURE_2D, facing_VIEW_backWall_NORMALMAP);                                                                                          
      ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                      
      imgDestroyImage(image);                                                                                                                   
      //---------------------                                                                                                                   
      filePathName = [[NSBundle mainBundle] pathForResource:@"facing_VIEW_backWall" ofType:@"png"];                                                       
      image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                   
      glGenTextures(1, &facing_VIEW_backWall_TEXTUREMAP);                                                                                                       
      glBindTexture(GL_TEXTURE_2D, facing_VIEW_backWall_TEXTUREMAP);                                                                                            
      ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                      
      imgDestroyImage(image);                                                                                                                   
      #endif                                                                                                                                    
      //------------------------------------------------------------------------------------------                                              
      #ifdef WIN32                                                                                                                            
      loadTexture("_MODEL_FOLDERS_/facing_VIEW_backWall/facing_VIEW_backWall_DOT3.bmp",          facing_VIEW_backWall_NORMALMAP);                                                      
      loadTexture("_MODEL_FOLDERS_/facing_VIEW_backWall/facing_VIEW_backWall.png",               facing_VIEW_backWall_TEXTUREMAP);                                                        
      #endif                                                                                                                                    
      //------------------------------------------------------------------------------------------------------------//___LOAD_VBO               
      #include    "facing_VIEW_backWall.cpp"                                                                                                                
      glGenBuffers(1,              &facing_VIEW_backWall_VBO);                                                                                                
      glBindBuffer(GL_ARRAY_BUFFER, facing_VIEW_backWall_VBO);                                                                                                
      glBufferData(GL_ARRAY_BUFFER, sizeof(facing_VIEW_backWall), facing_VIEW_backWall, GL_STATIC_DRAW);                                                                    
      glBindBuffer(GL_ARRAY_BUFFER, 0);                                                                                                         
      //------------------------------------------------------------------------------------------------------------       
      #include    "facing_VIEW_backWall_INDICES.cpp"                                                                                                                
      glGenBuffers(1,              &facing_VIEW_backWall_INDICES_VBO);                                                                                                
      glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, facing_VIEW_backWall_INDICES_VBO);                                                                                                
      glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(facing_VIEW_backWall_INDICES), facing_VIEW_backWall_INDICES, GL_STATIC_DRAW);                                                                    
      glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);                                                                                                         
      //------------------------------------------------------------------------------------------------------------       
