#include <cstdio> 
#include <cmath>
#include <tuple>
using namespace std;

// handeld to object using tuples
int main()
{

  tuple <float, float> coord;
  float coord_x;
  float coord_y;
  tuple <float,float>  curr_pos;
  float curr_pos_x;
  float curr_pos_y;
  

  coord = make_tuple(coord_x, coord_y);
  curr_pos = make_tuple(curr_pos_x, curr_pos_y);

  float res_x = get<0>(coord) - get<0>(curr_pos);
  float res_y = get<1>(coord) - get<1>(curr_pos);

  float dist = sqrt(pow(res_x,2)+pow(res_y,2));

}
//to find distance from handheld using array

float array_antena(/*arguments for sagar*/)
{
	float coord[2];
	float curr_pos[2];
	float dist[2];
	float final_distance;

    for(int i = 0; i < 2; i++)
    {
    	dist[i] = curr_pos[i] - coord[i];
    }

    final_distance = sqrt(pow(dist[0],2) + pow(dist[1],2));

    return final_distance;
    
	
}

//from origin using array

float* distance_from_origin(/*sagar implement*/)
{
	float coord[2];
	float final_dist_and_angle[2];
    
	float dist = sqrt(pow(coord[0],2)+pow(coord[1],2));
    float ratio = coord[1]/coord[0];
	float angle = atan(ratio);

	final_dist_and_angle[0] = dist;
	final_dist_and_angle[1] = angle;

	return final_dist_and_angle;
}

//same as above using tuples
tuple <float, float> dist_from_orig_tuple()
{

  tuple <float, float> coord;
  tuple <float, float> final_pos;
  float coord_x;
  float coord_y; //prolly gonna go in arguments sagar figure it 
 
  

  coord = make_tuple(coord_x, coord_y);
 


  float dist = sqrt(pow(get<0>(coord),2)+pow(get<1>(coord),2));
  float angle = get<1>(coord)/get<0>(coord);

  final_pos = make_tuple(dist , angle);

  return final_pos;

}

