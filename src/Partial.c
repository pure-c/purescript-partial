#include <purescript.h>

PURS_FFI_FUNC_2(Partial_crashWith, _, msg) {
	const purs_str_t *str = purs_any_get_string(msg);
	purs_assert(0, str->data);
}
