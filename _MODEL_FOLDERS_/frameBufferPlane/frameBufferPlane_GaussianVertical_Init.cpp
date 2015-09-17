      #ifdef __APPLE__                                                                                                                          
      #import <OpenGLES/ES2/gl.h>                                                                                                               
      #import <OpenGLES/ES2/glext.h>                                                                                                            
      #endif                                                                                                                                    
                                          
      frameBufferPlane_GaussianVertical_SHADER = glCreateProgram();                                                                                                         
                                                                   
      const GLchar *vertexSource_frameBufferPlane_GaussianVertical =                                                                                                        
      //===============================================================================================================================  
      "    #define highp                                                                                                                 \n"                           

      "    attribute vec4 position;                                                                                                      \n" 
      "    attribute vec2 texture;                                                                                                       \n" 
      "    uniform   float blurRadius;                                                                                                   \n" 
      "    uniform   float screenRatio;                                                                                                  \n" 
    
                                    
      "    varying vec2 v_texCoord;                                                                                                      \n" 
      "    varying vec2 v_blurTexCoords[7];                                                                                              \n" 
 
      "    void main()                                                                                                                   \n" 
      "    {                                                                                                                             \n" 
      
      "           vec2 Pos;                                                                                                              \n"  
      "           Pos = sign(position.xy);                                                                                               \n"  
 
      "           gl_Position = vec4(Pos, 0.0, 1.0);                                                                                     \n"  
                  //Image-space
      "           v_texCoord = Pos * 0.5 + 0.5;                                                                                          \n"  
           
      "           float blurRadius_ScreenRatio = blurRadius * screenRatio;                                                               \n"       
      
      "           v_texCoord = texture;                                                                                                  \n" 
                  //------------------
      "           v_blurTexCoords[ 0] = v_texCoord + vec2(0.0, -3.0 * blurRadius_ScreenRatio);                                                       \n"
      "           v_blurTexCoords[ 1] = v_texCoord + vec2(0.0, -2.0 * blurRadius_ScreenRatio);                                                       \n"
      "           v_blurTexCoords[ 2] = v_texCoord + vec2(0.0, -1.0 * blurRadius_ScreenRatio);                                                       \n"
      "           v_blurTexCoords[ 3] = v_texCoord + vec2(0.0,  0.0 * blurRadius_ScreenRatio);                                                       \n"      
      "           v_blurTexCoords[ 4] = v_texCoord + vec2(0.0,  1.0 * blurRadius_ScreenRatio);                                                       \n"
      "           v_blurTexCoords[ 5] = v_texCoord + vec2(0.0,  2.0 * blurRadius_ScreenRatio);                                                       \n"
      "           v_blurTexCoords[ 6] = v_texCoord + vec2(0.0,  3.0 * blurRadius_ScreenRatio);                                                       \n"
      
      "    }\n";                                                                                                                             
      //===============================================================================================================================                                                                    
      frameBufferPlane_GaussianVertical_SHADER_VERTEX = glCreateShader(GL_VERTEX_SHADER);                                                                                   
      glShaderSource(frameBufferPlane_GaussianVertical_SHADER_VERTEX, 1, &vertexSource_frameBufferPlane_GaussianVertical, NULL);                                                                        
      glCompileShader(frameBufferPlane_GaussianVertical_SHADER_VERTEX);                                                                                                     
      //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
      const GLchar *fragmentSource_frameBufferPlane_GaussianVertical =                                                                                                            
      //=============================================================================================================================== 
      " #ifdef GL_ES                                                                                                          \n"                       
      " #else                                                                                                                 \n"                       
      " #define highp                                                                                                         \n"                       
      " #endif                                                                                                                \n"                       

      "       uniform sampler2D s_texture;                                                                                     \n" 
 
      "       varying vec2 v_texCoord;                                                                                     \n" 
      "       varying vec2 v_blurTexCoords[7];                                                                                     \n" 
 
      "       void main()                                                                                                           \n" 
      "       {                                                                                                                     \n" 
      "           gl_FragColor = vec4(0.0);                                                                                     \n" 

      "               gl_FragColor += texture2D(s_texture, v_blurTexCoords[ 0])*0.09;                              \n" 
      "               gl_FragColor += texture2D(s_texture, v_blurTexCoords[ 1])*0.12;                              \n" 
      "               gl_FragColor += texture2D(s_texture, v_blurTexCoords[ 2])*0.15;                              \n" 
      "               gl_FragColor += texture2D(s_texture, v_blurTexCoords[ 3])*0.16;                              \n" 
      "               gl_FragColor += texture2D(s_texture, v_blurTexCoords[ 4])*0.15;                              \n" 
      "               gl_FragColor += texture2D(s_texture, v_blurTexCoords[ 5])*0.12;                              \n" 
      "               gl_FragColor += texture2D(s_texture, v_blurTexCoords[ 6])*0.09;                              \n" 

