      //------------------------------------------------------------------------------------------                                                       
      #ifdef __APPLE__                                                                                                                                   
      filePathName = [[NSBundle mainBundle] pathForResource:@"mouldings_DOT3" ofType:@"png"];                                           
      image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                                   
      glGenTextures(1, &mouldings_NORMALMAP);                                                                                               
      glBindTexture(GL_TEXTURE_2D, mouldings_NORMALMAP);                                                                                    
      ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                               
      imgDestroyImage(image);                                                                                                                            
      //---------------------                                                                                                                            
      filePathName = [[NSBundle mainBundle] pathForResource:@"mouldings" ofType:@"png"];                                                
      image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                                   
      glGenTextures(1, &mouldings_TEXTUREMAP);                                                                                              
      glBindTexture(GL_TEXTURE_2D, mouldings_TEXTUREMAP);                                                                                   
      ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                               
      imgDestroyImage(image);                                                                                                                            
      #endif                                                                                                                                             
      //------------------------------------------------------------------------------------------                                                       
      #ifdef WIN32                                                                                                                                       
      loadTexture("_MODEL_FOLDERS_/mouldings/mouldings_DOT3.png",          mouldings_NORMALMAP);                
      loadTexture("_MODEL_FOLDERS_/mouldings/mouldings.png",               mouldings_TEXTUREMAP);               
      #endif                                                                                                                                             
      //------------------------------------------------------------------------------------------------------------//___LOAD_VBO                        
      #include    "mouldings.cpp"                                                                                                         
      glGenBuffers(1,              &mouldings_VBO);                                                                                         
      glBindBuffer(GL_ARRAY_BUFFER, mouldings_VBO);                                                                                         
      glBufferData(GL_ARRAY_BUFFER, sizeof(mouldings), mouldings, GL_STATIC_DRAW);                                             
      glBindBuffer(GL_ARRAY_BUFFER, 0);                                                                                                                  
      //------------------------------------------------------------------------------------------------------------                                     
      #include    "mouldings_INDICES.cpp"                                                                                                 
      glGenBuffers(1,              &mouldings_INDICES_VBO);                                                                                 
      glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, mouldings_INDICES_VBO);                                                                         
      glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(mouldings_INDICES), mouldings_INDICES, GL_STATIC_DRAW);                     
      glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);                                                                                                          
      //------------------------------------------------------------------------------------------------------------                                     
