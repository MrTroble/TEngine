#include "ShaderData.hpp"

VkPipelineShaderStageCreateInfo FragmentColorOnly;
unsigned char FragmentColorOnlyModule[] = { 3,2,35,7,0,0,1,0,7,0,8,0,24,0,0,0,0,0,0,0,17,0,2,0,1,0,0,0,11,0,6,0,1,0,0,0,71,76,83,76,46,115,116,100,46,52,53,48,0,0,0,0,14,0,3,0,0,0,0,0,1,0,0,0,15,0,7,0,4,0,0,0,4,0,0,0,109,97,105,110,0,0,0,0,9,0,0,0,16,0,0,0,16,0,3,0,4,0,0,0,7,0,0,0,3,0,3,0,2,0,0,0,204,1,0,0,4,0,9,0,71,76,95,65,82,66,95,115,101,112,97,114,97,116,101,95,115,104,97,100,101,114,95,111,98,106,101,99,116,115,0,0,5,0,4,0,4,0,0,0,109,97,105,110,0,0,0,0,5,0,5,0,9,0,0,0,99,111,108,111,114,79,117,116,0,0,0,0,5,0,3,0,10,0,0,0,114,0,0,0,5,0,3,0,11,0,0,0,103,0,0,0,5,0,3,0,12,0,0,0,98,0,0,0,5,0,6,0,16,0,0,0,108,105,103,104,116,95,97,109,112,108,105,102,105,101,114,0,5,0,3,0,19,0,0,0,97,0,0,0,71,0,4,0,9,0,0,0,30,0,0,0,0,0,0,0,71,0,4,0,10,0,0,0,1,0,0,0,0,0,0,0,71,0,4,0,11,0,0,0,1,0,0,0,1,0,0,0,71,0,4,0,12,0,0,0,1,0,0,0,2,0,0,0,71,0,4,0,16,0,0,0,30,0,0,0,0,0,0,0,71,0,4,0,19,0,0,0,1,0,0,0,3,0,0,0,19,0,2,0,2,0,0,0,33,0,3,0,3,0,0,0,2,0,0,0,22,0,3,0,6,0,0,0,32,0,0,0,23,0,4,0,7,0,0,0,6,0,0,0,4,0,0,0,32,0,4,0,8,0,0,0,3,0,0,0,7,0,0,0,59,0,4,0,8,0,0,0,9,0,0,0,3,0,0,0,50,0,4,0,6,0,0,0,10,0,0,0,0,0,0,0,50,0,4,0,6,0,0,0,11,0,0,0,0,0,0,0,50,0,4,0,6,0,0,0,12,0,0,0,0,0,0,0,23,0,4,0,13,0,0,0,6,0,0,0,3,0,0,0,32,0,4,0,15,0,0,0,1,0,0,0,6,0,0,0,59,0,4,0,15,0,0,0,16,0,0,0,1,0,0,0,50,0,4,0,6,0,0,0,19,0,0,0,0,0,128,63,54,0,5,0,2,0,0,0,4,0,0,0,0,0,0,0,3,0,0,0,248,0,2,0,5,0,0,0,80,0,6,0,13,0,0,0,14,0,0,0,10,0,0,0,11,0,0,0,12,0,0,0,61,0,4,0,6,0,0,0,17,0,0,0,16,0,0,0,142,0,5,0,13,0,0,0,18,0,0,0,14,0,0,0,17,0,0,0,81,0,5,0,6,0,0,0,20,0,0,0,18,0,0,0,0,0,0,0,81,0,5,0,6,0,0,0,21,0,0,0,18,0,0,0,1,0,0,0,81,0,5,0,6,0,0,0,22,0,0,0,18,0,0,0,2,0,0,0,80,0,7,0,7,0,0,0,23,0,0,0,20,0,0,0,21,0,0,0,22,0,0,0,19,0,0,0,62,0,3,0,9,0,0,0,23,0,0,0,253,0,1,0,56,0,1,0};
VkPipelineShaderStageCreateInfo FragmentTextured;
unsigned char FragmentTexturedModule[] = { 3,2,35,7,0,0,1,0,7,0,8,0,149,0,0,0,0,0,0,0,17,0,2,0,1,0,0,0,11,0,6,0,1,0,0,0,71,76,83,76,46,115,116,100,46,52,53,48,0,0,0,0,14,0,3,0,0,0,0,0,1,0,0,0,15,0,9,0,4,0,0,0,4,0,0,0,109,97,105,110,0,0,0,0,32,0,0,0,115,0,0,0,140,0,0,0,148,0,0,0,16,0,3,0,4,0,0,0,7,0,0,0,3,0,3,0,2,0,0,0,204,1,0,0,4,0,9,0,71,76,95,65,82,66,95,115,101,112,97,114,97,116,101,95,115,104,97,100,101,114,95,111,98,106,101,99,116,115,0,0,5,0,4,0,4,0,0,0,109,97,105,110,0,0,0,0,5,0,5,0,9,0,0,0,103,101,116,67,111,108,111,114,40,0,0,0,5,0,5,0,14,0,0,0,119,105,110,100,111,119,40,102,49,59,0,0,5,0,4,0,13,0,0,0,100,105,115,116,0,0,0,0,5,0,5,0,17,0,0,0,102,97,108,108,40,102,49,59,0,0,0,0,5,0,4,0,16,0,0,0,100,105,115,116,0,0,0,0,5,0,6,0,23,0,0,0,97,112,112,108,121,76,105,103,104,116,40,118,102,51,59,0,5,0,5,0,22,0,0,0,108,105,103,104,116,80,111,119,101,114,0,0,5,0,6,0,28,0,0,0,105,109,97,103,101,83,97,109,112,108,101,114,0,0,0,0,5,0,3,0,32,0,0,0,117,118,0,0,5,0,5,0,58,0,0,0,99,117,114,101,110,116,67,111,108,111,114,0,5,0,6,0,78,0,0,0,108,105,103,104,116,77,117,108,116,105,112,108,105,101,114,0,5,0,3,0,81,0,0,0,105,0,0,0,5,0,5,0,89,0,0,0,109,97,120,108,105,103,104,116,115,0,0,0,5,0,4,0,92,0,0,0,76,105,103,104,116,0,0,0,6,0,4,0,92,0,0,0,0,0,0,0,112,111,115,0,6,0,6,0,92,0,0,0,1,0,0,0,105,110,116,101,110,115,105,116,121,0,0,0,5,0,4,0,94,0,0,0,108,105,103,104,116,0,0,0,5,0,4,0,95,0,0,0,76,105,103,104,116,0,0,0,6,0,4,0,95,0,0,0,0,0,0,0,112,111,115,0,6,0,6,0,95,0,0,0,1,0,0,0,105,110,116,101,110,115,105,116,121,0,0,0,5,0,5,0,97,0,0,0,76,73,71,72,84,66,76,79,67,75,0,0,6,0,5,0,97,0,0,0,0,0,0,0,108,105,103,104,116,115,0,0,5,0,4,0,99,0,0,0,108,105,103,104,116,115,0,0,5,0,4,0,111,0,0,0,100,101,108,116,97,0,0,0,5,0,3,0,115,0,0,0,112,111,115,0,5,0,4,0,118,0,0,0,100,105,115,116,0,0,0,0,5,0,4,0,123,0,0,0,108,105,103,104,116,77,0,0,5,0,4,0,126,0,0,0,112,97,114,97,109,0,0,0,5,0,4,0,130,0,0,0,112,97,114,97,109,0,0,0,5,0,5,0,140,0,0,0,99,111,108,111,114,79,117,116,0,0,0,0,5,0,4,0,141,0,0,0,112,97,114,97,109,0,0,0,5,0,3,0,144,0,0,0,114,0,0,0,5,0,3,0,145,0,0,0,103,0,0,0,5,0,3,0,146,0,0,0,98,0,0,0,5,0,3,0,147,0,0,0,97,0,0,0,5,0,5,0,148,0,0,0,110,111,114,109,97,108,73,110,0,0,0,0,71,0,4,0,28,0,0,0,34,0,0,0,0,0,0,0,71,0,4,0,28,0,0,0,33,0,0,0,2,0,0,0,71,0,4,0,32,0,0,0,30,0,0,0,1,0,0,0,71,0,4,0,89,0,0,0,1,0,0,0,4,0,0,0,72,0,5,0,95,0,0,0,0,0,0,0,35,0,0,0,0,0,0,0,72,0,5,0,95,0,0,0,1,0,0,0,35,0,0,0,16,0,0,0,71,0,4,0,96,0,0,0,6,0,0,0,32,0,0,0,72,0,5,0,97,0,0,0,0,0,0,0,35,0,0,0,0,0,0,0,71,0,3,0,97,0,0,0,2,0,0,0,71,0,4,0,99,0,0,0,34,0,0,0,0,0,0,0,71,0,4,0,99,0,0,0,33,0,0,0,1,0,0,0,71,0,4,0,115,0,0,0,30,0,0,0,2,0,0,0,71,0,4,0,140,0,0,0,30,0,0,0,0,0,0,0,71,0,4,0,144,0,0,0,1,0,0,0,0,0,0,0,71,0,4,0,145,0,0,0,1,0,0,0,1,0,0,0,71,0,4,0,146,0,0,0,1,0,0,0,2,0,0,0,71,0,4,0,147,0,0,0,1,0,0,0,3,0,0,0,71,0,4,0,148,0,0,0,30,0,0,0,0,0,0,0,19,0,2,0,2,0,0,0,33,0,3,0,3,0,0,0,2,0,0,0,22,0,3,0,6,0,0,0,32,0,0,0,23,0,4,0,7,0,0,0,6,0,0,0,4,0,0,0,33,0,3,0,8,0,0,0,7,0,0,0,32,0,4,0,11,0,0,0,7,0,0,0,6,0,0,0,33,0,4,0,12,0,0,0,6,0,0,0,11,0,0,0,23,0,4,0,19,0,0,0,6,0,0,0,3,0,0,0,32,0,4,0,20,0,0,0,7,0,0,0,19,0,0,0,33,0,4,0,21,0,0,0,7,0,0,0,20,0,0,0,25,0,9,0,25,0,0,0,6,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,27,0,3,0,26,0,0,0,25,0,0,0,32,0,4,0,27,0,0,0,0,0,0,0,26,0,0,0,59,0,4,0,27,0,0,0,28,0,0,0,0,0,0,0,23,0,4,0,30,0,0,0,6,0,0,0,2,0,0,0,32,0,4,0,31,0,0,0,1,0,0,0,30,0,0,0,59,0,4,0,31,0,0,0,32,0,0,0,1,0,0,0,43,0,4,0,6,0,0,0,37,0,0,0,0,0,128,63,43,0,4,0,6,0,0,0,39,0,0,0,0,0,72,66,43,0,4,0,6,0,0,0,41,0,0,0,0,0,128,64,43,0,4,0,6,0,0,0,44,0,0,0,0,0,0,0,43,0,4,0,6,0,0,0,46,0,0,0,0,0,0,64,43,0,4,0,6,0,0,0,50,0,0,0,0,0,160,64,32,0,4,0,57,0,0,0,7,0,0,0,7,0,0,0,21,0,4,0,68,0,0,0,32,0,0,0,0,0,0,0,43,0,4,0,68,0,0,0,69,0,0,0,3,0,0,0,44,0,6,0,19,0,0,0,79,0,0,0,44,0,0,0,44,0,0,0,44,0,0,0,32,0,4,0,80,0,0,0,7,0,0,0,68,0,0,0,43,0,4,0,68,0,0,0,82,0,0,0,0,0,0,0,50,0,4,0,68,0,0,0,89,0,0,0,2,0,0,0,20,0,2,0,90,0,0,0,30,0,4,0,92,0,0,0,19,0,0,0,19,0,0,0,32,0,4,0,93,0,0,0,7,0,0,0,92,0,0,0,30,0,4,0,95,0,0,0,19,0,0,0,19,0,0,0,28,0,4,0,96,0,0,0,95,0,0,0,89,0,0,0,30,0,3,0,97,0,0,0,96,0,0,0,32,0,4,0,98,0,0,0,2,0,0,0,97,0,0,0,59,0,4,0,98,0,0,0,99,0,0,0,2,0,0,0,21,0,4,0,100,0,0,0,32,0,0,0,1,0,0,0,43,0,4,0,100,0,0,0,101,0,0,0,0,0,0,0,32,0,4,0,103,0,0,0,2,0,0,0,95,0,0,0,43,0,4,0,100,0,0,0,109,0,0,0,1,0,0,0,32,0,4,0,114,0,0,0,1,0,0,0,19,0,0,0,59,0,4,0,114,0,0,0,115,0,0,0,1,0,0,0,32,0,4,0,139,0,0,0,3,0,0,0,7,0,0,0,59,0,4,0,139,0,0,0,140,0,0,0,3,0,0,0,50,0,4,0,6,0,0,0,144,0,0,0,0,0,128,63,50,0,4,0,6,0,0,0,145,0,0,0,0,0,128,63,50,0,4,0,6,0,0,0,146,0,0,0,0,0,128,63,50,0,4,0,6,0,0,0,147,0,0,0,0,0,128,63,59,0,4,0,114,0,0,0,148,0,0,0,1,0,0,0,54,0,5,0,2,0,0,0,4,0,0,0,0,0,0,0,3,0,0,0,248,0,2,0,5,0,0,0,59,0,4,0,20,0,0,0,78,0,0,0,7,0,0,0,59,0,4,0,80,0,0,0,81,0,0,0,7,0,0,0,59,0,4,0,93,0,0,0,94,0,0,0,7,0,0,0,59,0,4,0,20,0,0,0,111,0,0,0,7,0,0,0,59,0,4,0,11,0,0,0,118,0,0,0,7,0,0,0,59,0,4,0,20,0,0,0,123,0,0,0,7,0,0,0,59,0,4,0,11,0,0,0,126,0,0,0,7,0,0,0,59,0,4,0,11,0,0,0,130,0,0,0,7,0,0,0,59,0,4,0,20,0,0,0,141,0,0,0,7,0,0,0,62,0,3,0,78,0,0,0,79,0,0,0,62,0,3,0,81,0,0,0,82,0,0,0,249,0,2,0,83,0,0,0,248,0,2,0,83,0,0,0,246,0,4,0,85,0,0,0,86,0,0,0,0,0,0,0,249,0,2,0,87,0,0,0,248,0,2,0,87,0,0,0,61,0,4,0,68,0,0,0,88,0,0,0,81,0,0,0,176,0,5,0,90,0,0,0,91,0,0,0,88,0,0,0,89,0,0,0,250,0,4,0,91,0,0,0,84,0,0,0,85,0,0,0,248,0,2,0,84,0,0,0,61,0,4,0,68,0,0,0,102,0,0,0,81,0,0,0,65,0,6,0,103,0,0,0,104,0,0,0,99,0,0,0,101,0,0,0,102,0,0,0,61,0,4,0,95,0,0,0,105,0,0,0,104,0,0,0,81,0,5,0,19,0,0,0,106,0,0,0,105,0,0,0,0,0,0,0,65,0,5,0,20,0,0,0,107,0,0,0,94,0,0,0,101,0,0,0,62,0,3,0,107,0,0,0,106,0,0,0,81,0,5,0,19,0,0,0,108,0,0,0,105,0,0,0,1,0,0,0,65,0,5,0,20,0,0,0,110,0,0,0,94,0,0,0,109,0,0,0,62,0,3,0,110,0,0,0,108,0,0,0,65,0,5,0,20,0,0,0,112,0,0,0,94,0,0,0,101,0,0,0,61,0,4,0,19,0,0,0,113,0,0,0,112,0,0,0,61,0,4,0,19,0,0,0,116,0,0,0,115,0,0,0,131,0,5,0,19,0,0,0,117,0,0,0,113,0,0,0,116,0,0,0,62,0,3,0,111,0,0,0,117,0,0,0,61,0,4,0,19,0,0,0,119,0,0,0,111,0,0,0,61,0,4,0,19,0,0,0,120,0,0,0,111,0,0,0,148,0,5,0,6,0,0,0,121,0,0,0,119,0,0,0,120,0,0,0,12,0,6,0,6,0,0,0,122,0,0,0,1,0,0,0,31,0,0,0,121,0,0,0,62,0,3,0,118,0,0,0,122,0,0,0,65,0,5,0,20,0,0,0,124,0,0,0,94,0,0,0,109,0,0,0,61,0,4,0,19,0,0,0,125,0,0,0,124,0,0,0,61,0,4,0,6,0,0,0,127,0,0,0,118,0,0,0,62,0,3,0,126,0,0,0,127,0,0,0,57,0,5,0,6,0,0,0,128,0,0,0,17,0,0,0,126,0,0,0,142,0,5,0,19,0,0,0,129,0,0,0,125,0,0,0,128,0,0,0,61,0,4,0,6,0,0,0,131,0,0,0,118,0,0,0,62,0,3,0,130,0,0,0,131,0,0,0,57,0,5,0,6,0,0,0,132,0,0,0,14,0,0,0,130,0,0,0,142,0,5,0,19,0,0,0,133,0,0,0,129,0,0,0,132,0,0,0,62,0,3,0,123,0,0,0,133,0,0,0,61,0,4,0,19,0,0,0,134,0,0,0,123,0,0,0,61,0,4,0,19,0,0,0,135,0,0,0,78,0,0,0,129,0,5,0,19,0,0,0,136,0,0,0,135,0,0,0,134,0,0,0,62,0,3,0,78,0,0,0,136,0,0,0,249,0,2,0,86,0,0,0,248,0,2,0,86,0,0,0,61,0,4,0,68,0,0,0,137,0,0,0,81,0,0,0,128,0,5,0,68,0,0,0,138,0,0,0,137,0,0,0,109,0,0,0,62,0,3,0,81,0,0,0,138,0,0,0,249,0,2,0,83,0,0,0,248,0,2,0,85,0,0,0,61,0,4,0,19,0,0,0,142,0,0,0,78,0,0,0,62,0,3,0,141,0,0,0,142,0,0,0,57,0,5,0,7,0,0,0,143,0,0,0,23,0,0,0,141,0,0,0,62,0,3,0,140,0,0,0,143,0,0,0,253,0,1,0,56,0,1,0,54,0,5,0,7,0,0,0,9,0,0,0,0,0,0,0,8,0,0,0,248,0,2,0,10,0,0,0,61,0,4,0,26,0,0,0,29,0,0,0,28,0,0,0,61,0,4,0,30,0,0,0,33,0,0,0,32,0,0,0,87,0,5,0,7,0,0,0,34,0,0,0,29,0,0,0,33,0,0,0,254,0,2,0,34,0,0,0,56,0,1,0,54,0,5,0,6,0,0,0,14,0,0,0,0,0,0,0,12,0,0,0,55,0,3,0,11,0,0,0,13,0,0,0,248,0,2,0,15,0,0,0,61,0,4,0,6,0,0,0,38,0,0,0,13,0,0,0,136,0,5,0,6,0,0,0,40,0,0,0,38,0,0,0,39,0,0,0,12,0,7,0,6,0,0,0,42,0,0,0,1,0,0,0,26,0,0,0,40,0,0,0,41,0,0,0,131,0,5,0,6,0,0,0,43,0,0,0,37,0,0,0,42,0,0,0,12,0,7,0,6,0,0,0,45,0,0,0,1,0,0,0,40,0,0,0,43,0,0,0,44,0,0,0,12,0,7,0,6,0,0,0,47,0,0,0,1,0,0,0,26,0,0,0,45,0,0,0,46,0,0,0,254,0,2,0,47,0,0,0,56,0,1,0,54,0,5,0,6,0,0,0,17,0,0,0,0,0,0,0,12,0,0,0,55,0,3,0,11,0,0,0,16,0,0,0,248,0,2,0,18,0,0,0,61,0,4,0,6,0,0,0,51,0,0,0,16,0,0,0,12,0,7,0,6,0,0,0,52,0,0,0,1,0,0,0,40,0,0,0,51,0,0,0,37,0,0,0,136,0,5,0,6,0,0,0,53,0,0,0,50,0,0,0,52,0,0,0,12,0,7,0,6,0,0,0,54,0,0,0,1,0,0,0,26,0,0,0,53,0,0,0,46,0,0,0,254,0,2,0,54,0,0,0,56,0,1,0,54,0,5,0,7,0,0,0,23,0,0,0,0,0,0,0,21,0,0,0,55,0,3,0,20,0,0,0,22,0,0,0,248,0,2,0,24,0,0,0,59,0,4,0,57,0,0,0,58,0,0,0,7,0,0,0,57,0,4,0,7,0,0,0,59,0,0,0,9,0,0,0,62,0,3,0,58,0,0,0,59,0,0,0,61,0,4,0,7,0,0,0,60,0,0,0,58,0,0,0,79,0,8,0,19,0,0,0,61,0,0,0,60,0,0,0,60,0,0,0,0,0,0,0,1,0,0,0,2,0,0,0,61,0,4,0,19,0,0,0,62,0,0,0,22,0,0,0,133,0,5,0,19,0,0,0,63,0,0,0,61,0,0,0,62,0,0,0,81,0,5,0,6,0,0,0,64,0,0,0,63,0,0,0,0,0,0,0,81,0,5,0,6,0,0,0,65,0,0,0,63,0,0,0,1,0,0,0,81,0,5,0,6,0,0,0,66,0,0,0,63,0,0,0,2,0,0,0,80,0,6,0,19,0,0,0,67,0,0,0,64,0,0,0,65,0,0,0,66,0,0,0,65,0,5,0,11,0,0,0,70,0,0,0,58,0,0,0,69,0,0,0,61,0,4,0,6,0,0,0,71,0,0,0,70,0,0,0,81,0,5,0,6,0,0,0,72,0,0,0,67,0,0,0,0,0,0,0,81,0,5,0,6,0,0,0,73,0,0,0,67,0,0,0,1,0,0,0,81,0,5,0,6,0,0,0,74,0,0,0,67,0,0,0,2,0,0,0,80,0,7,0,7,0,0,0,75,0,0,0,72,0,0,0,73,0,0,0,74,0,0,0,71,0,0,0,254,0,2,0,75,0,0,0,56,0,1,0};
VkPipelineShaderStageCreateInfo FragmentUIColor;
unsigned char FragmentUIColorModule[] = { 3,2,35,7,0,0,1,0,7,0,8,0,16,0,0,0,0,0,0,0,17,0,2,0,1,0,0,0,11,0,6,0,1,0,0,0,71,76,83,76,46,115,116,100,46,52,53,48,0,0,0,0,14,0,3,0,0,0,0,0,1,0,0,0,15,0,8,0,4,0,0,0,4,0,0,0,109,97,105,110,0,0,0,0,9,0,0,0,11,0,0,0,15,0,0,0,16,0,3,0,4,0,0,0,7,0,0,0,3,0,3,0,2,0,0,0,204,1,0,0,4,0,9,0,71,76,95,65,82,66,95,115,101,112,97,114,97,116,101,95,115,104,97,100,101,114,95,111,98,106,101,99,116,115,0,0,5,0,4,0,4,0,0,0,109,97,105,110,0,0,0,0,5,0,5,0,9,0,0,0,99,111,108,111,114,79,117,116,0,0,0,0,5,0,4,0,11,0,0,0,99,111,108,111,114,0,0,0,5,0,3,0,15,0,0,0,117,118,0,0,71,0,4,0,9,0,0,0,30,0,0,0,0,0,0,0,71,0,4,0,11,0,0,0,30,0,0,0,0,0,0,0,71,0,4,0,15,0,0,0,30,0,0,0,1,0,0,0,19,0,2,0,2,0,0,0,33,0,3,0,3,0,0,0,2,0,0,0,22,0,3,0,6,0,0,0,32,0,0,0,23,0,4,0,7,0,0,0,6,0,0,0,4,0,0,0,32,0,4,0,8,0,0,0,3,0,0,0,7,0,0,0,59,0,4,0,8,0,0,0,9,0,0,0,3,0,0,0,32,0,4,0,10,0,0,0,1,0,0,0,7,0,0,0,59,0,4,0,10,0,0,0,11,0,0,0,1,0,0,0,23,0,4,0,13,0,0,0,6,0,0,0,2,0,0,0,32,0,4,0,14,0,0,0,1,0,0,0,13,0,0,0,59,0,4,0,14,0,0,0,15,0,0,0,1,0,0,0,54,0,5,0,2,0,0,0,4,0,0,0,0,0,0,0,3,0,0,0,248,0,2,0,5,0,0,0,61,0,4,0,7,0,0,0,12,0,0,0,11,0,0,0,62,0,3,0,9,0,0,0,12,0,0,0,253,0,1,0,56,0,1,0};
VkPipelineShaderStageCreateInfo FragmentUITextured;
unsigned char FragmentUITexturedModule[] = { 3,2,35,7,0,0,1,0,7,0,8,0,24,0,0,0,0,0,0,0,17,0,2,0,1,0,0,0,11,0,6,0,1,0,0,0,71,76,83,76,46,115,116,100,46,52,53,48,0,0,0,0,14,0,3,0,0,0,0,0,1,0,0,0,15,0,8,0,4,0,0,0,4,0,0,0,109,97,105,110,0,0,0,0,9,0,0,0,17,0,0,0,21,0,0,0,16,0,3,0,4,0,0,0,7,0,0,0,3,0,3,0,2,0,0,0,204,1,0,0,4,0,9,0,71,76,95,65,82,66,95,115,101,112,97,114,97,116,101,95,115,104,97,100,101,114,95,111,98,106,101,99,116,115,0,0,5,0,4,0,4,0,0,0,109,97,105,110,0,0,0,0,5,0,5,0,9,0,0,0,99,111,108,111,114,79,117,116,0,0,0,0,5,0,6,0,13,0,0,0,105,109,97,103,101,95,115,97,109,112,108,101,114,0,0,0,5,0,3,0,17,0,0,0,117,118,0,0,5,0,4,0,21,0,0,0,99,111,108,111,114,0,0,0,71,0,4,0,9,0,0,0,30,0,0,0,0,0,0,0,71,0,4,0,13,0,0,0,34,0,0,0,0,0,0,0,71,0,4,0,13,0,0,0,33,0,0,0,0,0,0,0,71,0,4,0,17,0,0,0,30,0,0,0,1,0,0,0,71,0,4,0,21,0,0,0,30,0,0,0,0,0,0,0,19,0,2,0,2,0,0,0,33,0,3,0,3,0,0,0,2,0,0,0,22,0,3,0,6,0,0,0,32,0,0,0,23,0,4,0,7,0,0,0,6,0,0,0,4,0,0,0,32,0,4,0,8,0,0,0,3,0,0,0,7,0,0,0,59,0,4,0,8,0,0,0,9,0,0,0,3,0,0,0,25,0,9,0,10,0,0,0,6,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,27,0,3,0,11,0,0,0,10,0,0,0,32,0,4,0,12,0,0,0,0,0,0,0,11,0,0,0,59,0,4,0,12,0,0,0,13,0,0,0,0,0,0,0,23,0,4,0,15,0,0,0,6,0,0,0,2,0,0,0,32,0,4,0,16,0,0,0,1,0,0,0,15,0,0,0,59,0,4,0,16,0,0,0,17,0,0,0,1,0,0,0,32,0,4,0,20,0,0,0,1,0,0,0,7,0,0,0,59,0,4,0,20,0,0,0,21,0,0,0,1,0,0,0,54,0,5,0,2,0,0,0,4,0,0,0,0,0,0,0,3,0,0,0,248,0,2,0,5,0,0,0,61,0,4,0,11,0,0,0,14,0,0,0,13,0,0,0,61,0,4,0,15,0,0,0,18,0,0,0,17,0,0,0,87,0,5,0,7,0,0,0,19,0,0,0,14,0,0,0,18,0,0,0,61,0,4,0,7,0,0,0,22,0,0,0,21,0,0,0,133,0,5,0,7,0,0,0,23,0,0,0,19,0,0,0,22,0,0,0,62,0,3,0,9,0,0,0,23,0,0,0,253,0,1,0,56,0,1,0};
VkPipelineShaderStageCreateInfo VertexColorOnly;
unsigned char VertexColorOnlyModule[] = { 3,2,35,7,0,0,1,0,7,0,8,0,62,0,0,0,0,0,0,0,17,0,2,0,1,0,0,0,11,0,6,0,1,0,0,0,71,76,83,76,46,115,116,100,46,52,53,48,0,0,0,0,14,0,3,0,0,0,0,0,1,0,0,0,15,0,10,0,0,0,0,0,4,0,0,0,109,97,105,110,0,0,0,0,10,0,0,0,22,0,0,0,49,0,0,0,53,0,0,0,61,0,0,0,3,0,3,0,2,0,0,0,204,1,0,0,4,0,9,0,71,76,95,65,82,66,95,115,101,112,97,114,97,116,101,95,115,104,97,100,101,114,95,111,98,106,101,99,116,115,0,0,5,0,4,0,4,0,0,0,109,97,105,110,0,0,0,0,5,0,6,0,8,0,0,0,103,108,95,80,101,114,86,101,114,116,101,120,0,0,0,0,6,0,6,0,8,0,0,0,0,0,0,0,103,108,95,80,111,115,105,116,105,111,110,0,5,0,3,0,10,0,0,0,0,0,0,0,5,0,6,0,14,0,0,0,77,65,84,82,73,88,95,66,76,79,67,75,0,0,0,0,6,0,5,0,14,0,0,0,0,0,0,0,109,97,116,114,105,120,0,0,5,0,6,0,16,0,0,0,109,97,116,114,105,120,95,98,108,111,99,107,0,0,0,0,5,0,4,0,22,0,0,0,112,111,115,73,110,0,0,0,5,0,5,0,33,0,0,0,116,111,95,108,105,103,104,116,0,0,0,0,5,0,5,0,34,0,0,0,76,73,71,72,84,95,66,76,79,67,75,0,6,0,5,0,34,0,0,0,0,0,0,0,108,105,103,104,116,0,0,0,5,0,5,0,36,0,0,0,108,105,103,104,116,95,98,108,111,99,107,0,5,0,4,0,48,0,0,0,118,110,111,114,109,97,108,0,5,0,5,0,49,0,0,0,110,111,114,109,97,108,73,110,0,0,0,0,5,0,6,0,53,0,0,0,108,105,103,104,116,95,97,109,112,108,105,102,105,101,114,0,5,0,3,0,61,0,0,0,117,118,0,0,72,0,5,0,8,0,0,0,0,0,0,0,11,0,0,0,0,0,0,0,71,0,3,0,8,0,0,0,2,0,0,0,72,0,4,0,14,0,0,0,0,0,0,0,5,0,0,0,72,0,5,0,14,0,0,0,0,0,0,0,35,0,0,0,0,0,0,0,72,0,5,0,14,0,0,0,0,0,0,0,7,0,0,0,16,0,0,0,71,0,3,0,14,0,0,0,2,0,0,0,71,0,4,0,16,0,0,0,34,0,0,0,0,0,0,0,71,0,4,0,16,0,0,0,33,0,0,0,0,0,0,0,71,0,4,0,22,0,0,0,30,0,0,0,0,0,0,0,72,0,5,0,34,0,0,0,0,0,0,0,35,0,0,0,0,0,0,0,71,0,3,0,34,0,0,0,2,0,0,0,71,0,4,0,36,0,0,0,34,0,0,0,0,0,0,0,71,0,4,0,36,0,0,0,33,0,0,0,1,0,0,0,71,0,4,0,49,0,0,0,30,0,0,0,2,0,0,0,71,0,4,0,53,0,0,0,30,0,0,0,0,0,0,0,71,0,4,0,61,0,0,0,30,0,0,0,1,0,0,0,19,0,2,0,2,0,0,0,33,0,3,0,3,0,0,0,2,0,0,0,22,0,3,0,6,0,0,0,32,0,0,0,23,0,4,0,7,0,0,0,6,0,0,0,4,0,0,0,30,0,3,0,8,0,0,0,7,0,0,0,32,0,4,0,9,0,0,0,3,0,0,0,8,0,0,0,59,0,4,0,9,0,0,0,10,0,0,0,3,0,0,0,21,0,4,0,11,0,0,0,32,0,0,0,1,0,0,0,43,0,4,0,11,0,0,0,12,0,0,0,0,0,0,0,24,0,4,0,13,0,0,0,7,0,0,0,4,0,0,0,30,0,3,0,14,0,0,0,13,0,0,0,32,0,4,0,15,0,0,0,2,0,0,0,14,0,0,0,59,0,4,0,15,0,0,0,16,0,0,0,2,0,0,0,32,0,4,0,17,0,0,0,2,0,0,0,13,0,0,0,23,0,4,0,20,0,0,0,6,0,0,0,3,0,0,0,32,0,4,0,21,0,0,0,1,0,0,0,20,0,0,0,59,0,4,0,21,0,0,0,22,0,0,0,1,0,0,0,43,0,4,0,6,0,0,0,24,0,0,0,0,0,128,63,32,0,4,0,30,0,0,0,3,0,0,0,7,0,0,0,32,0,4,0,32,0,0,0,7,0,0,0,20,0,0,0,30,0,3,0,34,0,0,0,20,0,0,0,32,0,4,0,35,0,0,0,2,0,0,0,34,0,0,0,59,0,4,0,35,0,0,0,36,0,0,0,2,0,0,0,32,0,4,0,37,0,0,0,2,0,0,0,20,0,0,0,59,0,4,0,21,0,0,0,49,0,0,0,1,0,0,0,32,0,4,0,52,0,0,0,3,0,0,0,6,0,0,0,59,0,4,0,52,0,0,0,53,0,0,0,3,0,0,0,43,0,4,0,6,0,0,0,57,0,0,0,0,0,0,0,23,0,4,0,59,0,0,0,6,0,0,0,2,0,0,0,32,0,4,0,60,0,0,0,1,0,0,0,59,0,0,0,59,0,4,0,60,0,0,0,61,0,0,0,1,0,0,0,54,0,5,0,2,0,0,0,4,0,0,0,0,0,0,0,3,0,0,0,248,0,2,0,5,0,0,0,59,0,4,0,32,0,0,0,33,0,0,0,7,0,0,0,59,0,4,0,32,0,0,0,48,0,0,0,7,0,0,0,65,0,5,0,17,0,0,0,18,0,0,0,16,0,0,0,12,0,0,0,61,0,4,0,13,0,0,0,19,0,0,0,18,0,0,0,61,0,4,0,20,0,0,0,23,0,0,0,22,0,0,0,81,0,5,0,6,0,0,0,25,0,0,0,23,0,0,0,0,0,0,0,81,0,5,0,6,0,0,0,26,0,0,0,23,0,0,0,1,0,0,0,81,0,5,0,6,0,0,0,27,0,0,0,23,0,0,0,2,0,0,0,80,0,7,0,7,0,0,0,28,0,0,0,25,0,0,0,26,0,0,0,27,0,0,0,24,0,0,0,145,0,5,0,7,0,0,0,29,0,0,0,19,0,0,0,28,0,0,0,65,0,5,0,30,0,0,0,31,0,0,0,10,0,0,0,12,0,0,0,62,0,3,0,31,0,0,0,29,0,0,0,65,0,5,0,37,0,0,0,38,0,0,0,36,0,0,0,12,0,0,0,61,0,4,0,20,0,0,0,39,0,0,0,38,0,0,0,65,0,5,0,30,0,0,0,40,0,0,0,10,0,0,0,12,0,0,0,61,0,4,0,7,0,0,0,41,0,0,0,40,0,0,0,81,0,5,0,6,0,0,0,42,0,0,0,41,0,0,0,0,0,0,0,81,0,5,0,6,0,0,0,43,0,0,0,41,0,0,0,1,0,0,0,81,0,5,0,6,0,0,0,44,0,0,0,41,0,0,0,2,0,0,0,80,0,6,0,20,0,0,0,45,0,0,0,42,0,0,0,43,0,0,0,44,0,0,0,131,0,5,0,20,0,0,0,46,0,0,0,39,0,0,0,45,0,0,0,12,0,6,0,20,0,0,0,47,0,0,0,1,0,0,0,69,0,0,0,46,0,0,0,62,0,3,0,33,0,0,0,47,0,0,0,61,0,4,0,20,0,0,0,50,0,0,0,49,0,0,0,12,0,6,0,20,0,0,0,51,0,0,0,1,0,0,0,69,0,0,0,50,0,0,0,62,0,3,0,48,0,0,0,51,0,0,0,61,0,4,0,20,0,0,0,54,0,0,0,33,0,0,0,61,0,4,0,20,0,0,0,55,0,0,0,48,0,0,0,148,0,5,0,6,0,0,0,56,0,0,0,54,0,0,0,55,0,0,0,12,0,8,0,6,0,0,0,58,0,0,0,1,0,0,0,43,0,0,0,56,0,0,0,57,0,0,0,24,0,0,0,62,0,3,0,53,0,0,0,58,0,0,0,253,0,1,0,56,0,1,0};
VkPipelineShaderStageCreateInfo VertexTextured;
unsigned char VertexTexturedModule[] = { 3,2,35,7,0,0,1,0,7,0,8,0,44,0,0,0,0,0,0,0,17,0,2,0,1,0,0,0,11,0,6,0,1,0,0,0,71,76,83,76,46,115,116,100,46,52,53,48,0,0,0,0,14,0,3,0,0,0,0,0,1,0,0,0,15,0,12,0,0,0,0,0,4,0,0,0,109,97,105,110,0,0,0,0,10,0,0,0,22,0,0,0,34,0,0,0,36,0,0,0,39,0,0,0,40,0,0,0,42,0,0,0,3,0,3,0,2,0,0,0,204,1,0,0,4,0,9,0,71,76,95,65,82,66,95,115,101,112,97,114,97,116,101,95,115,104,97,100,101,114,95,111,98,106,101,99,116,115,0,0,5,0,4,0,4,0,0,0,109,97,105,110,0,0,0,0,5,0,6,0,8,0,0,0,103,108,95,80,101,114,86,101,114,116,101,120,0,0,0,0,6,0,6,0,8,0,0,0,0,0,0,0,103,108,95,80,111,115,105,116,105,111,110,0,5,0,3,0,10,0,0,0,0,0,0,0,5,0,6,0,14,0,0,0,77,65,84,82,73,88,95,66,76,79,67,75,0,0,0,0,6,0,5,0,14,0,0,0,0,0,0,0,109,97,116,114,105,120,0,0,5,0,6,0,16,0,0,0,109,97,116,114,105,120,95,98,108,111,99,107,0,0,0,0,5,0,4,0,22,0,0,0,112,111,115,73,110,0,0,0,5,0,4,0,34,0,0,0,117,118,79,117,116,0,0,0,5,0,3,0,36,0,0,0,117,118,0,0,5,0,5,0,39,0,0,0,110,111,114,109,97,108,79,117,116,0,0,0,5,0,5,0,40,0,0,0,110,111,114,109,97,108,73,110,0,0,0,0,5,0,3,0,42,0,0,0,112,111,115,0,72,0,5,0,8,0,0,0,0,0,0,0,11,0,0,0,0,0,0,0,71,0,3,0,8,0,0,0,2,0,0,0,72,0,4,0,14,0,0,0,0,0,0,0,5,0,0,0,72,0,5,0,14,0,0,0,0,0,0,0,35,0,0,0,0,0,0,0,72,0,5,0,14,0,0,0,0,0,0,0,7,0,0,0,16,0,0,0,71,0,3,0,14,0,0,0,2,0,0,0,71,0,4,0,16,0,0,0,34,0,0,0,0,0,0,0,71,0,4,0,16,0,0,0,33,0,0,0,0,0,0,0,71,0,4,0,22,0,0,0,30,0,0,0,0,0,0,0,71,0,4,0,34,0,0,0,30,0,0,0,1,0,0,0,71,0,4,0,36,0,0,0,30,0,0,0,1,0,0,0,71,0,4,0,39,0,0,0,30,0,0,0,0,0,0,0,71,0,4,0,40,0,0,0,30,0,0,0,2,0,0,0,71,0,4,0,42,0,0,0,30,0,0,0,2,0,0,0,19,0,2,0,2,0,0,0,33,0,3,0,3,0,0,0,2,0,0,0,22,0,3,0,6,0,0,0,32,0,0,0,23,0,4,0,7,0,0,0,6,0,0,0,4,0,0,0,30,0,3,0,8,0,0,0,7,0,0,0,32,0,4,0,9,0,0,0,3,0,0,0,8,0,0,0,59,0,4,0,9,0,0,0,10,0,0,0,3,0,0,0,21,0,4,0,11,0,0,0,32,0,0,0,1,0,0,0,43,0,4,0,11,0,0,0,12,0,0,0,0,0,0,0,24,0,4,0,13,0,0,0,7,0,0,0,4,0,0,0,30,0,3,0,14,0,0,0,13,0,0,0,32,0,4,0,15,0,0,0,2,0,0,0,14,0,0,0,59,0,4,0,15,0,0,0,16,0,0,0,2,0,0,0,32,0,4,0,17,0,0,0,2,0,0,0,13,0,0,0,23,0,4,0,20,0,0,0,6,0,0,0,3,0,0,0,32,0,4,0,21,0,0,0,1,0,0,0,20,0,0,0,59,0,4,0,21,0,0,0,22,0,0,0,1,0,0,0,43,0,4,0,6,0,0,0,24,0,0,0,0,0,128,63,32,0,4,0,30,0,0,0,3,0,0,0,7,0,0,0,23,0,4,0,32,0,0,0,6,0,0,0,2,0,0,0,32,0,4,0,33,0,0,0,3,0,0,0,32,0,0,0,59,0,4,0,33,0,0,0,34,0,0,0,3,0,0,0,32,0,4,0,35,0,0,0,1,0,0,0,32,0,0,0,59,0,4,0,35,0,0,0,36,0,0,0,1,0,0,0,32,0,4,0,38,0,0,0,3,0,0,0,20,0,0,0,59,0,4,0,38,0,0,0,39,0,0,0,3,0,0,0,59,0,4,0,21,0,0,0,40,0,0,0,1,0,0,0,59,0,4,0,38,0,0,0,42,0,0,0,3,0,0,0,54,0,5,0,2,0,0,0,4,0,0,0,0,0,0,0,3,0,0,0,248,0,2,0,5,0,0,0,65,0,5,0,17,0,0,0,18,0,0,0,16,0,0,0,12,0,0,0,61,0,4,0,13,0,0,0,19,0,0,0,18,0,0,0,61,0,4,0,20,0,0,0,23,0,0,0,22,0,0,0,81,0,5,0,6,0,0,0,25,0,0,0,23,0,0,0,0,0,0,0,81,0,5,0,6,0,0,0,26,0,0,0,23,0,0,0,1,0,0,0,81,0,5,0,6,0,0,0,27,0,0,0,23,0,0,0,2,0,0,0,80,0,7,0,7,0,0,0,28,0,0,0,25,0,0,0,26,0,0,0,27,0,0,0,24,0,0,0,145,0,5,0,7,0,0,0,29,0,0,0,19,0,0,0,28,0,0,0,65,0,5,0,30,0,0,0,31,0,0,0,10,0,0,0,12,0,0,0,62,0,3,0,31,0,0,0,29,0,0,0,61,0,4,0,32,0,0,0,37,0,0,0,36,0,0,0,62,0,3,0,34,0,0,0,37,0,0,0,61,0,4,0,20,0,0,0,41,0,0,0,40,0,0,0,62,0,3,0,39,0,0,0,41,0,0,0,61,0,4,0,20,0,0,0,43,0,0,0,22,0,0,0,62,0,3,0,42,0,0,0,43,0,0,0,253,0,1,0,56,0,1,0};
VkPipelineShaderStageCreateInfo VertexTexturedMovable;
unsigned char VertexTexturedMovableModule[] = { 3,2,35,7,0,0,1,0,7,0,8,0,44,0,0,0,0,0,0,0,17,0,2,0,1,0,0,0,11,0,6,0,1,0,0,0,71,76,83,76,46,115,116,100,46,52,53,48,0,0,0,0,14,0,3,0,0,0,0,0,1,0,0,0,15,0,12,0,0,0,0,0,4,0,0,0,109,97,105,110,0,0,0,0,10,0,0,0,22,0,0,0,34,0,0,0,36,0,0,0,39,0,0,0,40,0,0,0,42,0,0,0,3,0,3,0,2,0,0,0,204,1,0,0,4,0,9,0,71,76,95,65,82,66,95,115,101,112,97,114,97,116,101,95,115,104,97,100,101,114,95,111,98,106,101,99,116,115,0,0,5,0,4,0,4,0,0,0,109,97,105,110,0,0,0,0,5,0,6,0,8,0,0,0,103,108,95,80,101,114,86,101,114,116,101,120,0,0,0,0,6,0,6,0,8,0,0,0,0,0,0,0,103,108,95,80,111,115,105,116,105,111,110,0,5,0,3,0,10,0,0,0,0,0,0,0,5,0,6,0,14,0,0,0,77,65,84,82,73,88,95,66,76,79,67,75,0,0,0,0,6,0,5,0,14,0,0,0,0,0,0,0,109,97,116,114,105,120,0,0,5,0,6,0,16,0,0,0,109,97,116,114,105,120,95,98,108,111,99,107,0,0,0,0,5,0,4,0,22,0,0,0,112,111,115,73,110,0,0,0,5,0,4,0,34,0,0,0,117,118,79,117,116,0,0,0,5,0,3,0,36,0,0,0,117,118,0,0,5,0,5,0,39,0,0,0,110,111,114,109,97,108,79,117,116,0,0,0,5,0,5,0,40,0,0,0,110,111,114,109,97,108,73,110,0,0,0,0,5,0,3,0,42,0,0,0,112,111,115,0,72,0,5,0,8,0,0,0,0,0,0,0,11,0,0,0,0,0,0,0,71,0,3,0,8,0,0,0,2,0,0,0,72,0,4,0,14,0,0,0,0,0,0,0,5,0,0,0,72,0,5,0,14,0,0,0,0,0,0,0,35,0,0,0,0,0,0,0,72,0,5,0,14,0,0,0,0,0,0,0,7,0,0,0,16,0,0,0,71,0,3,0,14,0,0,0,2,0,0,0,71,0,4,0,16,0,0,0,34,0,0,0,0,0,0,0,71,0,4,0,16,0,0,0,33,0,0,0,0,0,0,0,71,0,4,0,22,0,0,0,30,0,0,0,0,0,0,0,71,0,4,0,34,0,0,0,30,0,0,0,1,0,0,0,71,0,4,0,36,0,0,0,30,0,0,0,1,0,0,0,71,0,4,0,39,0,0,0,30,0,0,0,0,0,0,0,71,0,4,0,40,0,0,0,30,0,0,0,2,0,0,0,71,0,4,0,42,0,0,0,30,0,0,0,2,0,0,0,19,0,2,0,2,0,0,0,33,0,3,0,3,0,0,0,2,0,0,0,22,0,3,0,6,0,0,0,32,0,0,0,23,0,4,0,7,0,0,0,6,0,0,0,4,0,0,0,30,0,3,0,8,0,0,0,7,0,0,0,32,0,4,0,9,0,0,0,3,0,0,0,8,0,0,0,59,0,4,0,9,0,0,0,10,0,0,0,3,0,0,0,21,0,4,0,11,0,0,0,32,0,0,0,1,0,0,0,43,0,4,0,11,0,0,0,12,0,0,0,0,0,0,0,24,0,4,0,13,0,0,0,7,0,0,0,4,0,0,0,30,0,3,0,14,0,0,0,13,0,0,0,32,0,4,0,15,0,0,0,2,0,0,0,14,0,0,0,59,0,4,0,15,0,0,0,16,0,0,0,2,0,0,0,32,0,4,0,17,0,0,0,2,0,0,0,13,0,0,0,23,0,4,0,20,0,0,0,6,0,0,0,3,0,0,0,32,0,4,0,21,0,0,0,1,0,0,0,20,0,0,0,59,0,4,0,21,0,0,0,22,0,0,0,1,0,0,0,43,0,4,0,6,0,0,0,24,0,0,0,0,0,128,63,32,0,4,0,30,0,0,0,3,0,0,0,7,0,0,0,23,0,4,0,32,0,0,0,6,0,0,0,2,0,0,0,32,0,4,0,33,0,0,0,3,0,0,0,32,0,0,0,59,0,4,0,33,0,0,0,34,0,0,0,3,0,0,0,32,0,4,0,35,0,0,0,1,0,0,0,32,0,0,0,59,0,4,0,35,0,0,0,36,0,0,0,1,0,0,0,32,0,4,0,38,0,0,0,3,0,0,0,20,0,0,0,59,0,4,0,38,0,0,0,39,0,0,0,3,0,0,0,59,0,4,0,21,0,0,0,40,0,0,0,1,0,0,0,59,0,4,0,38,0,0,0,42,0,0,0,3,0,0,0,54,0,5,0,2,0,0,0,4,0,0,0,0,0,0,0,3,0,0,0,248,0,2,0,5,0,0,0,65,0,5,0,17,0,0,0,18,0,0,0,16,0,0,0,12,0,0,0,61,0,4,0,13,0,0,0,19,0,0,0,18,0,0,0,61,0,4,0,20,0,0,0,23,0,0,0,22,0,0,0,81,0,5,0,6,0,0,0,25,0,0,0,23,0,0,0,0,0,0,0,81,0,5,0,6,0,0,0,26,0,0,0,23,0,0,0,1,0,0,0,81,0,5,0,6,0,0,0,27,0,0,0,23,0,0,0,2,0,0,0,80,0,7,0,7,0,0,0,28,0,0,0,25,0,0,0,26,0,0,0,27,0,0,0,24,0,0,0,145,0,5,0,7,0,0,0,29,0,0,0,19,0,0,0,28,0,0,0,65,0,5,0,30,0,0,0,31,0,0,0,10,0,0,0,12,0,0,0,62,0,3,0,31,0,0,0,29,0,0,0,61,0,4,0,32,0,0,0,37,0,0,0,36,0,0,0,62,0,3,0,34,0,0,0,37,0,0,0,61,0,4,0,20,0,0,0,41,0,0,0,40,0,0,0,62,0,3,0,39,0,0,0,41,0,0,0,61,0,4,0,20,0,0,0,43,0,0,0,22,0,0,0,62,0,3,0,42,0,0,0,43,0,0,0,253,0,1,0,56,0,1,0};
VkPipelineShaderStageCreateInfo VertexUI;
unsigned char VertexUIModule[] = { 3,2,35,7,0,0,1,0,7,0,8,0,31,0,0,0,0,0,0,0,17,0,2,0,1,0,0,0,11,0,6,0,1,0,0,0,71,76,83,76,46,115,116,100,46,52,53,48,0,0,0,0,14,0,3,0,0,0,0,0,1,0,0,0,15,0,11,0,0,0,0,0,4,0,0,0,109,97,105,110,0,0,0,0,10,0,0,0,15,0,0,0,23,0,0,0,25,0,0,0,28,0,0,0,29,0,0,0,3,0,3,0,2,0,0,0,204,1,0,0,4,0,9,0,71,76,95,65,82,66,95,115,101,112,97,114,97,116,101,95,115,104,97,100,101,114,95,111,98,106,101,99,116,115,0,0,5,0,4,0,4,0,0,0,109,97,105,110,0,0,0,0,5,0,6,0,8,0,0,0,103,108,95,80,101,114,86,101,114,116,101,120,0,0,0,0,6,0,6,0,8,0,0,0,0,0,0,0,103,108,95,80,111,115,105,116,105,111,110,0,5,0,3,0,10,0,0,0,0,0,0,0,5,0,4,0,15,0,0,0,112,111,115,73,110,0,0,0,5,0,5,0,23,0,0,0,99,111,108,111,114,79,117,116,0,0,0,0,5,0,4,0,25,0,0,0,99,111,108,111,114,0,0,0,5,0,4,0,28,0,0,0,117,118,79,117,116,0,0,0,5,0,3,0,29,0,0,0,117,118,0,0,72,0,5,0,8,0,0,0,0,0,0,0,11,0,0,0,0,0,0,0,71,0,3,0,8,0,0,0,2,0,0,0,71,0,4,0,15,0,0,0,30,0,0,0,0,0,0,0,71,0,4,0,23,0,0,0,30,0,0,0,0,0,0,0,71,0,4,0,25,0,0,0,30,0,0,0,2,0,0,0,71,0,4,0,28,0,0,0,30,0,0,0,1,0,0,0,71,0,4,0,29,0,0,0,30,0,0,0,1,0,0,0,19,0,2,0,2,0,0,0,33,0,3,0,3,0,0,0,2,0,0,0,22,0,3,0,6,0,0,0,32,0,0,0,23,0,4,0,7,0,0,0,6,0,0,0,4,0,0,0,30,0,3,0,8,0,0,0,7,0,0,0,32,0,4,0,9,0,0,0,3,0,0,0,8,0,0,0,59,0,4,0,9,0,0,0,10,0,0,0,3,0,0,0,21,0,4,0,11,0,0,0,32,0,0,0,1,0,0,0,43,0,4,0,11,0,0,0,12,0,0,0,0,0,0,0,23,0,4,0,13,0,0,0,6,0,0,0,2,0,0,0,32,0,4,0,14,0,0,0,1,0,0,0,13,0,0,0,59,0,4,0,14,0,0,0,15,0,0,0,1,0,0,0,43,0,4,0,6,0,0,0,17,0,0,0,0,0,128,63,32,0,4,0,21,0,0,0,3,0,0,0,7,0,0,0,59,0,4,0,21,0,0,0,23,0,0,0,3,0,0,0,32,0,4,0,24,0,0,0,1,0,0,0,7,0,0,0,59,0,4,0,24,0,0,0,25,0,0,0,1,0,0,0,32,0,4,0,27,0,0,0,3,0,0,0,13,0,0,0,59,0,4,0,27,0,0,0,28,0,0,0,3,0,0,0,59,0,4,0,14,0,0,0,29,0,0,0,1,0,0,0,54,0,5,0,2,0,0,0,4,0,0,0,0,0,0,0,3,0,0,0,248,0,2,0,5,0,0,0,61,0,4,0,13,0,0,0,16,0,0,0,15,0,0,0,81,0,5,0,6,0,0,0,18,0,0,0,16,0,0,0,0,0,0,0,81,0,5,0,6,0,0,0,19,0,0,0,16,0,0,0,1,0,0,0,80,0,7,0,7,0,0,0,20,0,0,0,18,0,0,0,19,0,0,0,17,0,0,0,17,0,0,0,65,0,5,0,21,0,0,0,22,0,0,0,10,0,0,0,12,0,0,0,62,0,3,0,22,0,0,0,20,0,0,0,61,0,4,0,7,0,0,0,26,0,0,0,25,0,0,0,62,0,3,0,23,0,0,0,26,0,0,0,61,0,4,0,13,0,0,0,30,0,0,0,29,0,0,0,62,0,3,0,28,0,0,0,30,0,0,0,253,0,1,0,56,0,1,0};

void initShader() {
FragmentColorOnly = createShader(FragmentColorOnlyModule, VK_SHADER_STAGE_FRAGMENT_BIT, 744);
FragmentTextured = createShader(FragmentTexturedModule, VK_SHADER_STAGE_FRAGMENT_BIT, 3756);
FragmentUIColor = createShader(FragmentUIColorModule, VK_SHADER_STAGE_FRAGMENT_BIT, 492);
FragmentUITextured = createShader(FragmentUITexturedModule, VK_SHADER_STAGE_FRAGMENT_BIT, 700);
VertexColorOnly = createShader(VertexColorOnlyModule, VK_SHADER_STAGE_VERTEX_BIT, 1812);
VertexTextured = createShader(VertexTexturedModule, VK_SHADER_STAGE_VERTEX_BIT, 1364);
VertexTexturedMovable = createShader(VertexTexturedMovableModule, VK_SHADER_STAGE_VERTEX_BIT, 1364);
VertexUI = createShader(VertexUIModule, VK_SHADER_STAGE_VERTEX_BIT, 932);
}
