#include <purescript.h>

PURS_FFI_FUNC_2(Partial_crashWith, _, msg, {
	purs_assert(0, purs_any_get_string(msg));
})
