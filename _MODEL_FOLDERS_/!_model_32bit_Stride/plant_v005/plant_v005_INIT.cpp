      //------------------------------------------------------------------------------------------                                                       
      #ifdef __APPLE__                                                                                                                                   
      filePathName = [[NSBundle mainBundle] pathForResource:@"plant_v005_DOT3" ofType:@"bmp"];                                           
      image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                                   
      glGenTextures(1, &plant_v005_NORMALMAP);                                                                                               
      glBindTexture(GL_TEXTURE_2D, plant_v005_NORMALMAP);                                                                                    
      ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                               
      imgDestroyImage(image);                                                                                                                            
      //---------------------                                                                                                                            
      filePathName = [[NSBundle mainBundle] pathForResource:@"plant_v005" ofType:@"png"];                                                
      image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                                   
      glGenTextures(1, &plant_v005_TEXTUREMAP);                                                                                              
      glBindTexture(GL_TEXTURE_2D, plant_v005_TEXTUREMAP);                                                                                   
      ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                               
      imgDestroyImage(image);                                                                                                                            
      #endif                                                                                                                                             
      //------------------------------------------------------------------------------------------                                                       
      #ifdef WIN32                                                                                                                                       
      loadTexture("_MODEL_FOLDERS_/plant_v005/plant_v005_DOT3.bmp",          plant_v005_NORMALMAP);                
      loadTexture("_MODEL_FOLDERS_/plant_v005/plant_v005.png",               plant_v005_TEXTUREMAP);               
      #endif                                                                                                                                             
      //------------------------------------------------------------------------------------------------------------//___LOAD_VBO                        
      #include    "plant_v005.cpp"                                                                                                         
      glGenBuffers(1,              &plant_v005_VBO);                                                                                         
      glBindBuffer(GL_ARRAY_BUFFER, plant_v005_VBO);                                                                                         
      glBufferData(GL_ARRAY_BUFFER, sizeof(plant_v005), plant_v005, GL_STATIC_DRAW);                                             
      glBindBuffer(GL_ARRAY_BUFFER, 0);                                                                                                                  
      //------------------------------------------------------------------------------------------------------------                                     
      #include    "plant_v005_INDICES.cpp"                                                                                                 
      glGenBuffers(1,              &plant_v005_INDICES_VBO);                                                                                 
      glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, plant_v005_INDICES_VBO);                                                                         
      glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(plant_v005_INDICES), plant_v005_INDICES, GL_STATIC_DRAW);                     
      glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);                                                                                                          
      //------------------------------------------------------------------------------------------------------------                                     
      COLLISION_BOUNDS[0]-8.54103
      COLLISION_BOUNDS[1]8.58875
      COLLISION_BOUNDS[2]1.73792
      COLLISION_BOUNDS[3]2.61224
      COLLISION_BOUNDS[4]-5.14361
      COLLISION_BOUNDS[5]3.77105
