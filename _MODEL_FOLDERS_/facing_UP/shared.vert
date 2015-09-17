//  input from the user
uniform float csm_gain;
uniform float csm_offset;
uniform float texsize;



varying vec2 texCoord;
varying vec3 vertex_pos;
varying vec3 light_pos;
varying float vertex_dist;
varying float light_dist;


varying float dist_val;

void main(void)
{
                                                                              // location of the vertex in eye space
   vec3 eyeSpaceVert = (gl_ModelViewMatrix * gl_Vertex).xyz;
  
                                                                            
   eyeSpaceLight = (gl_ModelViewMatrix * vec4(gl_LightSource[0].position.xyz,1.0)).xyz;
                                                                                   //  the matrix needed to convert to eye space
                                                                                    //  (this is local, and should already be normalized, I think)
   vec3 eyeSpaceTangent  = normalize(gl_NormalMatrix * gl_MultiTexCoord1.xyz);	    //tangent;
   vec3 eyeSpaceBinormal = normalize(gl_NormalMatrix * (-gl_MultiTexCoord2.xyz));	//binormal;
   vec3 eyeSpaceNormal   = normalize(gl_NormalMatrix * gl_Normal); //normal
  
                                                                                  // now convert the light and position, and pass in the texture coordinate
   vertex_pos = vec3 (
        dot (eyeSpaceTangent, eyeSpaceVert),
        dot (eyeSpaceBinormal, eyeSpaceVert),
        dot (eyeSpaceNormal, eyeSpaceVert));
   light_pos = vec3 (
        dot (eyeSpaceTangent, eyeSpaceLight),
        dot (eyeSpaceBinormal, eyeSpaceLight),
        dot (eyeSpaceNormal, eyeSpaceLight)) - vertex_pos;
   
   vertex_dist = length (eyeSpaceVert);
   light_dist = length (light_pos);
                                                                                  //light_pos /= light_dist;
   texCoord   = gl_MultiTexCoord0.xy;
   
                                                                                  //  for the LOD
   dist_val = (0.00333 * vertex_dist * csm_gain + csm_offset) / texsize;
   
   
   gl_Position = ftransform();
}
