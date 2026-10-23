#include <stdint.h>

// Only the recovered arm64 call conventions documented in README.md are supported.
uint64_t oracle_call_context(const void *function, void *context, uint64_t argument);
uint64_t oracle_call_request(const void *function, const void *data, int64_t maximum,
                             void *result, void *error);
// Returns a retained controller; the Swift caller takes ownership with Unmanaged.
void *oracle_create_window_controller(void *window);
