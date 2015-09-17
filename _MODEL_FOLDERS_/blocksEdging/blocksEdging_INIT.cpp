      //------------------------------------------------------------------------------------------                                              
      #ifdef __APPLE__                                                                                                                          
      filePathName = [[NSBundle mainBundle] pathForResource:@"blocksEdging_DOT3" ofType:@"png"];                                                  
      image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                   
      glGenTextures(1, &blocksEdging_NORMALMAP);                                                                                                     
      glBindTexture(GL_TEXTURE_2D, blocksEdging_NORMALMAP);                                                                                          
      ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                      
      imgDestroyImage(image);                                                                                                                   
      //---------------------                                                                                                                   
      filePathName = [[NSBundle mainBundle] pathForResource:@"blocksEdging" ofType:@"png"];                                                       
      image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                   
      glGenTextures(1, &blocksEdging_TEXTUREMAP);                                                                                                       
      glBindTexture(GL_TEXTURE_2D, blocksEdging_TEXTUREMAP);                                                                                            
      ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                      
      imgDestroyImage(image);                                                                                                                   
      #endif                                                                                                                                    
      //------------------------------------------------------------------------------------------                                              
      #ifdef WIN32                                                                                                                            
      loadTexture("_MODEL_FOLDERS_/blocksEdging/blocksEdging_DOT3.png",          blocksEdging_NORMALMAP);                                                      
      loadTexture("_MODEL_FOLDERS_/blocksEdging/blocksEdging.png",               blocksEdging_TEXTUREMAP);                                                        
      #endif                                                                                                                                    
      //------------------------------------------------------------------------------------------------------------//___LOAD_VBO               
      #include    "blocksEdging.cpp"                                                                                                                
      glGenBuffers(1,              &blocksEdging_VBO);                                                                                                
      glBindBuffer(GL_ARRAY_BUFFER, blocksEdging_VBO);                                                                                                
      glBufferData(GL_ARRAY_BUFFER, sizeof(blocksEdging), blocksEdging, GL_STATIC_DRAW);                                                                    
      glBindBuffer(GL_ARRAY_BUFFER, 0);                                                                                                         
      //------------------------------------------------------------------------------------------------------------       
      #include    "blocksEdging_INDICES.cpp"                                                                                                                
      glGenBuffers(1,              &blocksEdging_INDICES_VBO);                                                                                                
      glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, blocksEdging_INDICES_VBO);                                                                                                
      glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(blocksEdging_INDICES), blocksEdging_INDICES, GL_STATIC_DRAW);                                                                    
      glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);                                                                                                         
      //------------------------------------------------------------------------------------------------------------       
