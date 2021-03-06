#ifndef DRAW_BLUELED_H
#define DRAW_BLUELED_H
inline int cairo_code_draw_LED_get_width() { return 19; }
inline int cairo_code_draw_LED_get_height() { return 19; }
inline void cairo_code_draw_LED_render(cairo_t *cr, int val, unsigned char color) {
cairo_surface_t *temp_surface;
cairo_t *old_cr;
cairo_pattern_t *pattern;
cairo_matrix_t matrix;

float r,g,b, rd,gd,bd;

switch(color)
{
  case 0://red
    r = 1; g = 0; b = 0;
    rd = .3333; gd = 0; bd = 0;
    break;
  case 3://green
    r = 0; g = 1; b = 0;
    rd = 0; gd = .3333; bd = 0;
    break;
  case 4://blue
    r = 0.055555; g = 0.1; b = 1;
    rd = 0; gd = 0; bd = .4;
    break;
  default://red
    r = 1; g = 0; b = 0;
    rd = .3333; gd = 0; bd = 0;
    break;
}

//dark
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
pattern = cairo_pattern_create_rgba(rd,gd,bd,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 15.699219, 9.375);
cairo_curve_to(cr, 15.699219, 12.859375, 12.875, 15.683594, 9.390625, 15.683594);
cairo_curve_to(cr, 5.910156, 15.683594, 3.085938, 12.859375, 3.085938, 9.375);
cairo_curve_to(cr, 3.085938, 5.894531, 5.910156, 3.070312, 9.390625, 3.070312);
cairo_curve_to(cr, 12.875, 3.070312, 15.699219, 5.894531, 15.699219, 9.375);
cairo_close_path(cr);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_set_fill_rule(cr, CAIRO_FILL_RULE_WINDING);
cairo_fill_preserve(cr);
 /********border************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
cairo_set_line_width(cr, 1.5);
cairo_set_miter_limit(cr, 4);
cairo_set_line_cap(cr, CAIRO_LINE_CAP_BUTT);
cairo_set_line_join(cr, CAIRO_LINE_JOIN_MITER);
pattern = cairo_pattern_create_rgba(0.101961,0.101961,0.101961,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 15.699219, 9.375);
cairo_curve_to(cr, 15.699219, 12.859375, 12.875, 15.683594, 9.390625, 15.683594);
cairo_curve_to(cr, 5.910156, 15.683594, 3.085938, 12.859375, 3.085938, 9.375);
cairo_curve_to(cr, 3.085938, 5.894531, 5.910156, 3.070312, 9.390625, 3.070312);
cairo_curve_to(cr, 12.875, 3.070312, 15.699219, 5.894531, 15.699219, 9.375);
cairo_close_path(cr);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
//cairo_matrix_init(&matrix, 1,0,0,1,-60.60796,-180.04859);
//cairo_pattern_set_matrix(pattern, &matrix);
cairo_stroke_preserve(cr);
/********light************/
if(val)
{
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
pattern = cairo_pattern_create_rgba(r,g,b,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 15.929688, 9.375);
cairo_curve_to(cr, 15.929688, 12.988281, 13.003906, 15.914062, 9.390625, 15.914062);
cairo_curve_to(cr, 5.78125, 15.914062, 2.855469, 12.988281, 2.855469, 9.375);
cairo_curve_to(cr, 2.855469, 5.765625, 5.78125, 2.839844, 9.390625, 2.839844);
cairo_curve_to(cr, 13.003906, 2.839844, 15.929688, 5.765625, 15.929688, 9.375);
cairo_close_path(cr);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_set_fill_rule(cr, CAIRO_FILL_RULE_WINDING);
cairo_fill_preserve(cr);
 /********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
cairo_set_line_width(cr, 3.858536);
cairo_set_miter_limit(cr, 4);
cairo_set_line_cap(cr, CAIRO_LINE_CAP_BUTT);
cairo_set_line_join(cr, CAIRO_LINE_JOIN_MITER);
pattern = cairo_pattern_create_radial(70, 189.425, 0, 70, 189.425, 7.306019);
cairo_pattern_add_color_stop_rgba(pattern, 0,r,g,b,1);
cairo_pattern_add_color_stop_rgba(pattern, .75,r,g,b,1);
cairo_pattern_add_color_stop_rgba(pattern, 1,r,g,b,0.4);
cairo_matrix_init(&matrix, 0.86675,0.000000312469,-0.000000305437,0.886706,61.859452,181.110871);
cairo_pattern_set_matrix(pattern, &matrix);
cairo_pattern_set_extend(pattern, CAIRO_EXTEND_PAD);
cairo_pattern_set_filter(pattern, CAIRO_FILTER_GOOD);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 15.929688, 9.375);
cairo_curve_to(cr, 15.929688, 12.988281, 13.003906, 15.914062, 9.390625, 15.914062);
cairo_curve_to(cr, 5.78125, 15.914062, 2.855469, 12.988281, 2.855469, 9.375);
cairo_curve_to(cr, 2.855469, 5.765625, 5.78125, 2.839844, 9.390625, 2.839844);
cairo_curve_to(cr, 13.003906, 2.839844, 15.929688, 5.765625, 15.929688, 9.375);
cairo_close_path(cr);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
//cairo_matrix_init(&matrix, 1.036663,0,0,1.036663,-63.17433,-186.99338);
//cairo_pattern_set_matrix(pattern, &matrix);
cairo_stroke_preserve(cr);
}//if on
/********************/
}

inline void cairo_code_draw_redLED_render(cairo_t *cr, int val) {
    cairo_code_draw_LED_render(cr, val,0);}
inline void cairo_code_draw_greenLED_render(cairo_t *cr, int val) {
    cairo_code_draw_LED_render(cr, val,3);}
inline void cairo_code_draw_blueLED_render(cairo_t *cr, int val) {
    cairo_code_draw_LED_render(cr, val,4);}
#endif
