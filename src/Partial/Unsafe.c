#include <purescript.h>

PURS_FFI_FUNC_1(Partial_Unsafe_unsafePartial, f, {
	return purs_any_app(f, NULL);
});