//------------------------------------------------------------------------------------------------------------------------------------  
      "    }\n";                                                                                                                                   

//====================================================================================================================================      

      //---------------------------------------------------------------------                                                                         
      frameBufferPlane_GaussianVertical_SHADER_FRAGMENT = glCreateShader(GL_FRAGMENT_SHADER);                                                                                     
      glShaderSource(frameBufferPlane_GaussianVertical_SHADER_FRAGMENT, 1, &fragmentSource_frameBufferPlane_GaussianVertical, NULL);                                                                          
      glCompileShader(frameBufferPlane_GaussianVertical_SHADER_FRAGMENT);                                                                                                         
      //------------------------------------------------                                                                                              
      glAttachShader(frameBufferPlane_GaussianVertical_SHADER, frameBufferPlane_GaussianVertical_SHADER_VERTEX);                                                                                              
      glAttachShader(frameBufferPlane_GaussianVertical_SHADER, frameBufferPlane_GaussianVertical_SHADER_FRAGMENT);                                                                                            
      //------------------------------------------------                                                                                              
      glBindAttribLocation(frameBufferPlane_GaussianVertical_SHADER, 0, "position");                                                                                            
      glBindAttribLocation(frameBufferPlane_GaussianVertical_SHADER, 1, "texture");                                                                                             
      //glBindAttribLocation(frameBufferPlane_GaussianVertical _SHADER, 2, "normal");                                                                                           
      //------------------------------------------------                                                                                              
      glLinkProgram(frameBufferPlane_GaussianVertical_SHADER);                                                                                                                    
      //------------------------------------------------                                                                                              
      #ifdef __APPLE__                                                                                                                                
      glDetachShader(frameBufferPlane_GaussianVertical_SHADER, frameBufferPlane_GaussianVertical_SHADER_VERTEX);                                                                                              
      glDetachShader(frameBufferPlane_GaussianVertical_SHADER, frameBufferPlane_GaussianVertical_SHADER_FRAGMENT);                                                                                            
      #endif                                                                                                                                          
      //------------------------------------------------                                                                                              
      glDeleteShader(frameBufferPlane_GaussianVertical_SHADER_VERTEX);                                                                                                            
      glDeleteShader(frameBufferPlane_GaussianVertical_SHADER_FRAGMENT);                                                                                                          
      //------------------------------------------------------------------------------------------------------------//___LOAD_UNIFORMS                
      
      UNIFORM_TEXTURE_frameBufferPlane_GaussianVertical            = glGetUniformLocation(frameBufferPlane_GaussianVertical_SHADER,   "s_texture");                                               
      UNIFORM_blurRadius_frameBufferPlane_GaussianVertical         = glGetUniformLocation(frameBufferPlane_GaussianVertical_SHADER,   "blurRadius");       
      UNIFORM_screenRatio_frameBufferPlane_GaussianVertical        = glGetUniformLocation(frameBufferPlane_GaussianVertical_SHADER,   "screenRatio");      
      //------------------------------------------------------------------------------------------------------------//___LOAD_TEXTURES                
      //------------------------------------------------------------------------------------------                                              
                                                                                                                                 
      //------------------------------------------------------------------------------------------------------------//___LOAD_VBO               
