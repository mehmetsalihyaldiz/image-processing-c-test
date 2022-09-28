#include "sod.h"

int main()
{
	sod_img img = sod_img_load_from_file("original.jpg", 3);
	sod_img_save_as_png(img, "test_1.png");
	return 0;
}
