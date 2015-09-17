      //------------------------------------------------------------------------------------------                                                       
      #ifdef __APPLE__                                                                                                                                   
      filePathName = [[NSBundle mainBundle] pathForResource:@"cube_DOT3" ofType:@"bmp"];                                           
      image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                                   
      glGenTextures(1, &cube_NORMALMAP);                                                                                               
      glBindTexture(GL_TEXTURE_2D, cube_NORMALMAP);                                                                                    
      ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                               
      imgDestroyImage(image);                                                                                                                            
      //---------------------                                                                                                                            
      filePathName = [[NSBundle mainBundle] pathForResource:@"cube" ofType:@"png"];                                                
      image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                                   
      glGenTextures(1, &cube_TEXTUREMAP);                                                                                              
      glBindTexture(GL_TEXTURE_2D, cube_TEXTUREMAP);                                                                                   
      ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                               
      imgDestroyImage(image);                                                                                                                            
      #endif                                                                                                                                             
      //------------------------------------------------------------------------------------------                                                       
      #ifdef WIN32                                                                                                                                       
      loadTexture("_MODEL_FOLDERS_/cube/cube_DOT3.bmp",          cube_NORMALMAP);                
      loadTexture("_MODEL_FOLDERS_/cube/cube.png",               cube_TEXTUREMAP);               
      #endif                                                                                                                                             
      //------------------------------------------------------------------------------------------------------------//___LOAD_VBO                        
      #include    "cube.cpp"                                                                                                         
      glGenBuffers(1,              &cube_VBO);                                                                                         
      glBindBuffer(GL_ARRAY_BUFFER, cube_VBO);                                                                                         
      glBufferData(GL_ARRAY_BUFFER, sizeof(cube), cube, GL_STATIC_DRAW);                                             
      glBindBuffer(GL_ARRAY_BUFFER, 0);                                                                                                                  
      //------------------------------------------------------------------------------------------------------------                                     
      #include    "cube_INDICES.cpp"                                                                                                 
      glGenBuffers(1,              &cube_INDICES_VBO);                                                                                 
      glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, cube_INDICES_VBO);                                                                         
      glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(cube_INDICES), cube_INDICES, GL_STATIC_DRAW);                     
      glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);                                                                                                          
      //------------------------------------------------------------------------------------------------------------                                     
      COLLISION_BOUNDS[0]-0.405887
      COLLISION_BOUNDS[1]0.405887
      COLLISION_BOUNDS[2]-0.405887
      COLLISION_BOUNDS[3]0.405887
      COLLISION_BOUNDS[4]-0.405887
      COLLISION_BOUNDS[5]0.405887
