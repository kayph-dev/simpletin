#ifndef __SIMPLETIN_COLORS_H__
#define __SIMPLETIN_COLORS_H__

int getcolor(char **ptr,int *color,const int flag);
int setcolor(char *txt,int c);
void do_in_MUD_colors(char *txt,int quotetype);
void do_out_MUD_colors(char *line);

#endif /* end of include guard: __SIMPLETIN_COLORS_H__ */
