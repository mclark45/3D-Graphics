#ifndef VECTOR_H
#define VECTOR_H

/// <summary>
/// 2D Vector
/// </summary>
typedef struct {
	float x;
	float y;
} vec2_t;

/// <summary>
/// 3D Vector
/// </summary>
typedef struct {
	float x;
	float y;
	float z;
} vec3_t;

/// <summary>
/// 4D Vector
/// </summary>
typedef struct {
	float x;
	float y;
	float z;
	float w;
} vec4_t;

/////////////////////////////////////////////
/////   Vector 2D Functions   ///////////////
/////////////////////////////////////////////

float vec2_length(vec2_t v);
vec2_t vec2_new(float x, float y);
vec2_t vec2_add(vec2_t a, vec2_t b);
vec2_t vec2_sub(vec2_t a, vec2_t b);
vec2_t vec2_mul(vec2_t v, float factor);
vec2_t vec2_div(vec2_t v, float factor);
float vec2_dot(vec2_t a, vec2_t b);
void vec2_normalize(vec2_t* v);


/////////////////////////////////////////////
/////   Vector 3D Functions   ///////////////
/////////////////////////////////////////////

float vec3_length(vec3_t v);
vec3_t vec3_new(float x, float y, float z);
vec3_t vec3_clone(vec3_t* v);
vec3_t vec3_add(vec3_t a, vec3_t b);
vec3_t vec3_sub(vec3_t a, vec3_t b);
vec3_t vec3_mul(vec3_t v, float factor);
vec3_t vec3_div(vec3_t v, float factor);
vec3_t vec3_cross(vec3_t a, vec3_t b);
float vec3_dot(vec3_t a, vec3_t b);
void vec3_normalize(vec3_t* v);

/// <summary>
/// Function to rotation 3d vector
/// around the x axis
/// </summary>
/// <param name="v"> vec3_t</param>
/// <param name="angle"> float</param>
/// <returns>rotated vector</returns>
vec3_t vec3_rotate_x(vec3_t v, float angle);

/// <summary>
/// Function to rotation 3d vector
/// around the y axis
/// </summary>
/// <param name="v"> vec3_t</param>
/// <param name="angle"> float</param>
/// <returns>rotated vector</returns>
vec3_t vec3_rotate_y(vec3_t v, float angle);

/// <summary>
/// Function to rotation 3d vector
/// around the z axis
/// </summary>
/// <param name="v"> vec3_t</param>
/// <param name="angle"> float</param>
/// <returns>rotated vector</returns>
vec3_t vec3_rotate_z(vec3_t v, float angle);

/////////////////////////////////////////////
/////   Vector 4D Functions   ///////////////
/////////////////////////////////////////////

/// <summary>
/// Create a 4D vector from a 3D vector
/// </summary>
/// <param name="v">vec3_t</param>
/// <returns>vec4_t</returns>
vec4_t vec4_from_vec3(vec3_t v);

/// <summary>
/// Create a 3D vector from a 4D vector
/// </summary>
/// <param name="v">vec4_t</param>
/// <returns>vec3_t</returns>
vec3_t vec3_from_vec4(vec4_t v);

/// <summary>
/// Create a 2D vector from a 4D vector
/// </summary>
/// <param name="v"></param>
/// <returns>vec2_t</returns>
vec2_t vec2_from_vec4(vec4_t v);

#endif

