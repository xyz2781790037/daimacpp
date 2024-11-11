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
    if (first == NULL || second == NULL) {
        return 0;
    }
    return strcmp(first->buf, second->buf);
}
void strbuf_reset(struct strbuf *sb) {
    sb->len = 0;
    sb->buf[0] = '\0';
}

void strbuf_grow(struct strbuf *sb, size_t extra) {
    if (sb->alloc - sb->len < extra) {
        sb->alloc = sb->len + extra;
        sb->buf = (char *) realloc(sb->buf, sb->alloc + 1);
    }
}
void strbuf_add(struct strbuf *sb, const void *data, size_t len) {
    if (len + sb->len > sb->alloc) {
        sb->alloc = len + sb->len;
        sb->buf = (char *) realloc(sb->buf, sb->alloc + 1);
    }
    memcpy(sb->buf + sb->len, data, len);
    //strcat and strncat is not safe
    sb->len += len;
    sb->buf[sb->len] = '\0';
}
void strbuf_addch(struct strbuf *sb, int c) {
    if (sb->len + 1 >= sb->alloc) {
        sb->alloc = sb->len + 1;
        sb->buf = (char *) realloc(sb->buf, sb->alloc + 1);
    }
    sb->buf[sb->len++] = c;
    sb->buf[sb->len] = '\0';
}
void strbuf_addstr(struct strbuf *sb, const char *s) {
    if (sb->len + strlen(s) >= sb->alloc) {
        sb->alloc = sb->len + strlen(s);
        sb->buf = (char *) realloc(sb->buf, sb->alloc + 1);
    }
    strcpy(sb->buf + sb->len, s);
    sb->len += strlen(s);
    sb->buf[sb->len] = '\0';
}
void strbuf_addbuf(struct strbuf *sb, const struct strbuf *sb2) {
    sb->alloc += sb2->alloc;

    sb->buf = (char *) realloc(sb->buf, sb->alloc + 1);
    strcpy(sb->buf + sb->len, sb2->buf);
    sb->len += sb2->len;
    sb->buf[sb->len] = '\0';
}
void strbuf_setlen(struct strbuf *sb, size_t len) {
    if (len > sb->alloc) {
        sb->alloc = len;
        sb->buf = (char *) realloc(sb->buf, sb->alloc + 1);
        sb->len = len;
    } else {
        sb->len = len;
        sb->buf[sb->len] = '\0';
    }
}
size_t strbuf_avail(const struct strbuf *sb) {
    return sb->alloc - sb->len - 1;
}
void strbuf_insert(struct strbuf *sb, size_t pos, const void *data, size_t len) {
    if (pos > sb->len) {
        return;
    }
    //sb->len don't include '\0'
    char *str = (char *) malloc(sb->len - pos + 1);
    strncpy(str, sb->buf + pos, sb->len - pos);
    str[sb->len - pos] = '\0';
    strbuf_grow(sb, len + 1);
    memcpy(sb->buf + pos, data, len);
    memcpy(sb->buf + pos + len, str, strlen(str));
    free(str);
    sb->len += len;
    sb->buf[sb->len] = '\0';
}

void strbuf_ltrim(struct strbuf *sb) {
    for (int i = 0; i < sb->len; i++) {
        if (sb->buf[i] == ' ' || sb->buf[i] == '\t') {
            sb->buf[i] = '\0';
            continue;
        } else {
            sb->len -= i;
            sb->buf = sb->buf + i;
            sb->buf[sb->len] = '\0';
            break;
        }
    }
}
void strbuf_rtrim(struct strbuf *sb) {
}
void strbuf_remove(struct strbuf *sb, size_t pos, size_t len) {}

ssize_t strbuf_read(struct strbuf *sb, int fd, size_t hint) {}
int strbuf_getline(struct strbuf *sb, FILE *fp) {}

struct strbuf **strbuf_split_buf(const char *str, size_t len, int terminator, int max) {}
bool strbuf_begin_judge(char *target_str, const char *str, int strnlen) {}
char *strbuf_get_mid_buf(char *target_buf, int begin, int end, int len) {}