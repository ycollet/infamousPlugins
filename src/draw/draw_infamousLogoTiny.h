#ifndef DRAW_INFAMOUSLOGOTINY_H
#define DRAW_INFAMOUSLOGOTINY_H
inline int cairo_code_draw_infamousLogoTiny_get_width() { return 15; }
inline int cairo_code_draw_infamousLogoTiny_get_height() { return 31; }
inline void cairo_code_draw_infamousLogoTiny_render(cairo_t *cr) {
cairo_surface_t *temp_surface;
cairo_t *old_cr;
cairo_pattern_t *pattern;
cairo_matrix_t matrix;

cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
pattern = cairo_pattern_create_rgba(1,1,1,.7);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 6.691406, 3.671875);
cairo_line_to(cr, 11.300781, 3.671875);
cairo_line_to(cr, 11.300781, 8.53125);
cairo_line_to(cr, 6.691406, 8.53125);
cairo_close_path(cr);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_set_fill_rule(cr, CAIRO_FILL_RULE_WINDING);
cairo_fill_preserve(cr);
 /********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
pattern = cairo_pattern_create_rgba(0.101961,0.101961,0.101961,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 8.226562, 9.652344);
cairo_curve_to(cr, 6.777344, 9.410156, 6.054688, 8.464844, 6.054688, 6.816406);
cairo_curve_to(cr, 6.054688, 5.902344, 6.320312, 5.125, 6.855469, 4.480469);
cairo_curve_to(cr, 7.457031, 3.746094, 8.234375, 3.378906, 9.191406, 3.378906);
cairo_line_to(cr, 9.699219, 3.378906);
cairo_curve_to(cr, 10.566406, 3.378906, 11.253906, 3.679688, 11.765625, 4.277344);
cairo_curve_to(cr, 12.210938, 4.8125, 12.433594, 5.480469, 12.433594, 6.28125);
cairo_curve_to(cr, 12.433594, 7.148438, 12.191406, 7.917969, 11.699219, 8.585938);
cairo_curve_to(cr, 11.144531, 9.296875, 10.421875, 9.675781, 9.53125, 9.722656);
cairo_move_to(cr, 8.863281, 4.210938);
cairo_line_to(cr, 8.359375, 4.210938);
cairo_curve_to(cr, 7.914062, 4.210938, 7.558594, 4.390625, 7.289062, 4.746094);
cairo_curve_to(cr, 7.023438, 5.101562, 6.890625, 5.503906, 6.890625, 5.949219);
cairo_curve_to(cr, 6.890625, 6.792969, 7.257812, 7.214844, 7.992188, 7.214844);
cairo_line_to(cr, 9.257812, 7.214844);
cairo_line_to(cr, 7.195312, 7.214844);
cairo_line_to(cr, 8.496094, 7.214844);
cairo_curve_to(cr, 8.941406, 7.214844, 9.296875, 7.039062, 9.5625, 6.683594);
cairo_curve_to(cr, 9.832031, 6.328125, 9.964844, 5.925781, 9.964844, 5.480469);
cairo_curve_to(cr, 9.964844, 4.636719, 9.597656, 4.210938, 8.863281, 4.210938);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_set_fill_rule(cr, CAIRO_FILL_RULE_WINDING);
cairo_fill_preserve(cr);
 /********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
pattern = cairo_pattern_create_rgba(1,1,1,.7);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 5.667969, 14.175781);
cairo_line_to(cr, 10.25, 14.667969);
cairo_line_to(cr, 9.550781, 21.195312);
cairo_line_to(cr, 4.964844, 20.707031);
cairo_close_path(cr);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_set_fill_rule(cr, CAIRO_FILL_RULE_WINDING);
cairo_fill_preserve(cr);
 /********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
pattern = cairo_pattern_create_rgba(1,1,1,.7);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 3.992188, 18.949219);
cairo_curve_to(cr, 6.339844, 17.675781, 11.996094, 19.265625, 11.996094, 19.265625);
cairo_line_to(cr, 11.996094, 29.050781);
cairo_line_to(cr, 0.207031, 28.324219);
cairo_line_to(cr, 1.484375, 23.179688);
cairo_curve_to(cr, 1.484375, 23.179688, 2.554688, 19.730469, 3.992188, 18.949219);
cairo_close_path(cr);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_set_fill_rule(cr, CAIRO_FILL_RULE_WINDING);
cairo_fill_preserve(cr);
 /********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
pattern = cairo_pattern_create_rgba(0.101961,0.101961,0.101961,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 12.953125, 21.40625);
cairo_curve_to(cr, 13.355469, 24.234375, 13.554688, 25.914062, 13.554688, 26.449219);
cairo_curve_to(cr, 13.554688, 29.320312, 12.496094, 30.753906, 10.382812, 30.753906);
cairo_line_to(cr, 2.671875, 30.753906);
cairo_curve_to(cr, 0.890625, 30.753906, 0, 29.84375, 0, 28.019531);
cairo_curve_to(cr, 0, 27.039062, 0.265625, 25.757812, 0.800781, 24.179688);
cairo_curve_to(cr, 1.203125, 23.132812, 1.601562, 22.085938, 2.003906, 21.039062);
cairo_curve_to(cr, 2.625, 19.4375, 3.574219, 18.570312, 4.839844, 18.4375);
cairo_line_to(cr, 5.101562, 16.382812);
cairo_line_to(cr, 5.425781, 13.542969);
cairo_curve_to(cr, 5.527344, 12.636719, 5.691406, 11.851562, 6.226562, 11.207031);
cairo_curve_to(cr, 6.828125, 10.472656, 7.605469, 10.105469, 8.5625, 10.105469);
cairo_line_to(cr, 8.644531, 10.105469);
cairo_curve_to(cr, 9.515625, 10.105469, 10.203125, 10.40625, 10.714844, 11.007812);
cairo_curve_to(cr, 11.160156, 11.539062, 11.382812, 12.207031, 11.382812, 13.007812);
cairo_line_to(cr, 10.785156, 18.503906);
cairo_curve_to(cr, 12.007812, 18.769531, 12.730469, 19.738281, 12.953125, 21.40625);
cairo_move_to(cr, 8.664062, 11.03125);
cairo_curve_to(cr, 8.28125, 10.972656, 8.109375, 10.996094, 7.730469, 10.9375);
cairo_curve_to(cr, 7.285156, 10.9375, 6.925781, 11.117188, 6.660156, 11.472656);
cairo_curve_to(cr, 6.394531, 11.828125, 6.257812, 12.230469, 6.257812, 12.675781);
cairo_line_to(cr, 6.136719, 13.945312);
cairo_line_to(cr, 5.507812, 19.238281);
cairo_curve_to(cr, 4.550781, 19.238281, 3.960938, 19.28125, 3.738281, 19.371094);
cairo_curve_to(cr, 3.339844, 19.527344, 3.015625, 19.984375, 2.769531, 20.738281);
cairo_line_to(cr, 0.734375, 26.75);
cairo_curve_to(cr, 0.710938, 26.859375, 0.699219, 26.984375, 0.699219, 27.117188);
cairo_curve_to(cr, 0.699219, 27.429688, 0.8125, 27.695312, 1.035156, 27.917969);
cairo_curve_to(cr, 1.257812, 28.140625, 1.523438, 28.25, 1.835938, 28.25);
cairo_line_to(cr, 9.546875, 28.25);
cairo_curve_to(cr, 9.949219, 28.25, 10.304688, 28.09375, 10.617188, 27.785156);
cairo_curve_to(cr, 10.929688, 27.472656, 11.0625, 27.128906, 11.019531, 26.75);
cairo_line_to(cr, 10.484375, 20.738281);
cairo_curve_to(cr, 10.394531, 19.960938, 10.148438, 19.492188, 9.75, 19.335938);
cairo_curve_to(cr, 9.59375, 19.269531, 9.035156, 19.238281, 8.078125, 19.238281);
cairo_line_to(cr, 8.914062, 12.207031);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_set_fill_rule(cr, CAIRO_FILL_RULE_WINDING);
cairo_fill_preserve(cr);
 /********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
cairo_set_line_width(cr, 0.893644);
cairo_set_miter_limit(cr, 4);
cairo_set_line_cap(cr, CAIRO_LINE_CAP_BUTT);
cairo_set_line_join(cr, CAIRO_LINE_JOIN_MITER);
pattern = cairo_pattern_create_rgba(0,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 12.582031, 26.5625);
cairo_curve_to(cr, 12.992188, 26.574219, 13.40625, 26.449219, 13.742188, 26.207031);
cairo_curve_to(cr, 14.019531, 26.007812, 14.242188, 25.734375, 14.375, 25.421875);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_matrix_init(&matrix, 0.231851,0,0,0.231851,-143.520042,189.96315);
cairo_pattern_set_matrix(pattern, &matrix);
cairo_stroke_preserve(cr);
/********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
cairo_set_line_width(cr, 5);
cairo_set_miter_limit(cr, 4);
cairo_set_line_cap(cr, CAIRO_LINE_CAP_BUTT);
cairo_set_line_join(cr, CAIRO_LINE_JOIN_MITER);
pattern = cairo_pattern_create_rgba(0,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 14.890625, 25.457031);
cairo_curve_to(cr, 14.890625, 25.753906, 14.652344, 25.992188, 14.359375, 25.992188);
cairo_curve_to(cr, 14.066406, 25.992188, 13.828125, 25.753906, 13.828125, 25.457031);
cairo_curve_to(cr, 13.828125, 25.164062, 14.066406, 24.925781, 14.359375, 24.925781);
cairo_curve_to(cr, 14.652344, 24.925781, 14.890625, 25.164062, 14.890625, 25.457031);
cairo_close_path(cr);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_matrix_init(&matrix, 0.0414384,0,0,0.0414384,1.335603,-4.771159);
cairo_pattern_set_matrix(pattern, &matrix);
cairo_stroke_preserve(cr);
/********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
cairo_set_line_width(cr, 5);
cairo_set_miter_limit(cr, 4);
cairo_set_line_cap(cr, CAIRO_LINE_CAP_BUTT);
cairo_set_line_join(cr, CAIRO_LINE_JOIN_MITER);
pattern = cairo_pattern_create_rgba(0,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 14.410156, 24.890625);
cairo_curve_to(cr, 14.4375, 24.785156, 14.492188, 24.683594, 14.574219, 24.609375);
cairo_curve_to(cr, 14.632812, 24.550781, 14.703125, 24.503906, 14.78125, 24.476562);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_matrix_init(&matrix, 0.0414384,0,0,0.0414384,1.68804,-5.75659);
cairo_pattern_set_matrix(pattern, &matrix);
cairo_stroke_preserve(cr);
/********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
cairo_set_line_width(cr, 5);
cairo_set_miter_limit(cr, 4);
cairo_set_line_cap(cr, CAIRO_LINE_CAP_BUTT);
cairo_set_line_join(cr, CAIRO_LINE_JOIN_MITER);
pattern = cairo_pattern_create_rgba(0,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 14.347656, 26.035156);
cairo_curve_to(cr, 14.320312, 26.140625, 14.261719, 26.238281, 14.183594, 26.316406);
cairo_curve_to(cr, 14.125, 26.375, 14.054688, 26.417969, 13.976562, 26.449219);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_matrix_init(&matrix, 0.0414384,0,0,0.0414384,1.68804,-5.75659);
cairo_pattern_set_matrix(pattern, &matrix);
cairo_stroke_preserve(cr);
/********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
cairo_set_line_width(cr, 5);
cairo_set_miter_limit(cr, 4);
cairo_set_line_cap(cr, CAIRO_LINE_CAP_BUTT);
cairo_set_line_join(cr, CAIRO_LINE_JOIN_MITER);
pattern = cairo_pattern_create_rgba(0,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 14.882812, 25.492188);
cairo_curve_to(cr, 14.992188, 25.519531, 15.089844, 25.578125, 15.164062, 25.65625);
cairo_curve_to(cr, 15.222656, 25.714844, 15.269531, 25.785156, 15.300781, 25.863281);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_matrix_init(&matrix, 0.0414384,0,0,0.0414384,1.68804,-5.75659);
cairo_pattern_set_matrix(pattern, &matrix);
cairo_stroke_preserve(cr);
/********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
cairo_set_line_width(cr, 5);
cairo_set_miter_limit(cr, 4);
cairo_set_line_cap(cr, CAIRO_LINE_CAP_BUTT);
cairo_set_line_join(cr, CAIRO_LINE_JOIN_MITER);
pattern = cairo_pattern_create_rgba(0,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 13.808594, 25.519531);
cairo_curve_to(cr, 13.703125, 25.492188, 13.601562, 25.4375, 13.527344, 25.359375);
cairo_curve_to(cr, 13.46875, 25.296875, 13.421875, 25.226562, 13.394531, 25.148438);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_matrix_init(&matrix, 0.0414384,0,0,0.0414384,1.68804,-5.75659);
cairo_pattern_set_matrix(pattern, &matrix);
cairo_stroke_preserve(cr);
/********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
cairo_set_line_width(cr, 5);
cairo_set_miter_limit(cr, 4);
cairo_set_line_cap(cr, CAIRO_LINE_CAP_BUTT);
cairo_set_line_join(cr, CAIRO_LINE_JOIN_MITER);
pattern = cairo_pattern_create_rgba(0,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 13.976562, 25.03125);
cairo_curve_to(cr, 13.921875, 24.9375, 13.894531, 24.828125, 13.894531, 24.71875);
cairo_curve_to(cr, 13.894531, 24.636719, 13.914062, 24.554688, 13.945312, 24.476562);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_matrix_init(&matrix, 0.0414384,0,0,0.0414384,1.68804,-5.75659);
cairo_pattern_set_matrix(pattern, &matrix);
cairo_stroke_preserve(cr);
/********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
cairo_set_line_width(cr, 5);
cairo_set_miter_limit(cr, 4);
cairo_set_line_cap(cr, CAIRO_LINE_CAP_BUTT);
cairo_set_line_join(cr, CAIRO_LINE_JOIN_MITER);
pattern = cairo_pattern_create_rgba(0,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 14.839844, 25.128906);
cairo_curve_to(cr, 14.933594, 25.074219, 15.042969, 25.042969, 15.152344, 25.042969);
cairo_curve_to(cr, 15.238281, 25.046875, 15.320312, 25.0625, 15.394531, 25.097656);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_matrix_init(&matrix, 0.0414384,0,0,0.0414384,1.68804,-5.75659);
cairo_pattern_set_matrix(pattern, &matrix);
cairo_stroke_preserve(cr);
/********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
cairo_set_line_width(cr, 5);
cairo_set_miter_limit(cr, 4);
cairo_set_line_cap(cr, CAIRO_LINE_CAP_BUTT);
cairo_set_line_join(cr, CAIRO_LINE_JOIN_MITER);
pattern = cairo_pattern_create_rgba(0,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 14.742188, 25.886719);
cairo_curve_to(cr, 14.800781, 25.980469, 14.828125, 26.089844, 14.828125, 26.199219);
cairo_curve_to(cr, 14.828125, 26.285156, 14.808594, 26.367188, 14.773438, 26.441406);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_matrix_init(&matrix, 0.0414384,0,0,0.0414384,1.68804,-5.75659);
cairo_pattern_set_matrix(pattern, &matrix);
cairo_stroke_preserve(cr);
/********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
cairo_set_line_width(cr, 5);
cairo_set_miter_limit(cr, 4);
cairo_set_line_cap(cr, CAIRO_LINE_CAP_BUTT);
cairo_set_line_join(cr, CAIRO_LINE_JOIN_MITER);
pattern = cairo_pattern_create_rgba(0,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 13.976562, 25.882812);
cairo_curve_to(cr, 13.882812, 25.9375, 13.773438, 25.96875, 13.660156, 25.96875);
cairo_curve_to(cr, 13.578125, 25.964844, 13.496094, 25.949219, 13.421875, 25.914062);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_matrix_init(&matrix, 0.0414384,0,0,0.0414384,1.68804,-5.75659);
cairo_pattern_set_matrix(pattern, &matrix);
cairo_stroke_preserve(cr);
/********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
pattern = cairo_pattern_create_rgba(0.470588,0.266667,0.129412,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 11.863281, 6.132812);
cairo_curve_to(cr, 11.859375, 5.519531, 11.65625, 4.933594, 11.289062, 4.449219);
cairo_curve_to(cr, 10.894531, 3.933594, 10.722656, 3.792969, 10.207031, 3.546875);
cairo_curve_to(cr, 8.976562, 2.957031, 7.417969, 3.371094, 6.664062, 4.492188);
cairo_curve_to(cr, 6.503906, 4.730469, 6.324219, 4.929688, 6.273438, 4.929688);
cairo_curve_to(cr, 6.21875, 4.933594, 6.011719, 4.8125, 5.8125, 4.660156);
cairo_curve_to(cr, 4.785156, 3.886719, 4.707031, 2.21875, 5.675781, 1.746094);
cairo_curve_to(cr, 6.132812, 1.523438, 6.484375, 1.601562, 7.234375, 2.085938);
cairo_curve_to(cr, 8.164062, 2.683594, 8.382812, 2.769531, 9.035156, 2.769531);
cairo_curve_to(cr, 9.691406, 2.773438, 10.253906, 2.597656, 11.308594, 2.066406);
cairo_curve_to(cr, 11.953125, 1.742188, 12.683594, 1.5, 13.019531, 1.503906);
cairo_curve_to(cr, 14.046875, 1.503906, 14.78125, 2.347656, 14.78125, 3.527344);
cairo_curve_to(cr, 14.785156, 4.386719, 14.542969, 4.941406, 13.871094, 5.609375);
cairo_curve_to(cr, 13.324219, 6.160156, 12.847656, 6.414062, 12.132812, 6.550781);
cairo_line_to(cr, 11.871094, 6.601562);
cairo_close_path(cr);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_set_fill_rule(cr, CAIRO_FILL_RULE_WINDING);
cairo_fill_preserve(cr);
 /********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
cairo_set_line_width(cr, 1.805433);
cairo_set_miter_limit(cr, 4);
cairo_set_line_cap(cr, CAIRO_LINE_CAP_BUTT);
cairo_set_line_join(cr, CAIRO_LINE_JOIN_MITER);
pattern = cairo_pattern_create_rgba(0.470588,0.266667,0.129412,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 11.863281, 6.132812);
cairo_curve_to(cr, 11.859375, 5.519531, 11.65625, 4.933594, 11.289062, 4.449219);
cairo_curve_to(cr, 10.894531, 3.933594, 10.722656, 3.792969, 10.207031, 3.546875);
cairo_curve_to(cr, 8.976562, 2.957031, 7.417969, 3.371094, 6.664062, 4.492188);
cairo_curve_to(cr, 6.503906, 4.730469, 6.324219, 4.929688, 6.273438, 4.929688);
cairo_curve_to(cr, 6.21875, 4.933594, 6.011719, 4.8125, 5.8125, 4.660156);
cairo_curve_to(cr, 4.785156, 3.886719, 4.707031, 2.21875, 5.675781, 1.746094);
cairo_curve_to(cr, 6.132812, 1.523438, 6.484375, 1.601562, 7.234375, 2.085938);
cairo_curve_to(cr, 8.164062, 2.683594, 8.382812, 2.769531, 9.035156, 2.769531);
cairo_curve_to(cr, 9.691406, 2.773438, 10.253906, 2.597656, 11.308594, 2.066406);
cairo_curve_to(cr, 11.953125, 1.742188, 12.683594, 1.5, 13.019531, 1.503906);
cairo_curve_to(cr, 14.046875, 1.503906, 14.78125, 2.347656, 14.78125, 3.527344);
cairo_curve_to(cr, 14.785156, 4.386719, 14.542969, 4.941406, 13.871094, 5.609375);
cairo_curve_to(cr, 13.324219, 6.160156, 12.847656, 6.414062, 12.132812, 6.550781);
cairo_line_to(cr, 11.871094, 6.601562);
cairo_close_path(cr);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_matrix_init(&matrix, 0.231851,0,0,0.231851,-143.326072,189.51825);
cairo_pattern_set_matrix(pattern, &matrix);
cairo_stroke_preserve(cr);
/********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
pattern = cairo_pattern_create_rgba(0.470588,0.266667,0.129412,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 8.335938, 1.878906);
cairo_curve_to(cr, 8.335938, 1.796875, 9.121094, 0.617188, 9.242188, 0.519531);
cairo_curve_to(cr, 9.4375, 0.363281, 10.25, 0.394531, 10.644531, 0.570312);
cairo_curve_to(cr, 10.945312, 0.707031, 11.519531, 1.273438, 11.519531, 1.429688);
cairo_curve_to(cr, 11.519531, 1.464844, 11.304688, 1.585938, 11.046875, 1.703125);
cairo_curve_to(cr, 10.617188, 1.902344, 10.484375, 1.921875, 9.457031, 1.921875);
cairo_curve_to(cr, 8.839844, 1.921875, 8.335938, 1.902344, 8.335938, 1.878906);
cairo_close_path(cr);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_set_fill_rule(cr, CAIRO_FILL_RULE_WINDING);
cairo_fill_preserve(cr);
 /********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
cairo_set_line_width(cr, 1.805433);
cairo_set_miter_limit(cr, 4);
cairo_set_line_cap(cr, CAIRO_LINE_CAP_BUTT);
cairo_set_line_join(cr, CAIRO_LINE_JOIN_MITER);
pattern = cairo_pattern_create_rgba(0.470588,0.266667,0.129412,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 8.335938, 1.878906);
cairo_curve_to(cr, 8.335938, 1.796875, 9.121094, 0.617188, 9.242188, 0.519531);
cairo_curve_to(cr, 9.4375, 0.363281, 10.25, 0.394531, 10.644531, 0.570312);
cairo_curve_to(cr, 10.945312, 0.707031, 11.519531, 1.273438, 11.519531, 1.429688);
cairo_curve_to(cr, 11.519531, 1.464844, 11.304688, 1.585938, 11.046875, 1.703125);
cairo_curve_to(cr, 10.617188, 1.902344, 10.484375, 1.921875, 9.457031, 1.921875);
cairo_curve_to(cr, 8.839844, 1.921875, 8.335938, 1.902344, 8.335938, 1.878906);
cairo_close_path(cr);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_matrix_init(&matrix, 0.231851,0,0,0.231851,-143.326072,189.51825);
cairo_pattern_set_matrix(pattern, &matrix);
cairo_stroke_preserve(cr);
/********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
pattern = cairo_pattern_create_rgba(0.666667,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 8.832031, 2.414062);
cairo_curve_to(cr, 8.640625, 2.394531, 8.324219, 2.316406, 8.207031, 2.25);
cairo_curve_to(cr, 8.171875, 2.230469, 8.183594, 2.226562, 8.351562, 2.234375);
cairo_curve_to(cr, 8.453125, 2.238281, 8.769531, 2.253906, 8.980469, 2.257812);
cairo_curve_to(cr, 9.191406, 2.265625, 9.472656, 2.273438, 9.601562, 2.277344);
cairo_line_to(cr, 9.945312, 2.277344);
cairo_line_to(cr, 9.75, 2.3125);
cairo_curve_to(cr, 9.609375, 2.339844, 9.382812, 2.398438, 9.21875, 2.414062);
cairo_curve_to(cr, 9.050781, 2.429688, 9, 2.429688, 8.832031, 2.414062);
cairo_close_path(cr);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_set_fill_rule(cr, CAIRO_FILL_RULE_WINDING);
cairo_fill_preserve(cr);
 /********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
cairo_set_line_width(cr, 0.319159);
cairo_set_miter_limit(cr, 4);
cairo_set_line_cap(cr, CAIRO_LINE_CAP_BUTT);
cairo_set_line_join(cr, CAIRO_LINE_JOIN_MITER);
pattern = cairo_pattern_create_rgba(0.666667,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 8.832031, 2.414062);
cairo_curve_to(cr, 8.640625, 2.394531, 8.324219, 2.316406, 8.207031, 2.25);
cairo_curve_to(cr, 8.171875, 2.230469, 8.183594, 2.226562, 8.351562, 2.234375);
cairo_curve_to(cr, 8.453125, 2.238281, 8.769531, 2.253906, 8.980469, 2.257812);
cairo_curve_to(cr, 9.191406, 2.265625, 9.472656, 2.273438, 9.601562, 2.277344);
cairo_line_to(cr, 9.945312, 2.277344);
cairo_line_to(cr, 9.75, 2.3125);
cairo_curve_to(cr, 9.609375, 2.339844, 9.382812, 2.398438, 9.21875, 2.414062);
cairo_curve_to(cr, 9.050781, 2.429688, 9, 2.429688, 8.832031, 2.414062);
cairo_close_path(cr);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_matrix_init(&matrix, 0.231851,0,0,0.231851,-143.326072,189.51825);
cairo_pattern_set_matrix(pattern, &matrix);
cairo_stroke_preserve(cr);
/********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
cairo_set_line_width(cr, 1.42983);
cairo_set_miter_limit(cr, 4);
cairo_set_line_cap(cr, CAIRO_LINE_CAP_BUTT);
cairo_set_line_join(cr, CAIRO_LINE_JOIN_MITER);
pattern = cairo_pattern_create_rgba(0,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 7.851562, 2.210938);
cairo_line_to(cr, 9.035156, 0.355469);
cairo_curve_to(cr, 9.449219, 0.160156, 9.933594, 0.113281, 10.378906, 0.226562);
cairo_curve_to(cr, 10.820312, 0.339844, 11.222656, 0.613281, 11.496094, 0.984375);
cairo_curve_to(cr, 11.621094, 1.15625, 11.722656, 1.351562, 11.785156, 1.554688);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_matrix_init(&matrix, 0.231851,0,0,0.231851,-143.326072,189.51825);
cairo_pattern_set_matrix(pattern, &matrix);
cairo_stroke_preserve(cr);
/********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
pattern = cairo_pattern_create_rgba(0.666667,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 7.992188, 2.082031);
cairo_line_to(cr, 10.601562, 2.148438);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_set_fill_rule(cr, CAIRO_FILL_RULE_WINDING);
cairo_fill_preserve(cr);
 /********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
cairo_set_line_width(cr, 1.251101);
cairo_set_miter_limit(cr, 4);
cairo_set_line_cap(cr, CAIRO_LINE_CAP_BUTT);
cairo_set_line_join(cr, CAIRO_LINE_JOIN_MITER);
pattern = cairo_pattern_create_rgba(0,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 7.992188, 2.082031);
cairo_line_to(cr, 10.601562, 2.148438);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_matrix_init(&matrix, 0.231851,0,0,0.231851,-143.326072,189.51825);
cairo_pattern_set_matrix(pattern, &matrix);
cairo_stroke_preserve(cr);
/********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
cairo_set_line_width(cr, 1.42983);
cairo_set_miter_limit(cr, 4);
cairo_set_line_cap(cr, CAIRO_LINE_CAP_BUTT);
cairo_set_line_join(cr, CAIRO_LINE_JOIN_MITER);
pattern = cairo_pattern_create_rgba(0,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 11.632812, 6.800781);
cairo_curve_to(cr, 12.402344, 6.808594, 13.167969, 6.546875, 13.769531, 6.070312);
cairo_curve_to(cr, 14.367188, 5.59375, 14.796875, 4.902344, 14.960938, 4.15625);
cairo_curve_to(cr, 15.078125, 3.625, 15.0625, 3.058594, 14.859375, 2.554688);
cairo_curve_to(cr, 14.65625, 2.050781, 14.257812, 1.617188, 13.75, 1.425781);
cairo_curve_to(cr, 13.316406, 1.261719, 12.828125, 1.28125, 12.378906, 1.398438);
cairo_curve_to(cr, 11.925781, 1.511719, 11.503906, 1.71875, 11.089844, 1.929688);
cairo_curve_to(cr, 10.671875, 2.136719, 10.257812, 2.351562, 9.808594, 2.480469);
cairo_curve_to(cr, 9.363281, 2.609375, 8.878906, 2.648438, 8.433594, 2.511719);
cairo_curve_to(cr, 7.972656, 2.371094, 7.589844, 2.054688, 7.183594, 1.792969);
cairo_curve_to(cr, 6.980469, 1.660156, 6.769531, 1.542969, 6.539062, 1.46875);
cairo_curve_to(cr, 6.308594, 1.394531, 6.058594, 1.367188, 5.824219, 1.421875);
cairo_curve_to(cr, 5.542969, 1.484375, 5.292969, 1.664062, 5.113281, 1.890625);
cairo_curve_to(cr, 4.9375, 2.121094, 4.832031, 2.402344, 4.785156, 2.6875);
cairo_curve_to(cr, 4.695312, 3.246094, 4.824219, 3.839844, 5.144531, 4.308594);
cairo_curve_to(cr, 5.464844, 4.773438, 5.96875, 5.113281, 6.523438, 5.230469);
cairo_curve_to(cr, 6.75, 4.671875, 7.167969, 4.195312, 7.691406, 3.902344);
cairo_curve_to(cr, 8.214844, 3.605469, 8.839844, 3.492188, 9.433594, 3.589844);
cairo_curve_to(cr, 10.152344, 3.703125, 10.816406, 4.121094, 11.226562, 4.722656);
cairo_curve_to(cr, 11.636719, 5.320312, 11.785156, 6.09375, 11.632812, 6.800781);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_matrix_init(&matrix, 0.231851,0,0,0.231851,-143.326072,189.51825);
cairo_pattern_set_matrix(pattern, &matrix);
cairo_stroke_preserve(cr);
/********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
pattern = cairo_pattern_create_rgba(0.666667,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 4.40625, 10.945312);
cairo_curve_to(cr, 6.199219, 9.148438, 12.015625, 10.613281, 12.015625, 10.613281);
cairo_curve_to(cr, 10.234375, 12.542969, 8.992188, 15.007812, 6.675781, 16.398438);
cairo_line_to(cr, 4.40625, 13.65625);
cairo_curve_to(cr, 4.40625, 13.65625, 3.6875, 11.660156, 4.40625, 10.945312);
cairo_close_path(cr);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_set_fill_rule(cr, CAIRO_FILL_RULE_WINDING);
cairo_fill_preserve(cr);
 /********************/
