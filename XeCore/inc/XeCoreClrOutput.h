#ifndef _INC_XE_COER_CLR_OUTPUT_H_
#define _INC_XE_COER_CLR_OUTPUT_H_

#include "xeCoreConfig.h"

namespace xe
{
	EXTERN_C_STMT XE_EXPORT_C_PLUS_PLUS_API void XE_ERROR_OUTPUT(const char* output_text);
	EXTERN_C_STMT XE_EXPORT_C_PLUS_PLUS_API void XE_WARNING_OUTPUT(const char* output_text);
}

#endif // _INC_XE_COER_CLR_OUTPUT_H_ IS EOF