/*********************************************************************
 * node-clipboard
 *
 * Copyright (c) 2018 node-clipboard contributors:
 *   - hello_chenchen <https://github.com/hello-chenchen>
 *
 * MIT License <https://github.com/hello-chenchen/node-clipboard/blob/master/LICENSE>
 * See https://github.com/hello-chenchen/node-clipboard for the latest update to this file
 *
 * author: hello_chenchen <https://github.com/hello-chenchen>
 **********************************************************************************/

#ifndef CCLIB_OS_H_
#define CCLIB_OS_H_

namespace cclib {

#if !defined(IS_MACOSX) && defined(__APPLE__) && defined(__MACH__)
	#define IS_MACOSX
#endif /* IS_MACOSX */
}

#endif CCLIB_OS_H_ // CCLIB_OS_H_