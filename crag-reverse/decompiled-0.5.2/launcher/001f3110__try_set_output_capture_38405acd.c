// 001f3110 try_set_output_capture

/* std[6c98fd8553dbae28]::io::stdio::try_set_output_capture */

undefined8 __rustcall std[6c98fd8553dbae28]::io::stdio::try_set_output_capture(longlong *param_1)

{
  longlong lVar1;
  longlong *in_FS_OFFSET;
  
  if ((param_1 != (longlong *)0x0) || (OUTPUT_CAPTURE_USED != '\0')) {
    OUTPUT_CAPTURE_USED = '\x01';
    lVar1 = *in_FS_OFFSET;
    if (*(char *)(lVar1 + -0x88) != '\0') {
      if (*(char *)(lVar1 + -0x88) != '\x01') {
        if (param_1 == (longlong *)0x0) {
          OUTPUT_CAPTURE_USED = 1;
          return 1;
        }
        LOCK();
        *param_1 = *param_1 + -1;
        UNLOCK();
        if (*param_1 == 0) {
          (*(code *)PTR_drop_slow_0021a768)();
          return 1;
        }
        return 1;
      }
      (*(code *)PTR_register_0021a180)();
      *(undefined1 *)(lVar1 + -0x88) = 0;
    }
    *(longlong **)(lVar1 + -0x90) = param_1;
  }
  return 0;
}