cairo_set_operator(cr, CAIRO_OPERATOR_OVER);
cairo_set_line_width(cr, 0.331507);
cairo_set_miter_limit(cr, 4);
cairo_set_line_cap(cr, CAIRO_LINE_CAP_BUTT);
cairo_set_line_join(cr, CAIRO_LINE_JOIN_MITER);
pattern = cairo_pattern_create_rgba(0,0,0,1);
cairo_set_source(cr, pattern);
cairo_pattern_destroy(pattern);
cairo_new_path(cr);
cairo_move_to(cr, 4.40625, 10.945312);
cairo_curve_to(cr, 6.199219, 9.148438, 12.015625, 10.613281, 12.015625, 10.613281);
cairo_curve_to(cr, 10.234375, 12.542969, 8.992188, 15.007812, 6.675781, 16.398438);
cairo_line_to(cr, 4.40625, 13.65625);
cairo_curve_to(cr, 4.40625, 13.65625, 3.6875, 11.660156, 4.40625, 10.945312);
cairo_close_path(cr);
cairo_set_tolerance(cr, 0.1);
cairo_set_antialias(cr, CAIRO_ANTIALIAS_DEFAULT);
cairo_matrix_init(&matrix, 1,0,0,1,-14.183802,-179.81367);
cairo_pattern_set_matrix(pattern, &matrix);
cairo_stroke_preserve(cr);
/********************/
}
#endif
