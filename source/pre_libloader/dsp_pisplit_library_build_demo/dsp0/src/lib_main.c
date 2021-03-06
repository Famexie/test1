/*
 * Customer ID=4313; Build=0x60d30; Copyright (c) 2012-2013 by Tensilica Inc. ALL RIGHTS RESERVED.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
 
#include <stdio.h>

#if 1
 /* declare a printf function pointer */
 typedef int (*printf_ptr_t)(const char *format, ...);
 
 printf_ptr_t printf_ptr;
 
 /* replace all calls to printf with calls through the pointer. */
#define printf printf_ptr
     
 /* This is the function provided by the library. */
 char * dsp0_demo_lib_entry_1(void)
 {
   printf("[dsp0_pisplit_library_build_demo] executing function dsp0_demo_lib_entry_1\n");
   return "[dsp0_pisplit_library_build_demo] this string returned from dsp0_demo_lib_entry_1";
 }
 char * dsp0_demo_lib_entry_2(void)
 {
   printf("[dsp0_pisplit_library_build_demo] executing function dsp0_demo_lib_entry_2\n");
   return "[dsp0_pisplit_library_build_demo] this string returned from dsp0_demo_lib_entry_2";
 }

/*The function of dsp0_demo_lib_entry_3() defined in dsp\project\mt2811a_evb\templates\dsp_pisplit_library_build_demo\dsp0_sub_lib_for_PIC.
 This is a sub lib function*/
 extern char * dsp0_demo_lib_entry_3(void);

 void * export_parameter_array[3] = {dsp0_demo_lib_entry_1,dsp0_demo_lib_entry_2,dsp0_demo_lib_entry_3};
 /* This function is called from the main application. */
 void * _start (void *p_import_parameters_array[])
 {
   printf_ptr = p_import_parameters_array[0];
    printf("[dsp0_pisplit_library_build_demo] [start]:dsp0_demo_lib_entry_1:0x%x   dsp0_demo_lib_entry_2:0x%x   dsp0_demo_lib_entry_3:0x%x",dsp0_demo_lib_entry_1,dsp0_demo_lib_entry_2,dsp0_demo_lib_entry_3);
   return export_parameter_array;
 }

#endif
