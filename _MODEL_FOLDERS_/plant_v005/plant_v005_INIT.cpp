      //------------------------------------------------------------------------------------------                                                       
      #ifdef __APPLE__                                                                                                                                   
      filePathName = [[NSBundle mainBundle] pathForResource:@"plant_v005_DOT3" ofType:@"png"];                                           
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
      loadTexture("_MODEL_FOLDERS_/plant_v005/plant_v005_DOT3.png",          plant_v005_NORMALMAP);                
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
 /*     COLLISION_BOUNDS[0]-1.37633
      COLLISION_BOUNDS[1]1.33633
      COLLISION_BOUNDS[2]0.182841
      COLLISION_BOUNDS[3]1.05716
      COLLISION_BOUNDS[4]-1.37492
      COLLISION_BOUNDS[5]1.37492
 */
