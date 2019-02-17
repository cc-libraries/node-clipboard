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

//COMMENT: for mac os
#if !defined(IS_MACOSX) && defined(__APPLE__) && defined(__MACH__)	//TODO: maybe need to remove __APPLE__ and __MACH__
	#define IS_MACOSX
#endif /* IS_MACOSX */

//COMMENT: for linux
#if !defined(USE_X11) && !defined(NUSE_X11) && !defined(IS_MACOSX) && !defined(IS_WINDOWS)	//TODO: maybe need to remove NUSE_X11
	#define USE_X11
#endif /* USE_X11 */
}

#endif // CCLIB_OS_H_