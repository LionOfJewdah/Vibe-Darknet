#ifndef DARKNET_VIBE_API_ADDITIONS
#define DARKNET_VIBE_API_ADDITIONS

typedef struct network network;
typedef struct detection detection;

int NetworkVolume(const network* network);
int count_people(detection* dets, int num_boxes, float threshold, char** names);
void output_people(int number_of_people, const char* inputFilename);
void output_people_to_json_file(int number_of_people,
	const char* inputFilename, const char* outputFilename);
void output_no_detections(const char* inputFilename);

char* GetFileThatMightBeRelative(char* buffer, size_t buff_size, char* path);
char* FileInHome(char* buffer, size_t buffer_size, const char* relative_path);
char* FileInCV(char* buffer, size_t buffer_size, const char* relative_path);
char* FileInDarknet(char* buffer, size_t buffer_size, const char* relative_path);

#endif // DARKNET_VIBE_API_ADDITIONS
