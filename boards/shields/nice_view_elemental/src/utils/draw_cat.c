#include "../../include/utils/draw_cat.h"

#include <lvgl.h>
#include "../../include/images/cat_0.h"
#include "../../include/images/cat_1.h"
#include "../../include/images/cat_2.h"
#include "../../include/images/cat_3.h"
#include "../../include/images/cat_4.h"
#include "../../include/images/cat_5.h"
#include "../../include/images/cat_6.h"
#include "../../include/images/cat_7.h"
#include "../../include/images/cat_8.h"
#include "../../include/images/cat_9.h"

void draw_cat(lv_obj_t* canvas, unsigned index) {
    lv_draw_img_dsc_t img_dsc;
    lv_draw_img_dsc_init(&img_dsc);

    switch (index % 10) {
        case 0: {
            lv_canvas_draw_img(canvas, 0, 0, &cat_0, &img_dsc);
            break;
        }
        case 1: {
            lv_canvas_draw_img(canvas, 0, 0, &cat_1, &img_dsc);
            break;
        }
        case 2: {
            lv_canvas_draw_img(canvas, 0, 0, &cat_2, &img_dsc);
            break;
        }
        case 3: {
            lv_canvas_draw_img(canvas, 0, 0, &cat_3, &img_dsc);
            break;
        }
        case 4: {
            lv_canvas_draw_img(canvas, 0, 0, &cat_4, &img_dsc);
            break;
        }
        case 5: {
            lv_canvas_draw_img(canvas, 0, 0, &cat_5, &img_dsc);
            break;
        }
        case 6: {
            lv_canvas_draw_img(canvas, 0, 0, &cat_6, &img_dsc);
            break;
        }
        case 7: {
            lv_canvas_draw_img(canvas, 0, 0, &cat_7, &img_dsc);
            break;
        }
        case 8: {
            lv_canvas_draw_img(canvas, 0, 0, &cat_8, &img_dsc);
            break;
        }
        case 9: {
            lv_canvas_draw_img(canvas, 0, 0, &cat_9, &img_dsc);
            break;
        }
    }
}
