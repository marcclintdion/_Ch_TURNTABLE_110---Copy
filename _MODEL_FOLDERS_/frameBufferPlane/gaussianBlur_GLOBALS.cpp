
//==================================================================================== 
GLuint      gaussianBlurHorizontalPass_fboId;
GLfloat     gaussianBlurHorizontalPass_POSITION[]                 = { 0.0,  0.0,  0.0,  1.0}; 
GLfloat     gaussianBlurHorizontalPass_ROTATE[]                 = { 0.0,  0.0,  0.0,  1.0}; 
GLfloat     gaussianBlurHorizontalPass_SCALE                     = 1.0; 
                                  
                                  //--------------------------------------------------
                                  GLfloat     offset_gaussianBlurHorizontalPass[]                 = { 0.0,  0.0,  0.0,  1.0};                                           
                                  GLfloat     tileJump_gaussianBlurHorizontalPass[]               = { 0.0,  0.0,  0.0,  1.0};                                           
                                  //=====================================================================================|_SHADER
                                  GLuint      gaussianBlurHorizontalPass_SHADER_VERTEX;                                                                                 
                                  GLuint      gaussianBlurHorizontalPass_SHADER_FRAGMENT;                                                                               
                                  GLuint      gaussianBlurHorizontalPass_SHADER;     
                                  //-------------------------------------------------------------------------------------|_CONFIGURABLE_UNIFORMS
                                  GLuint      UNIFORM_LIGHT_POSITION_01_gaussianBlurHorizontalPass;                                                                     
                                  GLuint      UNIFORM_LIGHT_POSITION_02_gaussianBlurHorizontalPass; 
                                  GLuint      UNIFORM_LIGHT_POSITION_03_gaussianBlurHorizontalPass; 
                                  
                                  GLuint      UNIFORM_attenuation_gaussianBlurHorizontalPass;
                                  GLuint      UNIFORM_counter_gaussianBlurHorizontalPass;                                                                               
                                  //-------------------------------------------------------------------------------------|_CORRECTION_UNIFORMS
                                  GLuint      UNIFORM_offset_gaussianBlurHorizontalPass;                                                                                
                                  GLuint      UNIFORM_tileJump_gaussianBlurHorizontalPass;                                                                              
                                  //-------------------------------------------------------------------------------------|_MATRIX_UNIFORMS
                                  GLuint      UNIFORM_MODELVIEW_gaussianBlurHorizontalPass;                                                                             
                                  GLuint      UNIFORM_MODELVIEWPROJ_gaussianBlurHorizontalPass;                                                                         
                                  //GLuint    UNIFORM_MODELVIEWPROJ_INVERSE_gaussianBlurHorizontalPass;                                                                 
                                  GLuint      UNIFORM_LIGHT_MATRIX_gaussianBlurHorizontalPass;                                                                          
                                  GLuint      UNIFORM_TEXTURE_MATRIX_gaussianBlurHorizontalPass;                                                                        
                                  //-------------------------------------------------------------------------------------|_TEXTURE_UNIFORMS
                                  GLuint      UNIFORM_TEXTURE_SHADOW_gaussianBlurHorizontalPass;                                                                        
                                  GLuint      UNIFORM_TEXTURE_DOT3_gaussianBlurHorizontalPass;                                                                          
                                  GLuint      UNIFORM_TEXTURE_gaussianBlurHorizontalPass; 

