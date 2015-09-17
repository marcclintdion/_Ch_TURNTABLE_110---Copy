      //------------------------------------------------------------------------------------------                                              
      #ifdef __APPLE__                                                                                                                          
      filePathName = [[NSBundle mainBundle] pathForResource:@"lightSpheres_DOT3" ofType:@"bmp"];                                                  
      image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                   
      glGenTextures(1, &lightSpheres_NORMALMAP);                                                                                                     
      glBindTexture(GL_TEXTURE_2D, lightSpheres_NORMALMAP);                                                                                          
      ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                      
      imgDestroyImage(image);                                                                                                                   
      //---------------------                                                                                                                   
      filePathName = [[NSBundle mainBundle] pathForResource:@"lightSpheres" ofType:@"png"];                                                       
      image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                   
      glGenTextures(1, &lightSpheres_TEXTUREMAP);                                                                                                       
      glBindTexture(GL_TEXTURE_2D, lightSpheres_TEXTUREMAP);                                                                                            
      ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                      
      imgDestroyImage(image);                                                                                                                   
      #endif                                                                                                                                    
      //------------------------------------------------------------------------------------------                                              
      #ifdef WIN32                                                                                                                            
      loadTexture("_MODEL_FOLDERS_/lightSpheres/lightSpheres_DOT3.bmp",          lightSpheres_NORMALMAP);                                                      
      loadTexture("_MODEL_FOLDERS_/lightSpheres/lightSpheres.png",               lightSpheres_TEXTUREMAP);                                                        
      #endif                                                                                                                                    
      //------------------------------------------------------------------------------------------------------------//___LOAD_VBO               
      #include    "lightSpheres.cpp"                                                                                                                
      glGenBuffers(1,              &lightSpheres_VBO);                                                                                                
      glBindBuffer(GL_ARRAY_BUFFER, lightSpheres_VBO);                                                                                                
      glBufferData(GL_ARRAY_BUFFER, sizeof(lightSpheres), lightSpheres, GL_STATIC_DRAW);                                                                    
      glBindBuffer(GL_ARRAY_BUFFER, 0);                                                                                                         
      //------------------------------------------------------------------------------------------------------------       
      #include    "lightSpheres_INDICES.cpp"                                                                                                                
      glGenBuffers(1,              &lightSpheres_INDICES_VBO);                                                                                                
      glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, lightSpheres_INDICES_VBO);                                                                                                
      glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(lightSpheres_INDICES), lightSpheres_INDICES, GL_STATIC_DRAW);                                                                    
      glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);                                                                                                         
      //------------------------------------------------------------------------------------------------------------       
