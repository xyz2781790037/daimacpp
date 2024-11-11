#include "strbuf.h"
void strbuf_init(struct strbuf *sb, size_t alloc) {
    sb->len = 0;
    sb->alloc = alloc;
    sb->buf = (char *) malloc(alloc);
}
void strbuf_attach(struct strbuf *sb, void *str, size_t len, size_t alloc) {
    sb->len = len;
    if (alloc > sb->alloc) {
        sb->buf = (char *) realloc(sb->buf, alloc);
    }
    sb->alloc = alloc;
    sb->buf = (char *) str;
}
void strbuf_release(struct strbuf *sb) {
    free(sb->buf);
    sb->len = 0;
    sb->alloc = 0;
    sb->buf = NULL;
}
void strbuf_swap(struct strbuf *a, struct strbuf *b) {
    struct strbuf temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
char *strbuf_detach(struct strbuf *sb, size_t *sz) {
    if (sb == NULL || sz == NULL) {
        return NULL;
    }
    char *buf = sb->buf;
    *sz = sb->alloc;
    sb->buf = NULL;
    sb->alloc = sb->len = 0;
    return buf;
}
int strbuf_cmp(const struct strbuf *first, const struct strbuf *second) {
    if (first->len == second->len) {
        if (first->alloc == second->alloc) {
            if (first->buf == second->buf) {
                return 1;
            }
        }
    }
    return 0;
}
void strbuf_reset(struct strbuf *sb) {
    if (sb->buf == NULL) {
        return;
    } else {
        sb->buf = NULL;
        sb->alloc = sb->len = 0;
    }
}

void strbuf_grow(struct strbuf *sb, size_t extra) {
    if (sb->alloc - sb->len < extra) {
        sb->buf = (char *) realloc(sb->buf, (sb->alloc + extra));
    }
}
void strbuf_add(struct strbuf *sb, const void *data, size_t len)
{
    if(len + sb->len > sb->alloc)
    {
        sb->buf = (char *) realloc(sb->buf, (len + sb->len));
    }
    strcat(sb->buf, (char *) data);
    sb->len += len;
}
void strbuf_addch(struct strbuf *sb, int c)
{
    
}