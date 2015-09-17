      #ifdef __APPLE__                                                                                                                          
      #import <OpenGLES/ES2/gl.h>                                                                                                               
      #import <OpenGLES/ES2/glext.h>                                                                                                            
      #endif                                                                                                                                    
      //===============================================================================================                                         
      frameBufferPlane_SHADER = glCreateProgram();                                                                                                         
      //---------------------------------------------------------------------                                                                   
      const GLchar *vertexSource_frameBufferPlane =                                                                                                        

      "    #define highp                                                                                                                        \n"                           

        "       uniform       mat4      mvpMatrix;                                                                                              \n"                           

        "       attribute     vec4      position;                                                                                               \n"                           
      
        "       varying highp vec2      vTexCoord;                                                                                                      \n"                           
        "       varying highp vec4      vProjCoord;                                                                                             \n"

        "    void main()                                                                                                                        \n"                           
        "    {                                                                                                                                  \n"                           
     
        "               vProjCoord              =  mvpMatrix * position;                                                                        \n"

        "               vec2 Pos;                                                                                                               \n"  
        "               Pos                     =  sign(position.xy);                                                                                                \n"  
 
        "               gl_Position             =  vec4(Pos, 0.0, 1.0);                                                                         \n"  
                        
        "               vTexCoord               =  Pos * 0.5 + 0.5;                                                                             \n"  
     
        "    }\n";                                                                                                                             
      //---------------------------------------------------------------------                                                                   
      frameBufferPlane_SHADER_VERTEX = glCreateShader(GL_VERTEX_SHADER);                                                                                   
      glShaderSource(frameBufferPlane_SHADER_VERTEX, 1, &vertexSource_frameBufferPlane, NULL);                                                                        
      glCompileShader(frameBufferPlane_SHADER_VERTEX);                                                                                                     
      //---------------------------------------------------------------------                                                                   
      const GLchar *fragmentSource_frameBufferPlane =                                                                                                            

      " #ifdef GL_ES                                                                                                                            \n"                       
      " #else                                                                                                                                   \n"                       
      " #define highp                                                                                                                           \n"                       
      " #endif                                                                                                                                  \n"                       

        "       uniform highp sampler2D Texture2;                                                                                                    \n"   
        "       uniform highp sampler2D Texture1;                                                                                                    \n"                       
        "       varying highp vec2      vTexCoord;                                                                                                     \n"                       
        "       varying highp vec4      vProjCoord;                                                                                             \n"
     
        
        "     void main()                                                                                                                       \n"                       
        "     {                                                                                                                                 \n"                       
//==============================================================================================================      
//==============================================================================================================  


         
        "               highp float depth = texture2DProj(Texture1, vProjCoord).r;                                                              \n"
     
        "               gl_FragColor      = vec4(depth, depth, depth, depth);                                                                   \n"   



  
//==============================================================================================================      
//==============================================================================================================      
      "    }\n";                                                                                                                                   

      //---------------------------------------------------------------------                                                                         
      frameBufferPlane_SHADER_FRAGMENT = glCreateShader(GL_FRAGMENT_SHADER);                                                                                     
      glShaderSource(frameBufferPlane_SHADER_FRAGMENT, 1, &fragmentSource_frameBufferPlane, NULL);                                                                          
      glCompileShader(frameBufferPlane_SHADER_FRAGMENT);                                                                                                         
      //------------------------------------------------                                                                                              
      glAttachShader(frameBufferPlane_SHADER, frameBufferPlane_SHADER_VERTEX);                                                                                              
      glAttachShader(frameBufferPlane_SHADER, frameBufferPlane_SHADER_FRAGMENT);                                                                                            
      //------------------------------------------------                                                                                              
      glBindAttribLocation(frameBufferPlane_SHADER, 0, "position");                                                                                            
      glBindAttribLocation(frameBufferPlane_SHADER, 1, "texture");                                                                                             
      //glBindAttribLocation(frameBufferPlane _SHADER, 2, "normal");                                                                                           
      //------------------------------------------------                                                                                              
      glLinkProgram(frameBufferPlane_SHADER);                                                                                                                    
      //------------------------------------------------                                                                                              
      #ifdef __APPLE__                                                                                                                                
      glDetachShader(frameBufferPlane_SHADER, frameBufferPlane_SHADER_VERTEX);                                                                                              
      glDetachShader(frameBufferPlane_SHADER, frameBufferPlane_SHADER_FRAGMENT);                                                                                            
      #endif                                                                                                                                          
      //------------------------------------------------                                                                                              
      glDeleteShader(frameBufferPlane_SHADER_VERTEX);                                                                                                            
      glDeleteShader(frameBufferPlane_SHADER_FRAGMENT);                                                                                                          
      //------------------------------------------------------------------------------------------------------------//___LOAD_UNIFORMS                
      
      UNIFORM_MODELVIEWPROJ_frameBufferPlane      = glGetUniformLocation(frameBufferPlane_SHADER,   "mvpMatrix");                                              
      UNIFORM_TEXTURE_frameBufferPlane            = glGetUniformLocation(frameBufferPlane_SHADER,   "Texture1"); 
      UNIFORM_TEXTURE2_frameBufferPlane            = glGetUniformLocation(frameBufferPlane_SHADER,   "Texture2");                                                     
      //------------------------------------------------------------------------------------------------------------//___LOAD_TEXTURES                
      //------------------------------------------------------------------------------------------                                              
                                                                                                                                 
      //------------------------------------------------------------------------------------------------------------//___LOAD_VBO               
      #include    "frameBufferPlane.cpp"                                                                                                                
      glGenBuffers(1,              &frameBufferPlane_VBO);                                                                                                
      glBindBuffer(GL_ARRAY_BUFFER, frameBufferPlane_VBO);                                                                                                
      glBufferData(GL_ARRAY_BUFFER, sizeof(frameBufferPlane), frameBufferPlane, GL_STATIC_DRAW);                                                                    
      glBindBuffer(GL_ARRAY_BUFFER, 0);                                                                                                         
      //=================================================================================================================================       
