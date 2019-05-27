// THIS FILE IS AUTOGENERATED!
#include "simdjson.h"

#if (defined WIN32 || defined _WIN32)
#define EXPORTS(returntype) extern "C" __declspec(dllexport) returntype __cdecl
#else
#define EXPORTS(returntype) extern "C" __attribute__((visibility("default"))) returntype
#endif

/* ParsedJson */
EXPORTS(ParsedJson*) ParsedJson_ParsedJson() { return new ParsedJson(); }
EXPORTS(bool) ParsedJson_allocateCapacity(ParsedJson* target, size_t len, size_t maxdepth) { return target->allocateCapacity(len, maxdepth); }
EXPORTS(bool) ParsedJson_isValid(ParsedJson* target) { return target->isValid(); }
EXPORTS(void) ParsedJson_deallocate(ParsedJson* target) { target->deallocate(); }
EXPORTS(void) ParsedJson_init(ParsedJson* target) { target->init(); }
EXPORTS(void) ParsedJson_write_tape(ParsedJson* target, uint64_t val, uint8_t c) { target->write_tape(val, c); }
EXPORTS(void) ParsedJson_write_tape_s64(ParsedJson* target, int64_t i) { target->write_tape_s64(i); }
EXPORTS(void) ParsedJson_write_tape_double(ParsedJson* target, double d) { target->write_tape_double(d); }
EXPORTS(uint32_t) ParsedJson_get_current_loc(ParsedJson* target) { return target->get_current_loc(); }
EXPORTS(void) ParsedJson_annotate_previousloc(ParsedJson* target, uint32_t saved_loc, uint64_t val) { target->annotate_previousloc(saved_loc, val); }
EXPORTS(void) ParsedJson_Dispose(ParsedJson* target) { delete target; }

/* ParsedJson::iterator */
EXPORTS(ParsedJson::iterator*) iterator_iterator(ParsedJson* pj_) { return new ParsedJson::iterator(*pj_); }
EXPORTS(bool) iterator_isOk(ParsedJson::iterator* target) { return target->isOk(); }
EXPORTS(size_t) iterator_get_tape_location(ParsedJson::iterator* target) { return target->get_tape_location(); }
EXPORTS(size_t) iterator_get_tape_length(ParsedJson::iterator* target) { return target->get_tape_length(); }
EXPORTS(size_t) iterator_get_depth(ParsedJson::iterator* target) { return target->get_depth(); }
EXPORTS(uint8_t) iterator_get_scope_type(ParsedJson::iterator* target) { return target->get_scope_type(); }
EXPORTS(bool) iterator_move_forward(ParsedJson::iterator* target) { return target->move_forward(); }
EXPORTS(uint8_t) iterator_get_type(ParsedJson::iterator* target) { return target->get_type(); }
EXPORTS(int64_t) iterator_get_integer(ParsedJson::iterator* target) { return target->get_integer(); }
EXPORTS(const char*) iterator_get_string(ParsedJson::iterator* target) { return target->get_string(); }
EXPORTS(uint32_t) iterator_get_string_length(ParsedJson::iterator* target) { return target->get_string_length(); }
EXPORTS(double) iterator_get_double(ParsedJson::iterator* target) { return target->get_double(); }
EXPORTS(bool) iterator_is_object_or_array(ParsedJson::iterator* target) { return target->is_object_or_array(); }
EXPORTS(bool) iterator_is_object(ParsedJson::iterator* target) { return target->is_object(); }
EXPORTS(bool) iterator_is_array(ParsedJson::iterator* target) { return target->is_array(); }
EXPORTS(bool) iterator_is_string(ParsedJson::iterator* target) { return target->is_string(); }
EXPORTS(bool) iterator_is_integer(ParsedJson::iterator* target) { return target->is_integer(); }
EXPORTS(bool) iterator_is_double(ParsedJson::iterator* target) { return target->is_double(); }
EXPORTS(bool) iterator_is_true(ParsedJson::iterator* target) { return target->is_true(); }
EXPORTS(bool) iterator_is_false(ParsedJson::iterator* target) { return target->is_false(); }
EXPORTS(bool) iterator_is_null(ParsedJson::iterator* target) { return target->is_null(); }
EXPORTS(bool) iterator_s_is_object_or_array(uint8_t type) { return ParsedJson::iterator::is_object_or_array(type); }
EXPORTS(bool) iterator_move_to_key(ParsedJson::iterator* target, const char* key) { return target->move_to_key(key); }
EXPORTS(bool) iterator_next(ParsedJson::iterator* target) { return target->next(); }
EXPORTS(bool) iterator_prev(ParsedJson::iterator* target) { return target->prev(); }
EXPORTS(bool) iterator_up(ParsedJson::iterator* target) { return target->up(); }
EXPORTS(bool) iterator_down(ParsedJson::iterator* target) { return target->down(); }
EXPORTS(void) iterator_to_start_scope(ParsedJson::iterator* target) { target->to_start_scope(); }
EXPORTS(void) iterator_Dispose(ParsedJson::iterator* target) { delete target; }


// Global (not autogenerated yet)
EXPORTS(char*) Global_allocate_padded_buffer(size_t length) { return allocate_padded_buffer(length); }
EXPORTS(size_t) Global_jsonminify(const uint8_t* buf, size_t len, uint8_t* out) { return jsonminify(buf, len, out); }
EXPORTS(int) Global_json_parse(const uint8_t* buf, size_t len, ParsedJson* pj, bool reallocifneeded = true) { return json_parse(buf, len, *pj, reallocifneeded); }