//=================================================
GLuint      gaussianBlurVerticalPass_fboId;
GLfloat     gaussianBlurVerticalPass_POSITION[]                 = { 0.0,  0.0,  0.0,  1.0};
GLfloat     gaussianBlurVerticalPass_ROTATE[]                 = { 0.0,  0.0,  0.0,  1.0}; 
GLfloat     gaussianBlurVerticalPass_SCALE                     = 1.0;       
                                  //--------------------------------------------------
                                  GLfloat     offset_gaussianBlurVerticalPass[]                 = { 0.0,  0.0,  0.0,  1.0};                                           
                                  GLfloat     tileJump_gaussianBlurVerticalPass[]               = { 0.0,  0.0,  0.0,  1.0};                                           
                                  //=====================================================================================|_SHADER
                                  GLuint      gaussianBlurVerticalPass_SHADER_VERTEX;                                                                                 
                                  GLuint      gaussianBlurVerticalPass_SHADER_FRAGMENT;                                                                               
                                  GLuint      gaussianBlurVerticalPass_SHADER;     
                                  //-------------------------------------------------------------------------------------|_CONFIGURABLE_UNIFORMS
                                  GLuint      UNIFORM_LIGHT_POSITION_01_gaussianBlurVerticalPass;                                                                     
                                  GLuint      UNIFORM_LIGHT_POSITION_02_gaussianBlurVerticalPass; 
                                  GLuint      UNIFORM_LIGHT_POSITION_03_gaussianBlurVerticalPass; 
                                  
                                  GLuint      UNIFORM_attenuation_gaussianBlurVerticalPass;
                                  GLuint      UNIFORM_counter_gaussianBlurVerticalPass;                                                                               
                                  //-------------------------------------------------------------------------------------|_CORRECTION_UNIFORMS
                                  GLuint      UNIFORM_offset_gaussianBlurVerticalPass;                                                                                
                                  GLuint      UNIFORM_tileJump_gaussianBlurVerticalPass;                                                                              
                                  //-------------------------------------------------------------------------------------|_MATRIX_UNIFORMS
                                  GLuint      UNIFORM_MODELVIEW_gaussianBlurVerticalPass;                                                                             
                                  GLuint      UNIFORM_MODELVIEWPROJ_gaussianBlurVerticalPass;                                                                         
                                  //GLuint    UNIFORM_MODELVIEWPROJ_INVERSE_gaussianBlurVerticalPass;                                                                 
                                  GLuint      UNIFORM_LIGHT_MATRIX_gaussianBlurVerticalPass;                                                                          
                                  GLuint      UNIFORM_TEXTURE_MATRIX_gaussianBlurVerticalPass;                                                                        
                                  //-------------------------------------------------------------------------------------|_TEXTURE_UNIFORMS
                                  GLuint      UNIFORM_TEXTURE_SHADOW_gaussianBlurVerticalPass;                                                                        
                                  GLuint      UNIFORM_TEXTURE_DOT3_gaussianBlurVerticalPass;                                                                          
                                  GLuint      UNIFORM_TEXTURE_gaussianBlurVerticalPass; 
      

//===============================================================================================================================                                                       
GLuint      frameBufferPlane_GaussianHorizontal_SHADER_VERTEX;                                                                                                      
GLuint      frameBufferPlane_GaussianHorizontal_SHADER_FRAGMENT;                                                                                                    
GLuint      frameBufferPlane_GaussianHorizontal_SHADER;                                                                                                             
//--------------------------------------                                                                                                  
GLuint      UNIFORM_TEXTURE_2_frameBufferPlane_GaussianHorizontal;  
GLuint      UNIFORM_TEXTURE_frameBufferPlane_GaussianHorizontal; 
GLuint      UNIFORM_blurRadius_frameBufferPlane_GaussianHorizontal;                                                                                                    
//--------------------------------------                                                                                                  
GLuint      frameBufferPlane_GaussianHorizontal_VBO;                                                                                                                

//====================================================================================  
GLuint      frameBufferPlane_GaussianVertical_SHADER_VERTEX;                                                                                                      
GLuint      frameBufferPlane_GaussianVertical_SHADER_FRAGMENT;                                                                                                    
GLuint      frameBufferPlane_GaussianVertical_SHADER;                                                                                                             
//--------------------------------------                                                                                                  
GLuint      UNIFORM_TEXTURE_2_frameBufferPlane_GaussianVertical;  
GLuint      UNIFORM_TEXTURE_frameBufferPlane_GaussianVertical; 
GLuint      UNIFORM_blurRadius_frameBufferPlane_GaussianVertical;                                                                                                    
//-----------------------------------------------------------------                                                                       
GLuint      frameBufferPlane_GaussianVertical_VBO;                                                                                                                
//-----------------------------------------------------------------                                                                       
